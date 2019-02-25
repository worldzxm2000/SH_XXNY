/********************************************************************************
** Form generated from reading UI file 'server_vs.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_VS_H
#define UI_SERVER_VS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Server_VSClass
{
public:
    QAction *actionDMTM;
    QAction *action1;
    QAction *action_SYSLog;
    QAction *action_DataLog;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QTableWidget *ServerList;
    QLabel *OnLineCountLabel;
    QGroupBox *groupBox_2;
    QTableWidget *ClientList;
    QLabel *ImageLabel;
    QLabel *NameLabel;
    QGroupBox *groupBox_3;
    QScrollArea *ScrollArea_AddBtn;
    QWidget *ScrollAreaWidgetContents_AddBtn;
    QPushButton *AddBtn;
    QScrollArea *ScrollArea_RemoveBtn;
    QWidget *ScrollAreaWidgetContents_RemoveBtn;
    QPushButton *RemoveBtn;
    QScrollArea *ScrollArea_UpLoadBtn;
    QWidget *ScrollAreaWidgetContents_UpLoadBtn;
    QPushButton *UpLoadBtn;
    QGroupBox *groupBox_4;
    QScrollArea *ScrollArea_ControlBtn;
    QWidget *ScrollAreaWidgetContents_ControlBtn;
    QPushButton *ControlBtn;
    QScrollArea *ScrollArea_LogBtn;
    QWidget *ScrollAreaWidgetContents_LogBtn;
    QPushButton *LogBtn;
    QScrollArea *ScrollArea_TerminalBtn;
    QWidget *ScrollAreaWidgetContents_TerminalBtn;
    QPushButton *TerminalBtn;
    QGroupBox *groupBox1;
    QScrollArea *ScrollArea_CloseBtn;
    QWidget *scrollAreaWidgetContents_CloseBtn;
    QPushButton *CloseBtn;
    QScrollArea *ScrollArea_MinBtn;
    QWidget *scrollAreaWidgetContents_MinBtn;
    QPushButton *MinBtn;
    QScrollArea *ScrollArea_WarningBtn;
    QWidget *scrollAreaWidgetContents_WarningBtn;
    QPushButton *WarningBtn;
    QDockWidget *WarningDockWidget;
    QWidget *dockWidgetContents;

    void setupUi(QMainWindow *Server_VSClass)
    {
        if (Server_VSClass->objectName().isEmpty())
            Server_VSClass->setObjectName(QStringLiteral("Server_VSClass"));
        Server_VSClass->resize(1280, 666);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        Server_VSClass->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral("../Image/Weather.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Server_VSClass->setWindowIcon(icon);
        Server_VSClass->setWindowOpacity(1);
        Server_VSClass->setStyleSheet(QStringLiteral("background:rgb(100,100,100);color:white "));
        actionDMTM = new QAction(Server_VSClass);
        actionDMTM->setObjectName(QStringLiteral("actionDMTM"));
        action1 = new QAction(Server_VSClass);
        action1->setObjectName(QStringLiteral("action1"));
        action_SYSLog = new QAction(Server_VSClass);
        action_SYSLog->setObjectName(QStringLiteral("action_SYSLog"));
        action_DataLog = new QAction(Server_VSClass);
        action_DataLog->setObjectName(QStringLiteral("action_DataLog"));
        centralWidget = new QWidget(Server_VSClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAutoFillBackground(false);
        centralWidget->setStyleSheet(QStringLiteral(""));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(5, 120, 241, 531));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        groupBox->setFont(font1);
        ServerList = new QTableWidget(groupBox);
        ServerList->setObjectName(QStringLiteral("ServerList"));
        ServerList->setGeometry(QRect(10, 30, 221, 461));
        OnLineCountLabel = new QLabel(groupBox);
        OnLineCountLabel->setObjectName(QStringLiteral("OnLineCountLabel"));
        OnLineCountLabel->setGeometry(QRect(10, 499, 211, 21));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(250, 120, 1011, 531));
        groupBox_2->setFont(font1);
        ClientList = new QTableWidget(groupBox_2);
        ClientList->setObjectName(QStringLiteral("ClientList"));
        ClientList->setGeometry(QRect(10, 30, 991, 491));
        ClientList->setStyleSheet(QStringLiteral("QTableWidget{background:color:gary;}"));
        ImageLabel = new QLabel(centralWidget);
        ImageLabel->setObjectName(QStringLiteral("ImageLabel"));
        ImageLabel->setGeometry(QRect(0, 0, 31, 31));
        ImageLabel->setPixmap(QPixmap(QString::fromUtf8("../Image/png/7.png")));
        NameLabel = new QLabel(centralWidget);
        NameLabel->setObjectName(QStringLiteral("NameLabel"));
        NameLabel->setGeometry(QRect(40, 8, 81, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        NameLabel->setFont(font2);
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(5, 38, 185, 70));
        QFont font3;
        font3.setPointSize(10);
        groupBox_3->setFont(font3);
        ScrollArea_AddBtn = new QScrollArea(groupBox_3);
        ScrollArea_AddBtn->setObjectName(QStringLiteral("ScrollArea_AddBtn"));
        ScrollArea_AddBtn->setGeometry(QRect(5, 20, 40, 40));
        ScrollArea_AddBtn->setWidgetResizable(true);
        ScrollAreaWidgetContents_AddBtn = new QWidget();
        ScrollAreaWidgetContents_AddBtn->setObjectName(QStringLiteral("ScrollAreaWidgetContents_AddBtn"));
        ScrollAreaWidgetContents_AddBtn->setGeometry(QRect(0, 0, 38, 38));
        ScrollAreaWidgetContents_AddBtn->setMaximumSize(QSize(40, 40));
        AddBtn = new QPushButton(ScrollAreaWidgetContents_AddBtn);
        AddBtn->setObjectName(QStringLiteral("AddBtn"));
        AddBtn->setGeometry(QRect(2, 2, 32, 32));
        ScrollArea_AddBtn->setWidget(ScrollAreaWidgetContents_AddBtn);
        ScrollArea_RemoveBtn = new QScrollArea(groupBox_3);
        ScrollArea_RemoveBtn->setObjectName(QStringLiteral("ScrollArea_RemoveBtn"));
        ScrollArea_RemoveBtn->setGeometry(QRect(50, 20, 40, 40));
        ScrollArea_RemoveBtn->setWidgetResizable(true);
        ScrollAreaWidgetContents_RemoveBtn = new QWidget();
        ScrollAreaWidgetContents_RemoveBtn->setObjectName(QStringLiteral("ScrollAreaWidgetContents_RemoveBtn"));
        ScrollAreaWidgetContents_RemoveBtn->setGeometry(QRect(0, 0, 38, 38));
        ScrollAreaWidgetContents_RemoveBtn->setMaximumSize(QSize(40, 40));
        RemoveBtn = new QPushButton(ScrollAreaWidgetContents_RemoveBtn);
        RemoveBtn->setObjectName(QStringLiteral("RemoveBtn"));
        RemoveBtn->setGeometry(QRect(2, 2, 32, 32));
        ScrollArea_RemoveBtn->setWidget(ScrollAreaWidgetContents_RemoveBtn);
        ScrollArea_UpLoadBtn = new QScrollArea(groupBox_3);
        ScrollArea_UpLoadBtn->setObjectName(QStringLiteral("ScrollArea_UpLoadBtn"));
        ScrollArea_UpLoadBtn->setGeometry(QRect(95, 20, 40, 40));
        ScrollArea_UpLoadBtn->setWidgetResizable(true);
        ScrollAreaWidgetContents_UpLoadBtn = new QWidget();
        ScrollAreaWidgetContents_UpLoadBtn->setObjectName(QStringLiteral("ScrollAreaWidgetContents_UpLoadBtn"));
        ScrollAreaWidgetContents_UpLoadBtn->setGeometry(QRect(0, 0, 38, 38));
        ScrollAreaWidgetContents_UpLoadBtn->setMaximumSize(QSize(40, 40));
        UpLoadBtn = new QPushButton(ScrollAreaWidgetContents_UpLoadBtn);
        UpLoadBtn->setObjectName(QStringLiteral("UpLoadBtn"));
        UpLoadBtn->setGeometry(QRect(2, 2, 32, 32));
        ScrollArea_UpLoadBtn->setWidget(ScrollAreaWidgetContents_UpLoadBtn);
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(195, 38, 185, 70));
        groupBox_4->setFont(font3);
        ScrollArea_ControlBtn = new QScrollArea(groupBox_4);
        ScrollArea_ControlBtn->setObjectName(QStringLiteral("ScrollArea_ControlBtn"));
        ScrollArea_ControlBtn->setGeometry(QRect(95, 20, 40, 40));
        ScrollArea_ControlBtn->setWidgetResizable(true);
        ScrollAreaWidgetContents_ControlBtn = new QWidget();
        ScrollAreaWidgetContents_ControlBtn->setObjectName(QStringLiteral("ScrollAreaWidgetContents_ControlBtn"));
        ScrollAreaWidgetContents_ControlBtn->setGeometry(QRect(0, 0, 38, 38));
        ScrollAreaWidgetContents_ControlBtn->setMaximumSize(QSize(40, 40));
        ControlBtn = new QPushButton(ScrollAreaWidgetContents_ControlBtn);
        ControlBtn->setObjectName(QStringLiteral("ControlBtn"));
        ControlBtn->setGeometry(QRect(2, 2, 32, 32));
        ScrollArea_ControlBtn->setWidget(ScrollAreaWidgetContents_ControlBtn);
        ScrollArea_LogBtn = new QScrollArea(groupBox_4);
        ScrollArea_LogBtn->setObjectName(QStringLiteral("ScrollArea_LogBtn"));
        ScrollArea_LogBtn->setGeometry(QRect(5, 20, 40, 40));
        ScrollArea_LogBtn->setWidgetResizable(true);
        ScrollAreaWidgetContents_LogBtn = new QWidget();
        ScrollAreaWidgetContents_LogBtn->setObjectName(QStringLiteral("ScrollAreaWidgetContents_LogBtn"));
        ScrollAreaWidgetContents_LogBtn->setGeometry(QRect(0, 0, 38, 38));
        ScrollAreaWidgetContents_LogBtn->setMaximumSize(QSize(40, 40));
        LogBtn = new QPushButton(ScrollAreaWidgetContents_LogBtn);
        LogBtn->setObjectName(QStringLiteral("LogBtn"));
        LogBtn->setGeometry(QRect(2, 2, 32, 32));
        ScrollArea_LogBtn->setWidget(ScrollAreaWidgetContents_LogBtn);
        ScrollArea_TerminalBtn = new QScrollArea(groupBox_4);
        ScrollArea_TerminalBtn->setObjectName(QStringLiteral("ScrollArea_TerminalBtn"));
        ScrollArea_TerminalBtn->setGeometry(QRect(50, 20, 40, 40));
        ScrollArea_TerminalBtn->setWidgetResizable(true);
        ScrollAreaWidgetContents_TerminalBtn = new QWidget();
        ScrollAreaWidgetContents_TerminalBtn->setObjectName(QStringLiteral("ScrollAreaWidgetContents_TerminalBtn"));
        ScrollAreaWidgetContents_TerminalBtn->setGeometry(QRect(0, 0, 38, 38));
        ScrollAreaWidgetContents_TerminalBtn->setMaximumSize(QSize(40, 40));
        TerminalBtn = new QPushButton(ScrollAreaWidgetContents_TerminalBtn);
        TerminalBtn->setObjectName(QStringLiteral("TerminalBtn"));
        TerminalBtn->setGeometry(QRect(2, 2, 32, 32));
        ScrollArea_TerminalBtn->setWidget(ScrollAreaWidgetContents_TerminalBtn);
        groupBox1 = new QGroupBox(centralWidget);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        groupBox1->setGeometry(QRect(1200, 5, 75, 26));
        ScrollArea_CloseBtn = new QScrollArea(groupBox1);
        ScrollArea_CloseBtn->setObjectName(QStringLiteral("ScrollArea_CloseBtn"));
        ScrollArea_CloseBtn->setGeometry(QRect(52, 2, 20, 20));
        ScrollArea_CloseBtn->setWidgetResizable(true);
        scrollAreaWidgetContents_CloseBtn = new QWidget();
        scrollAreaWidgetContents_CloseBtn->setObjectName(QStringLiteral("scrollAreaWidgetContents_CloseBtn"));
        scrollAreaWidgetContents_CloseBtn->setGeometry(QRect(0, 0, 18, 18));
        CloseBtn = new QPushButton(scrollAreaWidgetContents_CloseBtn);
        CloseBtn->setObjectName(QStringLiteral("CloseBtn"));
        CloseBtn->setGeometry(QRect(1, 1, 16, 16));
        ScrollArea_CloseBtn->setWidget(scrollAreaWidgetContents_CloseBtn);
        ScrollArea_MinBtn = new QScrollArea(groupBox1);
        ScrollArea_MinBtn->setObjectName(QStringLiteral("ScrollArea_MinBtn"));
        ScrollArea_MinBtn->setGeometry(QRect(27, 2, 20, 20));
        ScrollArea_MinBtn->setWidgetResizable(true);
        scrollAreaWidgetContents_MinBtn = new QWidget();
        scrollAreaWidgetContents_MinBtn->setObjectName(QStringLiteral("scrollAreaWidgetContents_MinBtn"));
        scrollAreaWidgetContents_MinBtn->setGeometry(QRect(0, 0, 18, 18));
        MinBtn = new QPushButton(scrollAreaWidgetContents_MinBtn);
        MinBtn->setObjectName(QStringLiteral("MinBtn"));
        MinBtn->setGeometry(QRect(1, 1, 16, 16));
        ScrollArea_MinBtn->setWidget(scrollAreaWidgetContents_MinBtn);
        ScrollArea_WarningBtn = new QScrollArea(groupBox1);
        ScrollArea_WarningBtn->setObjectName(QStringLiteral("ScrollArea_WarningBtn"));
        ScrollArea_WarningBtn->setGeometry(QRect(2, 2, 20, 20));
        ScrollArea_WarningBtn->setWidgetResizable(true);
        scrollAreaWidgetContents_WarningBtn = new QWidget();
        scrollAreaWidgetContents_WarningBtn->setObjectName(QStringLiteral("scrollAreaWidgetContents_WarningBtn"));
        scrollAreaWidgetContents_WarningBtn->setGeometry(QRect(0, 0, 18, 18));
        WarningBtn = new QPushButton(scrollAreaWidgetContents_WarningBtn);
        WarningBtn->setObjectName(QStringLiteral("WarningBtn"));
        WarningBtn->setGeometry(QRect(1, 1, 16, 16));
        ScrollArea_WarningBtn->setWidget(scrollAreaWidgetContents_WarningBtn);
        Server_VSClass->setCentralWidget(centralWidget);
        WarningDockWidget = new QDockWidget(Server_VSClass);
        WarningDockWidget->setObjectName(QStringLiteral("WarningDockWidget"));
        WarningDockWidget->setStyleSheet(QStringLiteral("QWidget{background:rgb(100,100,100);color:white}QToolTip { color: white; background-color:rgb(77,77,77); border: none;}"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        WarningDockWidget->setWidget(dockWidgetContents);
        Server_VSClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), WarningDockWidget);

        retranslateUi(Server_VSClass);

        QMetaObject::connectSlotsByName(Server_VSClass);
    } // setupUi

    void retranslateUi(QMainWindow *Server_VSClass)
    {
        Server_VSClass->setWindowTitle(QApplication::translate("Server_VSClass", "\344\270\232\345\212\241\346\234\215\345\212\241\345\271\263\345\217\260\350\275\257\344\273\266", nullptr));
        actionDMTM->setText(QApplication::translate("Server_VSClass", "\350\241\245\346\212\204\346\225\260\346\215\256", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDMTM->setToolTip(QApplication::translate("Server_VSClass", "\350\241\245\346\212\204\346\225\260\346\215\256", nullptr));
#endif // QT_NO_TOOLTIP
        action1->setText(QApplication::translate("Server_VSClass", "1", nullptr));
        action_SYSLog->setText(QApplication::translate("Server_VSClass", "\347\263\273\347\273\237\346\227\245\345\277\227", nullptr));
        action_DataLog->setText(QApplication::translate("Server_VSClass", "\346\225\260\346\215\256\346\227\245\345\277\227", nullptr));
        groupBox->setTitle(QApplication::translate("Server_VSClass", "\344\270\232\345\212\241\345\210\227\350\241\250", nullptr));
        OnLineCountLabel->setText(QApplication::translate("Server_VSClass", "TextLabel", nullptr));
        groupBox_2->setTitle(QApplication::translate("Server_VSClass", "\350\256\276\345\244\207\345\210\227\350\241\250", nullptr));
        ImageLabel->setText(QString());
        NameLabel->setText(QApplication::translate("Server_VSClass", "\346\260\224\350\261\241\344\270\223\344\270\232\345\271\263\345\217\260", nullptr));
        groupBox_3->setTitle(QApplication::translate("Server_VSClass", "\344\270\232\345\212\241\347\256\241\347\220\206", nullptr));
        AddBtn->setText(QApplication::translate("Server_VSClass", "PushButton", nullptr));
        RemoveBtn->setText(QApplication::translate("Server_VSClass", "PushButton", nullptr));
        UpLoadBtn->setText(QApplication::translate("Server_VSClass", "PushButton", nullptr));
        groupBox_4->setTitle(QApplication::translate("Server_VSClass", "\347\263\273\347\273\237\347\212\266\346\200\201", nullptr));
        ControlBtn->setText(QApplication::translate("Server_VSClass", "PushButton", nullptr));
        LogBtn->setText(QApplication::translate("Server_VSClass", "PushButton", nullptr));
        TerminalBtn->setText(QApplication::translate("Server_VSClass", "PushButton", nullptr));
        groupBox1->setTitle(QString());
        CloseBtn->setText(QApplication::translate("Server_VSClass", "PushButton", nullptr));
        MinBtn->setText(QApplication::translate("Server_VSClass", "PushButton", nullptr));
        WarningBtn->setText(QApplication::translate("Server_VSClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Server_VSClass: public Ui_Server_VSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_VS_H
