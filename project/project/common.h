#pragma once

#include <iostream>
#include "HiEasyX.h"


#define WINDOW_WIDTH        630			                                              //���崰�ڵĿ��
#define WINDOW_HEIGHT       490	                                                      //���崰�ڵĸ߶�
//#define USE_MYSQL	        FALSE                                                     //�Ƿ�ʹ�����ݿ�
#define AMOUNT              7                                                         //���幦������
										                                              
#define BUTTON_WIDTH        160                                                       //���尴ť�Ŀ��
					        			                                              
#define BUTTON_HEIGHT       40                                                        //���尴ť�ĳ���
						    									                      
#define HEIGHT_DISTANCE     (WINDOW_HEIGHT / AMOUNT - BUTTON_HEIGHT)/2                //���尴ť���������


/*
	��ʼ�����ں���
*/
hiex::Window init();

/*
	�ݻٴ��ں���
*/
void destroy();

/*
	���Ʋ˵�
*/
int menu(hiex::Window);
/*
	���ع��ܰ�ť
*/
void loadButton(hiex::Window window);


