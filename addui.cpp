#include "addui.h"
#include "ui_addui.h"
#include "data.h"
#include <QMessageBox>
#include <QFileDialog>
#include "op.h"

#define z(s) (QString::fromLocal8Bit(s))
addUI::addUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addUI)
{
    ui->setupUi(this);

}

addUI::~addUI()
{
    delete ui;
}

//添加单个用户
void addUI::on_pushButton_clicked()
{
    QString name = ui->lineEdit_2->text();        
    QString phone = ui->lineEdit->text();         
    QString address = ui->lineEdit_3->text();
    QString belong = ui->lineEdit_4->text();
    string tname,tphone,taddress,tbelong;

    tname=string(name.toLocal8Bit());
    tphone=phone.toStdString();
    taddress = string(address.toLocal8Bit());
    tbelong = string(belong.toLocal8Bit());
    myinit();                                     
    int flag;
    flag=myfind(tname,tphone);                    
    if(flag!=0){                                  
        QMessageBox::information(this,z("错误"),z("该用户已存在"));
    }else{
        setDate(tname, tphone, taddress, tbelong);
        QMessageBox::information(this,z("完成"),z("添加成功"));
        myfinish();                              
    }
    //文本框清空
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
}

//取消关闭添加
void addUI::on_pushButton_2_clicked()
{
    this->close();
}

//导入名单
void addUI::on_pushButton_3_clicked()
{
    QString qpath = QFileDialog::getOpenFileName(this,z("选择导入名单"),".","txt file(*.txt);");
    string path,tname,tphone,taddress,tbelong;
    path = string(qpath.toLocal8Bit());
    ifstream data(path);                        
    myinit();                                   
    while (data >> s) {
        tname = s;
        data >> s;
        tphone = s;
        data >> s;
        taddress = s;
        data >> s;
        tbelong = s;
        int flag;
        flag=myfind(tname,tphone);              
        if(flag!=0){
            continue;
        }else{
            setDate(tname, tphone, taddress, tbelong);
        }
    }
    data.close();
    QMessageBox::information(this,z("完成"),z("添加名单成功"));
    myfinish();                                 
}

