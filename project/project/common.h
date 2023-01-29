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
hiex::Window init();

/*
	摧毁窗口函数
*/
void destroy();

/*
	绘制菜单
*/
int menu(hiex::Window);
/*
	加载功能按钮
*/
void loadButton(hiex::Window window);


