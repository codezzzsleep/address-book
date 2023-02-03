#include "op.h"

SqList L;
int flag = 0;
Status ininSqList(SqList& L) {
    L.elem = new ElemType[MAXSIZE];  

    if (!L.elem) exit(OVERFLOW);   

    L.length = 0;             
    flag++;
    return OK;
}

SqList getSqList() {
    if (!flag)
        ininSqList(L);
    return L;
}
Status setDate(std::string name, std::string phone, std::string address, std::string belong) {
    int len = L.length;
    if (len < MAXSIZE) {
        L.elem[len].name = name;
        L.elem[len].phone = phone;
        L.elem[len].address = address;
        L.elem[len].belong = belong;
        L.length++;
    }
    else {
        return OVERFLOW;
    }
    return OK;
}
Status SqListClear() {
    ininSqList(L);
}
Status deleteElemByIndex(int idx) {
    int len = L.length;
    if (idx > len || idx<0) {
        return OVERFLOW;
    }
    else {
        for (int i = idx; i < len-1; i++) {
            L.elem[i].name = L.elem[i + 1].name;
            L.elem[i].address = L.elem[i + 1].address;
            L.elem[i].phone = L.elem[i + 1].phone;
            L.elem[i].belong = L.elem[i + 1].belong;
        }
        L.length--;
    }
}