#include "data.h"
#include "op.h"
vector<pair<string, string> >users;
QVector<QString> idpixs;
string s, name, phone,address,belong;



//初始化，读取文本文件中的内容
void myinit() {
    users.clear();                                  
    idpixs.clear();                                 
    SqListClear();
    ifstream data("userbook.txt");                  
   
    SqList L = getSqList();
    while (data >> s) {                             
        name = s;                                   
        data >> s;                                  
        phone = s;
        data >> s;
        address = s;
        data >> s;
        belong = s;
        setDate(name, phone, address, belong);
    }
    data.close();
}

//保存修改后的内容到文本文件中
void myfinish() {
    ofstream fout("userbook.txt");      
    SqList L = getSqList();
    for (int i = 0; i < L.length; i++) {
        fout << L.elem[i].name << " " << L.elem[i].phone << " " << L.elem[i].address << " " << L.elem[i].belong << endl;
    }
    fout.close();
}

//查找用户是否存在
int myfind(string a, string b) {
    SqList L = getSqList();
    for (int i = 0; i < L.length; i++) {
        if (L.elem[i].name == a && L.elem[i].phone == b) {
            return i + 1;
        }
    }
    
    return 0;
}

