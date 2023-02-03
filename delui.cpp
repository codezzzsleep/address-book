#include "delui.h"
#include "ui_delui.h"
#include <QMessageBox>
#include <QFileDialog>
#include "data.h"

#define z(s) (QString::fromLocal8Bit(s))
delUI::delUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delUI)
{
    ui->setupUi(this);

    int i;
    mulflag = 0;                                        //默认快速删除关闭
    myinit();                                           //初始化(读入数据)
    //下面这一段和mainwindow.cpp那一段类似，目的就是初始化列表，不再多介绍
    QString name,phone;
    for(i=0;i<users.size();i++){
        name=QString::fromLocal8Bit(users[i].first.data());
        phone = QString::fromLocal8Bit(users[i].second.data());
        name = name +" : "+ phone;
        tuser.push_back(name);
    }
    model = new QStringListModel(this);
    model->setStringList(tuser);
    ui->listView->setModel(model);
    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //绑定列表成员被点击时的信号和槽函数del_change(QModelIndex)
    connect(ui->listView,SIGNAL(clicked(QModelIndex)),this,SLOT(del_change(QModelIndex)));
    ui->textBrowser->setText(z("快速删除：关闭")); //默认显示关闭
    ui->textBrowser->setFocusPolicy(Qt::NoFocus);  //使得 快速删除状态栏 不可被聚焦(点不了)
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
        flag=myfind(tname,tphone);                      //查看黑名单的用户是否存在
        if(flag==0){                                    //不存在直接跳过
            continue;
        }else{                                          //存在就删掉有关他的信息
            users.erase(users.begin()+flag-1);
            idpixs.erase(idpixs.begin()+flag-1);
            model->removeRow(flag-1);
        }
    }
    data.close();
    QMessageBox::information(this,z("完成"),z("删除全体在黑名单中的成员成功"));//消息窗口提醒
    myfinish();                                         //保存数据
}

//清空列表
void delUI::on_pushButton_4_clicked()
{
    model->removeRows(0,model->rowCount());             //清空列表内容
    users.clear();                                      //清空用户姓名电话
    idpixs.clear();                                     //清空用户头像
    myfinish();                                         //保存数据
}

//删除
void delUI::on_pushButton_5_clicked()
{    
    int row_idx;
    QModelIndex index = ui->listView->currentIndex();   //index存当前所在列表的下标
    row_idx = index.row();                              //第几行
    model->removeRow(row_idx);                          //删掉那一行
    users.erase(users.begin()+row_idx);                 //清除他的名字电话
    idpixs.erase(idpixs.begin()+row_idx);               //清除他的头像
    myfinish();                                         //保存数据
}

//完成
void delUI::on_pushButton_6_clicked()
{
    myfinish();                     //退出前保存数据
    this->close();
}

//快速删除实现
void delUI::del_change(QModelIndex index)
{
    if(mulflag==1){
        on_pushButton_5_clicked();  //即开启后点击用户直接删除(自动帮你点击 删除 按钮)
    }
}
