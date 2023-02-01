#include "common.h"


Status InitList_Sq(SqList& L) {
    L.elem = new ElemType[MAXSIZE];  //为顺序表分配空间

    if (!L.elem) exit(OVERFLOW);   //存储分配失败

    L.length = 0;             //空表长度为0

    return OK;
}