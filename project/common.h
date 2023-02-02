#pragma once

#include <iostream>
#include "HiEasyX.h"


#define WINDOW_WIDTH        640			                                              //定义窗口的宽度

#define WINDOW_HEIGHT       490	                                                      //定义窗口的高度

#define AMOUNT              7                                                         //定义功能总数
										                                              
#define BUTTON_WIDTH        160                                                       //定义按钮的宽度
					        			                                              
#define BUTTON_HEIGHT       40                                                        //定义按钮的长度
						    									                      
#define HEIGHT_DISTANCE     (WINDOW_HEIGHT / AMOUNT - BUTTON_HEIGHT)/2                //定义按钮的纵向距离

#define OK 1

#define ERROR 0

#define COL  8                                                                         //列数
#define ROW	 10    																	   //行数


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
	创建新的窗口
*/
void createNewWindow();
/*
	初始化新窗口
*/
void initNewWindow();
/*
	画表格
*/
void showTable();