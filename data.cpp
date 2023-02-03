#include "data.h"
#include "op.h"
vector<pair<string, string> >users;
QVector<QString> idpixs;
string s, name, phone,address,belong;

//拨号(用Qt Creator或者没有配置 你的手机 的话记得把这段函数注释掉)
void mycall(string s) {                              //传入电话的字符串
    //这里可以看出来阿鑫实现拨号的方法很笨(但确实是阿鑫当时可以想到最简单的方法了)
    //利用命令行打开 你的手机的快捷键 即打开这款应用
    system("C:\\Users\\lenovo\\Desktop\\communication\\你的手机.lnk");  
    //等待四秒(应用打开需要时间，但实际发现两秒就完全够了，四秒是为了保险)
    Sleep(4000);
    for (int i = 0; i < s.size(); i++) {             //将电话的每一位数字按顺序按下
        keybd_event(s[i], 0, 0, 0);                  //将对应的按键按下
        keybd_event(s[i], 0, KEYEVENTF_KEYUP, 0);    //将对应的按键抬起，组合以及就是模拟键盘输入
    }
    //下面四行就是点两下回车(也就是确认拨号键和拨号)
    keybd_event(VK_RETURN, 0, 0, 0);
    keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_RETURN, 0, 0, 0);
    keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
}

//初始化，读取文本文件中的内容
void myinit() {
    users.clear();                                  //清空users
    idpixs.clear();                                 //清空idpixs
    SqListClear();
    ifstream data("userbook.txt");                  //打开存有用户信息的文本文件
    QFile file("idpix.txt");                        //打开存有用户头像文件路径的文本文件
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        cout<<"can not open the idpix.txt"<<endl;
    }
    while(!file.atEnd()) {
        QString line = file.readLine();          //一行一行读
        //QString str(line);
        line =line.trimmed();                       //去掉回车
        idpixs.push_back(line);                     //将路径存入idpixs
    }
    SqList L = getSqList();
    while (data >> s) {                             //读一行名字
        name = s;                                   
        data >> s;                                  //读下一行的电话
        phone = s;                                  
        users.push_back(make_pair(name, phone));    //保存用户姓名和电话到users
        setDate(name, phone, "test", "test");
    }
    //文件关闭
    data.close();
    file.close();
}

//保存修改后的内容到文本文件中
void myfinish() {
    //打开文件
    ofstream fout("userbook.txt");      
    QFile pixfout("idpix.txt");
    if(!pixfout.open(QIODevice::WriteOnly | QIODevice::Text)) {
        cout<<"can not open the idpix.txt"<<endl;
    }
    for(int i=0;i<users.size();i++){
        //将对应信息分别写入对应的文本文件
        fout << users[i].first << " " << users[i].second << endl;
        pixfout.write((idpixs[i]+"\n").toUtf8());
    }
    //文件关闭
    fout.close();
    pixfout.close();
}

//查找用户是否存在
int myfind(string a, string b) {
    for (int i = 0; i < users.size(); i++) {
        if (users[i].first == a && users[i].second == b) {   //找到了名字和电话都相同的用户
            return i+1;                                      //返回他的位置，(背后完善mainwindow时忘记写过了这个了，啧)
        }
    }
    return 0;
}

