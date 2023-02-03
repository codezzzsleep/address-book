#ifndef ADDUI_H
#define ADDUI_H

#include <QDialog>

namespace Ui {
class addUI;
}

class addUI : public QDialog
{
    Q_OBJECT

public:
    explicit addUI(QWidget *parent = nullptr);
    ~addUI();

private slots:
    //三个槽函数申明
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::addUI *ui;
};

#endif // ADDUI_H
