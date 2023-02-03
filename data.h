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
extern string s, name, phone;				

extern void myinit();						//初始化，读取文本文件中的内容
extern void myfinish();						//保存修改后的内容到文本文件中
extern int myfind(string a,string b);		//查找用户是否存在

#endif // DATA_H
