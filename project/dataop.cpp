#include "common.h"


Status InitList_Sq(SqList& L) {
    L.elem = new ElemType[MAXSIZE];  //Ϊ˳������ռ�

    if (!L.elem) exit(OVERFLOW);   //�洢����ʧ��

    L.length = 0;             //�ձ���Ϊ0

    return OK;
}