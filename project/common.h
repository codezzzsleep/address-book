#pragma once

#include <iostream>
#include <ShlObj.h>
#include <windows.h>
#include <Commdlg.h>
#include "HiEasyX.h"


#define WINDOW_WIDTH        300			                                              //定义窗口的宽度

#define WINDOW_HEIGHT       480	                                                      //定义窗口的高度

#define BUTTON_WIDTH        160                                                       //定义按钮的宽度
					        			                                              
#define BUTTON_HEIGHT       40                                                        //定义按钮的长度
						    									                      
#define OK 1

#define ERROR 0

typedef int Status;

#define MAXSIZE                 1000												  //每个通讯录最大的数量	

/*
	联系人结构体
*/
typedef struct person
{
	int age;		                                                                  //年龄
	int sex;		                                                                  //性别
	std::string phone;                                                                //电话
	std::string address;                                                              //地址
	std::string belong;																  //类别
	std::string name;                                                                 //姓名

}Person;

typedef Person ElemType;
/*
	通讯录
*/
typedef struct addressbook 
{
	Person* elem;																	  //存储空间的基地址
	int length;																		  //已经存储的个数
}SqList;






/*
	初始化顺序表
*/
Status InitList_Sq(SqList& L);



///////////////////////////////////////////////
/*
	图形化函数定义
*/
//////////////////////////////////////////////
/*
	初始化窗口函数
*/
void init();

/*
	摧毁窗口
*/
void destroy();

void menu();

/*
	加载功能按钮
*/
void loadButton();
/*
	加载标题
*/
void loadTitle();

/*
	创建新的通讯录
*/
void onCreate();
/*
	在通讯录的末尾，写入新的信息
*/
void onAdd();
/*
	查询某人的信息，如果找到了，则显示该人的信息，如果未找到，则提示通讯录中没有此人的信息，并返回选单
*/
void onFind();
/*
	修改某人的信息，如果未找到要修改的人，则提示通讯录中没有此人的信息，并返回选单。
*/
void onAlter();
/*
	删除某人的信息，如果未找到要删除的人，则提示通讯录中没有此人的信息，并返回选单。
*/
void onDelete();
/*
	显示通讯录的所有信息
*/
void onList();
/*
	导入文件
*/
void onImport();
/*
	打开文件选择器
*/
void openFileDialog();
/*
	搜索
*/
void onSearch();