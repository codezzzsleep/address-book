#include "addui.h"
#include "ui_addui.h"
#include "data.h"
#include <QMessageBox>
#include <QFileDialog>


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
    QString name = ui->lineEdit_2->text();        //读取姓名文本框中的姓名
    QString phone = ui->lineEdit->text();         //读取电话文本框中的电话
    string tname,tphone;
    //stirng转为qstring
    tname=string(name.toLocal8Bit());
    tphone=phone.toStdString();
    myinit();                                     //读入(初始化)一下数据
    int flag;
    flag=myfind(tname,tphone);                    //看是否有名字和电话相同的人存在
    if(flag!=0){                                  //有
        QMessageBox::information(this,z("错误"),z("该用户已存在"));//弹出消息窗口提示
    }else{                                        
        users.push_back(make_pair(tname, tphone));//没有则将他添加进来
        idpixs.push_back("images/human.png");     //将头像设为默认头像
        QMessageBox::information(this,z("完成"),z("添加成功"));//弹出消息窗口提示
        myfinish();                              //保存数据，重新存入对应文本文件中
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
    //打开文件打开对话框，选择要读入的文本文件，并保存其路径到qpath
    QString qpath = QFileDialog::getOpenFileName(this,z("选择导入名单"),".","txt file(*.txt);");
    string path,tname,tphone;
    path = string(qpath.toLocal8Bit());
    ifstream data(path);                        //打开选择的文本文件
    myinit();                                   //数据初始化，即读入原有数据
    while (data >> s) {
        tname = s;
        data >> s;
        tphone = s;
        int flag;
        flag=myfind(tname,tphone);              //判断导入名单中当前导入的用户是否存在，避免重复添加
        if(flag!=0){
            continue;
        }else{
            users.push_back(make_pair(tname, tphone));  //存入姓名电话
            idpixs.push_back("images/human.png");       //设为默认头像
        }
    }
    data.close();
    QMessageBox::information(this,z("完成"),z("添加名单成功"));//弹出消息窗口提示
    myfinish();                                 //保存数据，重新存入对应文本文件中
}

