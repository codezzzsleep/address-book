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

#define z(s) (QString::fromLocal8Bit(s))      //定义z(s)方便使用，其作用是为了让中文可以正常显示


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    listinit();                               //自己编写的函数，用于主窗口初始化
    //connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(on_pushButton_7_clicked));
    //connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(on_pushButton_8_clicked));

    QModelIndex index = model->index(0);      //即设置第一个用户
    ui->listView->clicked(index);             //默认点击列表的一个用户(让头像显示第一个用户)
    ui->listView->setCurrentIndex(index);     //默认选择列表的一个用户(让用户和电话显示第一个用户)

    //用户和姓名文本框设为只读，否则可以修改(有兴趣的同学也可以不设为只读，添加并绑定新的槽函数(需同学额外编写)，使得更改的用户名和电话可保存)
    ui->lineEdit_2->setReadOnly(true);         
    ui->lineEdit_3->setReadOnly(true);
    ui->lineEdit_4->setReadOnly(true);
}

MainWindow::~MainWindow()
{
    delete ui;

}


//查找联系人
void MainWindow::on_pushButton_clicked()
{
    QString qname = ui->lineEdit->text();               //读取查找文本框内文字(姓名)

    //将其转化为string类，为什么要转化呢，其实就是阿鑫太菜了，初学Qt对Qt数据类型的用法不太清楚，转为string后很多对阿鑫来说就好写了
    string name=string(qname.toLocal8Bit());            

    int i;
    //vector<pair<string, string> >users申明在data.h中，之后会讲，first存的名字，second存的电话
    for(i=0;i<users.size();i++)                         
    {
        if(users[i].first==name){                       //如果存的用户中有叫这个名字的人
            break;
        }
    }
    if(i>=users.size()){                                //即没这个人
        QMessageBox::information(this,z("错误"),z("查无此人"));       //消息弹窗，提醒查无此人
        ui->lineEdit->setText("");                      //清空查找文本框内容
    }else{                                              //即有这个人    
        QString qphone;
        qphone = QString::fromLocal8Bit(users[i].second.data());    //记录他电话，并将string转为qstring，否则下面会报错
        ui->lineEdit_2->setText(qname);                 //姓名文本框显示他的名字
        ui->lineEdit_3->setText(qphone);                //电话文本框显示他的电话

        //下面几行就是选中该用户并显示 姓名，电话和头像，仔细一看上面几行似乎多余了，不删了吧
        listinit();                                     
        QModelIndex index = model->index(i);
        ui->listView->setCurrentIndex(index);           
        ui->listView->clicked(index);                       

        QMessageBox::information(this, "note", z("已成功找到"));     //消息弹窗，已成功找到
        ui->lineEdit->setText("");                      //清空查找文本框内容
    }
}



//新建联系人
void MainWindow::on_pushButton_2_clicked()
{
    addUI addui;                                        //定义一个addUI对象 addui
    addui.setWindowTitle(z("添加联系人"));              //设置标题
    addui.setWindowIcon(QIcon("images/Logo.ico"));      //设置图标
    addui.exec();                                       //显示
    listinit();                                         //再次初始化列表(其实就是更新信息）
}


//删除联系人
void MainWindow::on_pushButton_3_clicked()
{
    delUI dui;                                          //定义一个delUI对象 dui
    dui.setWindowTitle(z("删除联系人"));                //设置标题
    dui.setWindowIcon(QIcon("images/Logo.ico"));        //设置图标
    dui.exec();                                         //显示
    listinit();                                         //再次初始化列表(其实就是更新信息）
}

//拨号 (这个需要配置一下 你的手机 这款应用，没有就不要点，否则点击会崩溃，会在data.cpp中提到)
//如果直接用Qt Creator打开的话把这函数注释掉，包括data.cpp中的对他的定义，原因会在data.cpp中提到，vs打开则不需要注释掉
void MainWindow::on_pushButton_4_clicked()              
{
    QString phone = ui->lineEdit_3->text();             //读取电话文本框的内容
    string tphone;
    tphone = string(phone.toLocal8Bit());               //转为string
    mycall(tphone);                                     //在data.cpp中定义
}

