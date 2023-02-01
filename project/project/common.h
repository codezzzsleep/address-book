#pragma once

#include <iostream>
#include "HiEasyX.h"


#define WINDOW_WIDTH        630			                                              //定义窗口的宽度
#define WINDOW_HEIGHT       490	                                                      //定义窗口的高度
//#define USE_MYSQL	        FALSE                                                     //是否使用数据库
#define AMOUNT              7                                                         //定义功能总数
										                                              
#define BUTTON_WIDTH        160                                                       //定义按钮的宽度
					        			                                              
#define BUTTON_HEIGHT       40                                                        //定义按钮的长度
						    									                      
#define HEIGHT_DISTANCE     (WINDOW_HEIGHT / AMOUNT - BUTTON_HEIGHT)/2                //定义按钮的纵向距离


/*
	初始化窗口函数
*/
void init();

/*
	摧毁窗口
*/
void destroy();

/*
	获取当前窗口
*/
hiex::Window getWindow();

/*
	获取当前画布
*/
hiex::Canvas getCanvas();
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
