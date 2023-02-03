#ifndef DATA_H
#define DATA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>
#include <fstream>
#include <QStringList>
#include <QFile>
#include <QVector>

using namespace std;
//extern 是为了让其他程序访问以下变量，注意在此处申明但不要定义
extern vector<pair<string, string> >users;	//用于保存姓名和电话
extern QVector<QString> idpixs;				//用于保存头像图片文件路径
extern string s, name, phone;				

extern void myinit();						//初始化，读取文本文件中的内容
extern void myfinish();						//保存修改后的内容到文本文件中
extern int myfind(string a,string b);		//查找用户是否存在
extern void mycall(string s);				//拨号

#endif // DATA_H
