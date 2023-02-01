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
void init();

/*
	�ݻٴ���
*/
void destroy();

/*
	��ȡ��ǰ����
*/
hiex::Window getWindow();

/*
	��ȡ��ǰ����
*/
hiex::Canvas getCanvas();
/*
	���ع��ܰ�ť
*/
void loadButton();
/*
	���ر���
*/
void loadTitle();

/*
	�����µ�ͨѶ¼
*/
void onCreate();
/*
	��ͨѶ¼��ĩβ��д���µ���Ϣ
*/
void onAdd();
/*
	��ѯĳ�˵���Ϣ������ҵ��ˣ�����ʾ���˵���Ϣ�����δ�ҵ�������ʾͨѶ¼��û�д��˵���Ϣ��������ѡ��
*/
void onFind();
/*
	�޸�ĳ�˵���Ϣ�����δ�ҵ�Ҫ�޸ĵ��ˣ�����ʾͨѶ¼��û�д��˵���Ϣ��������ѡ����
*/
void onAlter();
/*
	ɾ��ĳ�˵���Ϣ�����δ�ҵ�Ҫɾ�����ˣ�����ʾͨѶ¼��û�д��˵���Ϣ��������ѡ����
*/
void onDelete();
/*
	��ʾͨѶ¼��������Ϣ
*/
void onList();
/*
	�����µĴ���
*/
void createNewWindow();
