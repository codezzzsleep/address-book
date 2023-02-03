#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include <QModelIndex>
#include <QStandardItemModel>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QStringListModel *model;                //添加的成员变量
    QStringList tuser;                      //添加的成员变量

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //下面是槽函数们，会被对应的信号触发，即对应按钮被点击时
    void on_pushButton_clicked();           //查找联系人
    void on_pushButton_2_clicked();         //新建联系人
    void on_pushButton_3_clicked();         //删除联系人
    //void on_pushButton_4_clicked();         //拨号
    //void on_pushButton_5_clicked();         //设置头像
    //void on_pushButton_6_clicked();         //设置窗口背景
    //void on_pushButton_7_clicked();         //bgm开启
    //void on_pushButton_8_clicked();       //bgm关闭

    //下面是自己编写的函数，此处申明，之后在mainwinodw.cpp中定义
    void re_change(QModelIndex index);      //选择列表用户改变ID框和电话框
    void listinit();                        //初始化右侧列表 

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
