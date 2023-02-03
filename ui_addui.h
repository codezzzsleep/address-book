/********************************************************************************
** Form generated from reading UI file 'addui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUI_H
#define UI_ADDUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addUI
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *addUI)
    {
        if (addUI->objectName().isEmpty())
            addUI->setObjectName(QString::fromUtf8("addUI"));
        addUI->resize(409, 493);
        addUI->setWindowOpacity(0.850000000000000);
        addUI->setStyleSheet(QString::fromUtf8("#addUI\n"
"{\n"
"	background:rgba(12,10,20,0.3);\n"
"}"));
        pushButton = new QPushButton(addUI);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 350, 91, 31));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"	background:rgba(246, 249, 245,0.15);\n"
"	font: 87 10pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        pushButton_2 = new QPushButton(addUI);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 350, 91, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2\n"
"{\n"
"	background:rgba(246, 249, 245,0.15);\n"
"	font: 87 10pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        lineEdit = new QLineEdit(addUI);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 130, 211, 41));
        QFont font;
        font.setPointSize(16);
        lineEdit->setFont(font);
        lineEdit_2 = new QLineEdit(addUI);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 70, 211, 41));
        lineEdit_2->setFont(font);
        label = new QLabel(addUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 72, 51, 41));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"	background:rgba(12,10,20,0.3);\n"
"	font: 87 14pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        label_2 = new QLabel(addUI);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 132, 50, 41));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"	background:rgba(12,10,20,0.3);\n"
"	font: 87 14pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        pushButton_3 = new QPushButton(addUI);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 10, 81, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3\n"
"{\n"
"	background:rgba(246, 249, 245,0.15);\n"
"	font: 87 10pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        lineEdit_3 = new QLineEdit(addUI);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 200, 211, 41));
        lineEdit_3->setFont(font);
        lineEdit_4 = new QLineEdit(addUI);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(100, 270, 211, 41));
        lineEdit_4->setFont(font);
        label_3 = new QLabel(addUI);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 200, 51, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Black"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(10);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("#label_3\n"
"{\n"
"	background:rgba(12,10,20,0.3);\n"
"	font: 87 14pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));
        label_4 = new QLabel(addUI);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 270, 51, 41));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("#label_4\n"
"{\n"
"	background:rgba(12,10,20,0.3);\n"
"	font: 87 14pt \"Arial Black\";\n"
"	color:  rgb(215, 223, 218);\n"
"}\n"
""));

        retranslateUi(addUI);

        QMetaObject::connectSlotsByName(addUI);
    } // setupUi

    void retranslateUi(QDialog *addUI)
    {
        addUI->setWindowTitle(QApplication::translate("addUI", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("addUI", "\347\241\256\350\256\244\346\267\273\345\212\240", nullptr));
        pushButton_2->setText(QApplication::translate("addUI", "\345\256\214\346\210\220\346\267\273\345\212\240", nullptr));
        label->setText(QApplication::translate("addUI", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QApplication::translate("addUI", "\347\224\265\350\257\235", nullptr));
        pushButton_3->setText(QApplication::translate("addUI", "\344\270\200\351\224\256\345\257\274\345\205\245", nullptr));
        label_3->setText(QApplication::translate("addUI", "\345\234\260\345\235\200", nullptr));
        label_4->setText(QApplication::translate("addUI", "\345\205\263\347\263\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addUI: public Ui_addUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUI_H
