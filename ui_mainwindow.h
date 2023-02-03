/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QPushButton *pushButton;
    QWidget *widget_2;
    QLineEdit *lineEdit;
    QWidget *widget_3;
    QListWidget *listWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QListView *listView;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_6;
    QLabel *label_3;
    QLabel *label_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(980, 636);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow{\n"
"	border-image: url(:/images/flowers.png);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(610, 40, 361, 61));
        widget->setAutoFillBackground(false);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 10, 71, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(10);
        pushButton->setFont(font);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"	background:rgba(246, 249, 245,0.15);\n"
"	font: 87 10pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 10, 41, 41));
        widget_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/search.png);"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 10, 241, 41));
        QFont font1;
        font1.setPointSize(20);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("#lineEdit\n"
"{\n"
"	background:rgba(12,10,20,0.3);\n"
"	color: rgb(215, 223, 218);\n"
"}"));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(0, -6, 981, 621));
        widget_3->setStyleSheet(QString::fromUtf8("#widget_3\n"
"{\n"
"	background:rgba(12,10,20,0.4);\n"
"}"));
        listWidget = new QListWidget(widget_3);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 0, 551, 591));
        listWidget->setAutoFillBackground(true);
        listWidget->setStyleSheet(QString::fromUtf8("#listWidget\n"
"{\n"
"	background:rgba(12,10,20,0.3);\n"
"}"));
        listWidget->setInputMethodHints(Qt::ImhNone);
        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(900, 10, 71, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2\n"
"{\n"
"	background:rgba(246, 249, 245,0.15);\n"
"	font: 87 10pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        pushButton_3 = new QPushButton(widget_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(820, 10, 71, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3\n"
"{\n"
"	background:rgba(246, 249, 245,0.15);\n"
"	font: 87 10pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 110, 54, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial Black"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(10);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"	background:rgba(12,10,20,0.3);\n"
"	font: 87 14pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 210, 54, 41));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"	background:rgba(12,10,20,0.3);\n"
"	font: 87 14pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        listView = new QListView(widget_3);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(610, 120, 361, 511));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        listView->setFont(font3);
        listView->setStyleSheet(QString::fromUtf8("#listView\n"
"{\n"
"color: rgb(215, 223, 218);\n"
"	background:rgba(12,10,20,0.35);\n"
"}"));
        listView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listView->setAutoScrollMargin(16);
        lineEdit_2 = new QLineEdit(widget_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 110, 281, 41));
        QFont font4;
        font4.setPointSize(16);
        lineEdit_2->setFont(font4);
        lineEdit_2->setStyleSheet(QString::fromUtf8("#lineEdit_2\n"
"{\n"
"	background:rgba(12,10,20,0.3);\n"
"	color: rgb(215, 223, 218);\n"
"}"));
        lineEdit_3 = new QLineEdit(widget_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 210, 281, 41));
        lineEdit_3->setFont(font4);
        lineEdit_3->setStyleSheet(QString::fromUtf8("#lineEdit_3\n"
"{\n"
"	background:rgba(12,10,20,0.3);\n"
"	color: rgb(215, 223, 218);\n"
"}"));
        lineEdit_4 = new QLineEdit(widget_3);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(160, 310, 281, 41));
        lineEdit_4->setFont(font4);
        lineEdit_4->setStyleSheet(QString::fromUtf8("#lineEdit_4\n"
"{\n"
"	background:rgba(12,10,20,0.3);\n"
"	color: rgb(215, 223, 218);\n"
"}"));
        lineEdit_6 = new QLineEdit(widget_3);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(160, 420, 281, 41));
        lineEdit_6->setFont(font4);
        lineEdit_6->setStyleSheet(QString::fromUtf8("#lineEdit_6\n"
"{\n"
"	background:rgba(12,10,20,0.3);\n"
"	color: rgb(215, 223, 218);\n"
"}"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 310, 54, 41));
        label_3->setStyleSheet(QString::fromUtf8("#label_3\n"
"{\n"
"	background:rgba(12,10,20,0.3);\n"
"	font: 87 14pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 420, 54, 41));
        label_4->setStyleSheet(QString::fromUtf8("#label_4\n"
"{\n"
"	background:rgba(12,10,20,0.3);\n"
"	font: 87 14pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        pushButton_2->raise();
        listWidget->raise();
        pushButton_3->raise();
        label->raise();
        label_2->raise();
        listView->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        lineEdit_6->raise();
        label_3->raise();
        label_4->raise();
        MainWindow->setCentralWidget(centralwidget);
        widget_3->raise();
        widget->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\351\200\232\350\256\257\345\275\225\347\263\273\347\273\237", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\347\224\265\350\257\235", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\345\234\260\345\235\200", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\345\205\263\347\263\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
