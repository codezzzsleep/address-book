#include "mainwindow.h"
#include <QApplication>
#include "data.h"                                   //需要的头文件
#include <QSplashScreen>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);                     //定义应用程序对象

  
    MainWindow w;                                   //定义一个主窗口对象 w
    w.show();                                       //显示主窗口


    return a.exec();                                //事件循环
}