//设置头像
void MainWindow::on_pushButton_5_clicked()
{
    //打开文件选择对话框，设定只可以选择.png和.jpg文件并利用qpath保存文件路径
    QString qpath = QFileDialog::getOpenFileName(this,z("选择导入头像"),".","image file(*.png *.jpg);");

    QModelIndex index = ui->listView->currentIndex();   //读取当前用户列表中选中的用户
    int idx = index.row();                              //idx保存他在第几行(对应他保存时的下标)
    if(qpath == "") qpath = "images/human.png";         //如果读取路径为空，即直接关闭了，则设为默认图形位置
    idpixs[idx] = qpath;                                //将图像路径保存，(QVector<QString> idpixs申明在data.h，用于存头像文件路径)
    //下面两行用于将头像更改
    qpath = "#widget_5{border-image:url("+ qpath +");}";//将widget_5的背景更改的语句
    //ui->widget_5->setStyleSheet(qpath);                 //即更改头像窗口的样式表
    //保存修改后的图片路径，否则下次重新运行时头像又是默认头像了
    QFile pixfout("idpix.txt");                        //idpix.txt存头像图片路径，使得下次打开程序是头像会显示之前设置的     
    if(!pixfout.open(QIODevice::WriteOnly | QIODevice::Text)) {
        cout<<"can not open the idpix.txt"<<endl;      //打不开保存的文件(用cout其实打包后这个似乎并没用，只是我最初编写时为了方便自己查看问题)
    }
    for(int i=0;i<users.size();i++){
        pixfout.write((idpixs[i]+"\n").toUtf8());      //将头像文件路径依次写入idpix.txt
    }
    pixfout.close();
}

//设置窗口背景
void MainWindow::on_pushButton_6_clicked()
{
    //此处和头像更改几乎一样不多做解释
    //但这里你也可以看到将路径保存到.txt文件的用处了
    //头像更改后，再次打开头像显示会是更改后的，但是背景更改后再次打开会又变成默认背景(毕竟没有保存嘛)
    QString qpath = QFileDialog::getOpenFileName(this,z("选择导入背景"),".","image file(*.png *.jpg);");
    if (qpath == "") qpath = "images/flowers.png";
    qpath = "#MainWindow{border-image:url("+ qpath +");}";
    this->setStyleSheet(qpath);
}


//bgm设置
void MainWindow::on_pushButton_7_clicked()
{
    mciSendString(L"close bgm", 0, 0, 0);
    mciSendString(L"open songs\\bgm4.mp3 alias bgm", 0, 0, 0);
    mciSendString(L"play bgm", 0, 0, 0);
}

//bgm关闭
void MainWindow::on_pushButton_8_clicked()
{
    mciSendString(L"close bgm", 0, 0, 0);
}

//选择列表用户改变ID框和电话框
void MainWindow::re_change(QModelIndex index)           //这个函数绑定的信号是点击列表用户时触发，可在下面的listinit()中看到
{
    int idx;
    idx = index.row();                                  //idx保存传来的index的所在行数(其与保存下标相等)(当然也是从第0行开始)
    QString name,phone,qpath;
    name = QString::fromLocal8Bit(users[idx].first.data());   //保存名字
    phone = QString::fromLocal8Bit(users[idx].second.data()); //保存电话
    ui->lineEdit_2->setText(name);                      //姓名文本框显示他的名字
    ui->lineEdit_3->setText(phone);                     //电话文本框显示他的电话
    //下面几行使得图片窗口显示他的头像
    qpath = idpixs[idx];
    qpath = "#widget_5{border-image:url("+ qpath +");}";
   // ui->widget_5->setStyleSheet(qpath);                 
}

//初始化右侧列表
void MainWindow::listinit()
{
    myinit();                                           //申明在data.h，定义在data.cpp

    QString name,phone;                         

    int i;
    tuser.clear();                                      //申明在mainwindow.h中对类MainWindow申明中,清空tuser;                
    for(i=0;i<users.size();i++){
        name=QString::fromLocal8Bit(users[i].first.data());     //读取用户名字并转为qstring
        phone = QString::fromLocal8Bit(users[i].second.data()); //读取用户电话并转为qstring
        name = name +" : "+ phone;                              //组合在一起
        tuser.push_back(name);                                  //将其放入tuser中
    }
    model = new QStringListModel(this);                        
    model->setStringList(tuser);                        //将tuser放到model里面
    ui->listView->setModel(model);                      //将model放到listView里面
    //这里为什么不能直接放呢，说下我个人的理解(很可能错的，大家听我瞎说一下就好，若有幸遇见懂得的大佬，希望可以指正一下我)
    //阿鑫以为其结构为QListView->QStringListModel->QStringList,可将QStringList比作内存，cpu一类，QStringListModel比作主板，
    //QListView比作机箱，要先将内存一类先装入主板，再将主板装入机箱，而不可直接将内存一类直接装于机箱
    
    //下面一行将列表用户被点击的信号和自己写的re_change(QModelIndex)槽函数绑定
    connect(ui->listView,SIGNAL(clicked(QModelIndex)),this,SLOT(re_change(QModelIndex)));  
    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置列表的文本不可编辑
}
