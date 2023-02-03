#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addui.h"
#include "data.h"
#include "delui.h"
#include <QMessageBox>
#include <QDialog>
#include <QWidget>
#include <QFileDialog>
#include <windows.h>
#include <Mmsystem.h>
#include "op.h"
#pragma comment(lib,"winmm.lib")

using namespace std;

#define z(s) (QString::fromLocal8Bit(s))      //为了让中文可以正常显示


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    listinit();                               

    QModelIndex index = model->index(0);      
    ui->listView->clicked(index);             
    ui->listView->setCurrentIndex(index);     

    ui->lineEdit_2->setReadOnly(true);         
    ui->lineEdit_3->setReadOnly(true);
    ui->lineEdit_4->setReadOnly(true);
    ui->lineEdit_6->setReadOnly(true);

}

MainWindow::~MainWindow()
{
    delete ui;

}


//查找联系人
void MainWindow::on_pushButton_clicked()
{
    QString qname = ui->lineEdit->text();               //读取查找文本框内文字

    string name=string(qname.toLocal8Bit());            

    int i;
    SqList L = getSqList();
    for (i = 0; i < L.length; i++) {
        if (L.elem[i].name == name) {
            break;
        }
    }
    
    if(i>=L.length){                               
        QMessageBox::information(this,z("错误"),z("查无此人"));       
        ui->lineEdit->setText("");                      
    }else{                                              
        QString qphone,qaddress,qbelong;
        
        qphone = QString::fromLocal8Bit(L.elem[i].phone.c_str());
        qaddress = QString::fromLocal8Bit(L.elem[i].address.c_str());
        qbelong = QString::fromLocal8Bit(L.elem[i].belong.c_str());
        ui->lineEdit_2->setText(qname);                 
        ui->lineEdit_3->setText(qphone);                
        ui->lineEdit_4->setText(qaddress);
        ui->lineEdit_6->setText(qbelong);
        listinit();                                     
        QModelIndex index = model->index(i);
        ui->listView->setCurrentIndex(index);           
        ui->listView->clicked(index);                       
        QMessageBox::information(this, "note", z("已成功找到"));     
        ui->lineEdit->setText("");                                   
    }
}



//新建联系人
void MainWindow::on_pushButton_2_clicked()
{
    addUI addui;                                        //定义一个addUI对象 addui
    addui.setWindowTitle(z("添加联系人"));              //设置标题
    addui.exec();                                       //显示
    listinit();                                         //再次初始化列表(其实就是更新信息）
}


//删除联系人
void MainWindow::on_pushButton_3_clicked()
{
    delUI dui;                                          //定义一个delUI对象 dui
    dui.setWindowTitle(z("删除联系人"));                //设置标题
    dui.exec();                                         //显示
    listinit();                                         //再次初始化列表(其实就是更新信息）
}



//选择列表用户改变ID框和电话框
void MainWindow::re_change(QModelIndex index)           
{
    int idx;
    idx = index.row();                                  
    QString name,phone,address,belong;
    SqList L = getSqList();
    name = QString::fromLocal8Bit(L.elem[idx].name.c_str());
    phone = QString::fromLocal8Bit(L.elem[idx].phone.c_str());
    address = QString::fromLocal8Bit(L.elem[idx].address.c_str());
    belong = QString::fromLocal8Bit(L.elem[idx].belong.c_str());
    ui->lineEdit_2->setText(name);                     
    ui->lineEdit_3->setText(phone);                    
    ui->lineEdit_4->setText(address);
    ui->lineEdit_6->setText(belong);
}

//初始化右侧列表
void MainWindow::listinit()
{
    myinit();                                           

    QString name,phone;                         

    int i;
    tuser.clear();                                      
    SqList L = getSqList();
    for (i = 0; i < L.length; i++) {
        name = QString::fromLocal8Bit(L.elem[i].name.c_str());
        phone = QString::fromLocal8Bit(L.elem[i].phone.c_str());
        name = name + " : " + phone;
        tuser.push_back(name);
    }
   
    model = new QStringListModel(this);                        
    model->setStringList(tuser);                        
    ui->listView->setModel(model);                      
    connect(ui->listView,SIGNAL(clicked(QModelIndex)),this,SLOT(re_change(QModelIndex)));  
    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers); 
}
