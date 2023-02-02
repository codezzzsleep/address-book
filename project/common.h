#pragma once

#include <iostream>
#include <ShlObj.h>
#include <windows.h>
#include <Commdlg.h>
#include "HiEasyX.h"


#define WINDOW_WIDTH        300			                                              //���崰�ڵĿ��

#define WINDOW_HEIGHT       480	                                                      //���崰�ڵĸ߶�

#define BUTTON_WIDTH        160                                                       //���尴ť�Ŀ��
					        			                                              
#define BUTTON_HEIGHT       40                                                        //���尴ť�ĳ���
						    									                      
#define OK 1

#define ERROR 0

typedef int Status;

#define MAXSIZE                 1000												  //ÿ��ͨѶ¼��������	

/*
	��ϵ�˽ṹ��
*/
typedef struct person
{
	int age;		                                                                  //����
	int sex;		                                                                  //�Ա�
	std::string phone;                                                                //�绰
	std::string address;                                                              //��ַ
	std::string belong;																  //���
	std::string name;                                                                 //����

}Person;

typedef Person ElemType;
/*
	ͨѶ¼
*/
typedef struct addressbook 
{
	Person* elem;																	  //�洢�ռ�Ļ���ַ
	int length;																		  //�Ѿ��洢�ĸ���
}SqList;






/*
	��ʼ��˳���
*/
Status InitList_Sq(SqList& L);



///////////////////////////////////////////////
/*
	ͼ�λ���������
*/
//////////////////////////////////////////////
/*
	��ʼ�����ں���
*/
void init();

/*
	�ݻٴ���
*/
void destroy();

void menu();

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
	�����ļ�
*/
void onImport();
/*
	���ļ�ѡ����
*/
void openFileDialog();
/*
	����
*/
void onSearch();