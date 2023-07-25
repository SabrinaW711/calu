/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *leftButton;
    QPushButton *zeroButton;
    QPushButton *rightButton;
    QPushButton *equalButton;
    QPushButton *oneButton;
    QPushButton *twoButton;
    QPushButton *threeButton;
    QPushButton *fourButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QPushButton *delButton;
    QPushButton *sevenButton;
    QPushButton *addButton;
    QPushButton *eightButton;
    QPushButton *subButton;
    QPushButton *nineButton;
    QPushButton *mulButton;
    QPushButton *clearButton;
    QPushButton *divButton;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(221, 260);
        leftButton = new QPushButton(Widget);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(10, 210, 51, 41));
        QFont font;
        font.setPointSize(11);
        leftButton->setFont(font);
        zeroButton = new QPushButton(Widget);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));
        zeroButton->setGeometry(QRect(60, 210, 51, 41));
        zeroButton->setFont(font);
        rightButton = new QPushButton(Widget);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(110, 210, 51, 41));
        rightButton->setFont(font);
        equalButton = new QPushButton(Widget);
        equalButton->setObjectName(QString::fromUtf8("equalButton"));
        equalButton->setGeometry(QRect(160, 170, 51, 81));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        equalButton->setFont(font1);
        oneButton = new QPushButton(Widget);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));
        oneButton->setGeometry(QRect(10, 170, 51, 41));
        oneButton->setFont(font);
        twoButton = new QPushButton(Widget);
        twoButton->setObjectName(QString::fromUtf8("twoButton"));
        twoButton->setGeometry(QRect(60, 170, 51, 41));
        twoButton->setFont(font);
        threeButton = new QPushButton(Widget);
        threeButton->setObjectName(QString::fromUtf8("threeButton"));
        threeButton->setGeometry(QRect(110, 170, 51, 41));
        threeButton->setFont(font);
        fourButton = new QPushButton(Widget);
        fourButton->setObjectName(QString::fromUtf8("fourButton"));
        fourButton->setGeometry(QRect(10, 130, 51, 41));
        fourButton->setFont(font);
        fiveButton = new QPushButton(Widget);
        fiveButton->setObjectName(QString::fromUtf8("fiveButton"));
        fiveButton->setGeometry(QRect(60, 130, 51, 41));
        fiveButton->setFont(font);
        sixButton = new QPushButton(Widget);
        sixButton->setObjectName(QString::fromUtf8("sixButton"));
        sixButton->setGeometry(QRect(110, 130, 51, 41));
        sixButton->setFont(font);
        delButton = new QPushButton(Widget);
        delButton->setObjectName(QString::fromUtf8("delButton"));
        delButton->setGeometry(QRect(160, 130, 51, 41));
        delButton->setFont(font);
        delButton->setIconSize(QSize(44, 44));
        sevenButton = new QPushButton(Widget);
        sevenButton->setObjectName(QString::fromUtf8("sevenButton"));
        sevenButton->setGeometry(QRect(10, 90, 51, 41));
        sevenButton->setFont(font);
        addButton = new QPushButton(Widget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(10, 50, 51, 41));
        addButton->setFont(font);
        eightButton = new QPushButton(Widget);
        eightButton->setObjectName(QString::fromUtf8("eightButton"));
        eightButton->setGeometry(QRect(60, 90, 51, 41));
        eightButton->setFont(font);
        subButton = new QPushButton(Widget);
        subButton->setObjectName(QString::fromUtf8("subButton"));
        subButton->setGeometry(QRect(60, 50, 51, 41));
        subButton->setFont(font1);
        nineButton = new QPushButton(Widget);
        nineButton->setObjectName(QString::fromUtf8("nineButton"));
        nineButton->setGeometry(QRect(110, 90, 51, 41));
        nineButton->setFont(font);
        mulButton = new QPushButton(Widget);
        mulButton->setObjectName(QString::fromUtf8("mulButton"));
        mulButton->setGeometry(QRect(110, 50, 51, 41));
        mulButton->setFont(font);
        clearButton = new QPushButton(Widget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(160, 90, 51, 41));
        clearButton->setFont(font);
        divButton = new QPushButton(Widget);
        divButton->setObjectName(QString::fromUtf8("divButton"));
        divButton->setGeometry(QRect(160, 50, 51, 41));
        divButton->setFont(font);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 201, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        leftButton->setText(QCoreApplication::translate("Widget", "(", nullptr));
        zeroButton->setText(QCoreApplication::translate("Widget", "0", nullptr));
        rightButton->setText(QCoreApplication::translate("Widget", ")", nullptr));
        equalButton->setText(QCoreApplication::translate("Widget", "=", nullptr));
        oneButton->setText(QCoreApplication::translate("Widget", "1", nullptr));
        twoButton->setText(QCoreApplication::translate("Widget", "2", nullptr));
        threeButton->setText(QCoreApplication::translate("Widget", "3", nullptr));
        fourButton->setText(QCoreApplication::translate("Widget", "4", nullptr));
        fiveButton->setText(QCoreApplication::translate("Widget", "5", nullptr));
        sixButton->setText(QCoreApplication::translate("Widget", "6", nullptr));
        delButton->setText(QString());
        sevenButton->setText(QCoreApplication::translate("Widget", "7", nullptr));
        addButton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        eightButton->setText(QCoreApplication::translate("Widget", "8", nullptr));
        subButton->setText(QCoreApplication::translate("Widget", "-", nullptr));
        nineButton->setText(QCoreApplication::translate("Widget", "9", nullptr));
        mulButton->setText(QCoreApplication::translate("Widget", "*", nullptr));
        clearButton->setText(QCoreApplication::translate("Widget", "C", nullptr));
        divButton->setText(QCoreApplication::translate("Widget", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
