#include "delui.h"
#include "ui_delui.h"
#include <QMessageBox>
#include <QFileDialog>
#include "data.h"
#include "op.h"
#define z(s) (QString::fromLocal8Bit(s))
delUI::delUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delUI)
{
    ui->setupUi(this);

    int i;
    mulflag = 0;                                        
    myinit();                                           
   
    QString name,phone;
    /*for(i=0;i<users.size();i++){
        name=QString::fromLocal8Bit(users[i].first.data());
        phone = QString::fromLocal8Bit(users[i].second.data());
        name = name +" : "+ phone;
        tuser.push_back(name);
    }*/
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
    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    connect(ui->listView,SIGNAL(clicked(QModelIndex)),this,SLOT(del_change(QModelIndex)));
    ui->textBrowser->setText(z("快速删除：关闭")); 
    ui->textBrowser->setFocusPolicy(Qt::NoFocus);  
}

delUI::~delUI()
{
    delete ui;
}

//快速删除开
void delUI::on_pushButton_clicked()
{
    ui->textBrowser->setText(z("快速删除：开启"));
    mulflag=1;
}

//快速删除关
void delUI::on_pushButton_2_clicked()
{
    ui->textBrowser->setText(z("快速删除：关闭"));
    mulflag=0;
}

//导入黑名单
void delUI::on_pushButton_3_clicked()
{
    //qpath保存选择的名单路径
    QString qpath = QFileDialog::getOpenFileName(this,z("选择导入名单"),".","txt file(*.txt);");
    string path,tname,tphone;
    path = string(qpath.toLocal8Bit());
    ifstream data(path);
    myinit();
    while (data >> s) {
        tname = s;
        data >> s;
        tphone = s;
        int flag;
        flag=myfind(tname,tphone);                      
        if(flag==0){                                    
            continue;
        }else{                                          
            deleteElemByIndex(flag-1);
            model->removeRow(flag-1);
        }
    }
    data.close();
    QMessageBox::information(this,z("完成"),z("删除全体在黑名单中的成员成功"));
    myfinish();                                       
}

//清空列表
void delUI::on_pushButton_4_clicked()
{
    model->removeRows(0,model->rowCount());             //清空列表内容
    SqListClear();
    myfinish();                                         //保存数据
}

//删除
void delUI::on_pushButton_5_clicked()
{    
    int row_idx;
    QModelIndex index = ui->listView->currentIndex();   //index存当前所在列表的下标
    row_idx = index.row();                              //第几行
    model->removeRow(row_idx);                          //删掉那一行
    deleteElemByIndex(row_idx);                         //在列表中删除
    myfinish();                                         //保存数据
}

//完成
void delUI::on_pushButton_6_clicked()
{
    myfinish();                     
    this->close();
}

//快速删除实现
void delUI::del_change(QModelIndex index)
{
    if(mulflag==1){
        on_pushButton_5_clicked();  
    }
}
