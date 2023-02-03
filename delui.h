#ifndef DELUI_H
#define DELUI_H

#include <QDialog>
#include <QStringListModel>
#include <QFile>

namespace Ui {
class delUI;
}

class delUI : public QDialog
{
    Q_OBJECT
    QStringListModel *model;                //添加的成员变量，列表实现老工具人了
    QStringList tuser;                      //添加的成员变量

public:
    explicit delUI(QWidget *parent = nullptr);
    int mulflag;                            //实现快速删除时会用到
    ~delUI();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();    
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    //下面为为实现快速删除设置的函数
    void del_change(QModelIndex index);

private:
    Ui::delUI *ui;
};

#endif // DELUI_H
