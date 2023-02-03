/********************************************************************************
** Form generated from reading UI file 'delui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELUI_H
#define UI_DELUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_delUI
{
public:
    QListView *listView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *delUI)
    {
        if (delUI->objectName().isEmpty())
            delUI->setObjectName(QString::fromUtf8("delUI"));
        delUI->resize(613, 501);
        delUI->setStyleSheet(QString::fromUtf8("#delUI\n"
"{\n"
"border-image: url(:/images/flowers.png);\n"
"	background:rgba(12,10,20,0.45);\n"
"}"));
        listView = new QListView(delUI);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 0, 441, 501));
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        listView->setFont(font);
        listView->setStyleSheet(QString::fromUtf8("#listView\n"
"{\n"
"color: rgb(215, 223, 218);\n"
"	background:rgba(12,10,20,0.35);\n"
"}"));
        pushButton = new QPushButton(delUI);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(470, 60, 121, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Black"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(10);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"	background:rgba(246, 249, 245,0.35);\n"
"	font: 87 10pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        pushButton_2 = new QPushButton(delUI);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(470, 120, 121, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2\n"
"{\n"
"	background:rgba(246, 249, 245,0.35);\n"
"	font: 87 10pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        pushButton_3 = new QPushButton(delUI);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(470, 180, 121, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3\n"
"{\n"
"	background:rgba(246, 249, 245,0.35);\n"
"	font: 87 10pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        pushButton_4 = new QPushButton(delUI);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(470, 240, 121, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8("#pushButton_4\n"
"{\n"
"	background:rgba(246, 249, 245,0.35);\n"
"	font: 87 10pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        pushButton_5 = new QPushButton(delUI);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(470, 380, 121, 51));
        pushButton_5->setStyleSheet(QString::fromUtf8("#pushButton_5\n"
"{\n"
"	background:rgba(246, 249, 245,0.35);\n"
"	font: 87 10pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        pushButton_6 = new QPushButton(delUI);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(470, 440, 121, 51));
        pushButton_6->setStyleSheet(QString::fromUtf8("#pushButton_6\n"
"{\n"
"	background:rgba(246, 249, 245,0.35);\n"
"	font: 87 10pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        textBrowser = new QTextBrowser(delUI);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(460, 10, 151, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Bauhaus 93"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        textBrowser->setFont(font2);
        textBrowser->setStyleSheet(QString::fromUtf8("#textBrowser\n"
"{\n"
"	background:rgba(246, 249, 245,0.25);\n"
"	\n"
"	font: 14pt \"Bauhaus 93\";\n"
"	color: rgb(243, 255, 251);\n"
"}\n"
""));

        retranslateUi(delUI);

        QMetaObject::connectSlotsByName(delUI);
    } // setupUi

    void retranslateUi(QDialog *delUI)
    {
        delUI->setWindowTitle(QApplication::translate("delUI", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("delUI", "\345\277\253\351\200\237\345\210\240\351\231\244", nullptr));
        pushButton_2->setText(QApplication::translate("delUI", "\345\277\253\351\200\237\345\210\240\351\231\244\345\205\263\351\227\255", nullptr));
        pushButton_3->setText(QApplication::translate("delUI", "\345\257\274\345\205\245\351\273\221\345\220\215\345\215\225", nullptr));
        pushButton_4->setText(QApplication::translate("delUI", "\346\270\205\347\251\272\350\201\224\347\263\273\344\272\272", nullptr));
        pushButton_5->setText(QApplication::translate("delUI", "\345\210\240\351\231\244", nullptr));
        pushButton_6->setText(QApplication::translate("delUI", "\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delUI: public Ui_delUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELUI_H
