#pragma once
#include <iostream>
#define OK 1

#define ERROR 0

typedef int Status;

#define MAXSIZE                 1000												  

/*
*/
typedef struct person
{
	std::string phone;                                                               
	std::string address;                                                             
	std::string belong;																 
	std::string name;                                                                

}Person;

typedef Person ElemType;
/*
*/
typedef struct addressbook
{
	ElemType* elem;																	  
	int length;																		  
}SqList;

SqList getSqList();

Status setDate(std::string, std::string, std::string, std::string);

Status SqListClear();