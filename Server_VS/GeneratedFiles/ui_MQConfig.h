/********************************************************************************
** Form generated from reading UI file 'MQConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MQCONFIG_H
#define UI_MQCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiClass
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_IP;
    QPushButton *WIPBtn;
    QLineEdit *lineEdit_IP;
    QGroupBox *groupBox_QZ;
    QPushButton *RQZBtn;
    QLineEdit *lineEdit_QZ;
    QGroupBox *groupBox_FTPSEVER;
    QPushButton *RFTPSERVERBtn;
    QLineEdit *lineEdit_FTPSERVER;

    void setupUi(QWidget *QtGuiClass)
    {
        if (QtGuiClass->objectName().isEmpty())
            QtGuiClass->setObjectName(QStringLiteral("QtGuiClass"));
        QtGuiClass->setWindowModality(Qt::WindowModal);
        QtGuiClass->resize(302, 330);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        QtGuiClass->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral("../Image/png/mq.png"), QSize(), QIcon::Normal, QIcon::Off);
        QtGuiClass->setWindowIcon(icon);
        QtGuiClass->setStyleSheet(QStringLiteral("background:rgb(77,77,77);color:white"));
        groupBox = new QGroupBox(QtGuiClass);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 281, 311));
        groupBox_IP = new QGroupBox(groupBox);
        groupBox_IP->setObjectName(QStringLiteral("groupBox_IP"));
        groupBox_IP->setGeometry(QRect(10, 10, 251, 91));
        WIPBtn = new QPushButton(groupBox_IP);
        WIPBtn->setObjectName(QStringLiteral("WIPBtn"));
        WIPBtn->setGeometry(QRect(10, 50, 75, 23));
        lineEdit_IP = new QLineEdit(groupBox_IP);
        lineEdit_IP->setObjectName(QStringLiteral("lineEdit_IP"));
        lineEdit_IP->setGeometry(QRect(10, 20, 181, 20));
        groupBox_QZ = new QGroupBox(groupBox);
        groupBox_QZ->setObjectName(QStringLiteral("groupBox_QZ"));
        groupBox_QZ->setGeometry(QRect(10, 110, 171, 91));
        RQZBtn = new QPushButton(groupBox_QZ);
        RQZBtn->setObjectName(QStringLiteral("RQZBtn"));
        RQZBtn->setGeometry(QRect(10, 50, 75, 23));
        lineEdit_QZ = new QLineEdit(groupBox_QZ);
        lineEdit_QZ->setObjectName(QStringLiteral("lineEdit_QZ"));
        lineEdit_QZ->setGeometry(QRect(10, 20, 151, 20));
        groupBox_FTPSEVER = new QGroupBox(groupBox);
        groupBox_FTPSEVER->setObjectName(QStringLiteral("groupBox_FTPSEVER"));
        groupBox_FTPSEVER->setGeometry(QRect(10, 210, 171, 91));
        RFTPSERVERBtn = new QPushButton(groupBox_FTPSEVER);
        RFTPSERVERBtn->setObjectName(QStringLiteral("RFTPSERVERBtn"));
        RFTPSERVERBtn->setGeometry(QRect(10, 50, 75, 23));
        lineEdit_FTPSERVER = new QLineEdit(groupBox_FTPSEVER);
        lineEdit_FTPSERVER->setObjectName(QStringLiteral("lineEdit_FTPSERVER"));
        lineEdit_FTPSERVER->setGeometry(QRect(10, 20, 151, 20));
        QWidget::setTabOrder(lineEdit_IP, WIPBtn);
        QWidget::setTabOrder(WIPBtn, lineEdit_QZ);
        QWidget::setTabOrder(lineEdit_QZ, RQZBtn);
        QWidget::setTabOrder(RQZBtn, lineEdit_FTPSERVER);
        QWidget::setTabOrder(lineEdit_FTPSERVER, RFTPSERVERBtn);

        retranslateUi(QtGuiClass);

        QMetaObject::connectSlotsByName(QtGuiClass);
    } // setupUi

    void retranslateUi(QWidget *QtGuiClass)
    {
        QtGuiClass->setWindowTitle(QApplication::translate("QtGuiClass", "\347\273\210\347\253\257\346\216\247\345\210\266", nullptr));
        groupBox->setTitle(QString());
        groupBox_IP->setTitle(QApplication::translate("QtGuiClass", "ULR", nullptr));
        WIPBtn->setText(QApplication::translate("QtGuiClass", "\350\256\276\347\275\256", nullptr));
        lineEdit_IP->setText(QApplication::translate("QtGuiClass", "tcp://117.158.216.250:61616", nullptr));
        groupBox_QZ->setTitle(QApplication::translate("QtGuiClass", "\350\264\246\346\210\267\345\220\215", nullptr));
        RQZBtn->setText(QApplication::translate("QtGuiClass", "\350\256\276\347\275\256", nullptr));
        groupBox_FTPSEVER->setTitle(QApplication::translate("QtGuiClass", "\345\257\206\347\240\201", nullptr));
        RFTPSERVERBtn->setText(QApplication::translate("QtGuiClass", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiClass: public Ui_QtGuiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MQCONFIG_H
