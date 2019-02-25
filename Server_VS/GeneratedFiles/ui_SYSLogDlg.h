/********************************************************************************
** Form generated from reading UI file 'SYSLogDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSLOGDLG_H
#define UI_SYSLOGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SYSLogDlg
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *CurrentPageLabel;
    QLabel *TotalPageabel;
    QPushButton *PageToBeginBtn;
    QPushButton *PageDownBtn;
    QPushButton *PageUpBtn;
    QPushButton *PageToEndBtn;
    QTableWidget *DataListTable;
    QLabel *ImageLabel;
    QLabel *NameLabel;
    QGroupBox *groupBox_6;
    QScrollArea *ScrollArea_MinBtn;
    QWidget *scrollAreaWidgetContents_MinBtn;
    QPushButton *MinBtn;
    QScrollArea *ScrollArea_CloseBtn;
    QWidget *scrollAreaWidgetContents_CloseBtn;
    QPushButton *CloseBtn;

    void setupUi(QDialog *SYSLogDlg)
    {
        if (SYSLogDlg->objectName().isEmpty())
            SYSLogDlg->setObjectName(QStringLiteral("SYSLogDlg"));
        SYSLogDlg->setWindowModality(Qt::NonModal);
        SYSLogDlg->setEnabled(true);
        SYSLogDlg->resize(623, 482);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        SYSLogDlg->setFont(font);
        SYSLogDlg->setStyleSheet(QStringLiteral("background:rgb(77, 77, 77);color:white"));
        horizontalLayoutWidget = new QWidget(SYSLogDlg);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(90, 430, 431, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        CurrentPageLabel = new QLabel(horizontalLayoutWidget);
        CurrentPageLabel->setObjectName(QStringLiteral("CurrentPageLabel"));

        horizontalLayout->addWidget(CurrentPageLabel);

        TotalPageabel = new QLabel(horizontalLayoutWidget);
        TotalPageabel->setObjectName(QStringLiteral("TotalPageabel"));

        horizontalLayout->addWidget(TotalPageabel);

        PageToBeginBtn = new QPushButton(horizontalLayoutWidget);
        PageToBeginBtn->setObjectName(QStringLiteral("PageToBeginBtn"));

        horizontalLayout->addWidget(PageToBeginBtn);

        PageDownBtn = new QPushButton(horizontalLayoutWidget);
        PageDownBtn->setObjectName(QStringLiteral("PageDownBtn"));

        horizontalLayout->addWidget(PageDownBtn);

        PageUpBtn = new QPushButton(horizontalLayoutWidget);
        PageUpBtn->setObjectName(QStringLiteral("PageUpBtn"));

        horizontalLayout->addWidget(PageUpBtn);

        PageToEndBtn = new QPushButton(horizontalLayoutWidget);
        PageToEndBtn->setObjectName(QStringLiteral("PageToEndBtn"));

        horizontalLayout->addWidget(PageToEndBtn);

        DataListTable = new QTableWidget(SYSLogDlg);
        DataListTable->setObjectName(QStringLiteral("DataListTable"));
        DataListTable->setGeometry(QRect(10, 40, 601, 381));
        ImageLabel = new QLabel(SYSLogDlg);
        ImageLabel->setObjectName(QStringLiteral("ImageLabel"));
        ImageLabel->setGeometry(QRect(10, 10, 41, 31));
        NameLabel = new QLabel(SYSLogDlg);
        NameLabel->setObjectName(QStringLiteral("NameLabel"));
        NameLabel->setGeometry(QRect(70, 20, 54, 12));
        groupBox_6 = new QGroupBox(SYSLogDlg);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(570, 2, 46, 26));
        ScrollArea_MinBtn = new QScrollArea(groupBox_6);
        ScrollArea_MinBtn->setObjectName(QStringLiteral("ScrollArea_MinBtn"));
        ScrollArea_MinBtn->setGeometry(QRect(2, 3, 20, 20));
        ScrollArea_MinBtn->setWidgetResizable(true);
        scrollAreaWidgetContents_MinBtn = new QWidget();
        scrollAreaWidgetContents_MinBtn->setObjectName(QStringLiteral("scrollAreaWidgetContents_MinBtn"));
        scrollAreaWidgetContents_MinBtn->setGeometry(QRect(0, 0, 18, 18));
        MinBtn = new QPushButton(scrollAreaWidgetContents_MinBtn);
        MinBtn->setObjectName(QStringLiteral("MinBtn"));
        MinBtn->setGeometry(QRect(1, 1, 16, 16));
        ScrollArea_MinBtn->setWidget(scrollAreaWidgetContents_MinBtn);
        ScrollArea_CloseBtn = new QScrollArea(groupBox_6);
        ScrollArea_CloseBtn->setObjectName(QStringLiteral("ScrollArea_CloseBtn"));
        ScrollArea_CloseBtn->setGeometry(QRect(24, 3, 20, 20));
        ScrollArea_CloseBtn->setWidgetResizable(true);
        scrollAreaWidgetContents_CloseBtn = new QWidget();
        scrollAreaWidgetContents_CloseBtn->setObjectName(QStringLiteral("scrollAreaWidgetContents_CloseBtn"));
        scrollAreaWidgetContents_CloseBtn->setGeometry(QRect(0, 0, 18, 18));
        CloseBtn = new QPushButton(scrollAreaWidgetContents_CloseBtn);
        CloseBtn->setObjectName(QStringLiteral("CloseBtn"));
        CloseBtn->setGeometry(QRect(1, 1, 16, 16));
        ScrollArea_CloseBtn->setWidget(scrollAreaWidgetContents_CloseBtn);

        retranslateUi(SYSLogDlg);

        QMetaObject::connectSlotsByName(SYSLogDlg);
    } // setupUi

    void retranslateUi(QDialog *SYSLogDlg)
    {
        SYSLogDlg->setWindowTitle(QApplication::translate("SYSLogDlg", "\347\263\273\347\273\237\346\227\245\345\277\227", nullptr));
        CurrentPageLabel->setText(QApplication::translate("SYSLogDlg", "\347\254\2540\351\241\265", nullptr));
        TotalPageabel->setText(QApplication::translate("SYSLogDlg", "\345\205\2610\351\241\265", nullptr));
        PageToBeginBtn->setText(QApplication::translate("SYSLogDlg", "\351\246\226\351\241\265", nullptr));
        PageDownBtn->setText(QApplication::translate("SYSLogDlg", "\345\211\215\344\270\200\351\241\265", nullptr));
        PageUpBtn->setText(QApplication::translate("SYSLogDlg", "\345\220\216\344\270\200\351\241\265", nullptr));
        PageToEndBtn->setText(QApplication::translate("SYSLogDlg", "\346\234\253\351\241\265", nullptr));
        ImageLabel->setText(QApplication::translate("SYSLogDlg", "TextLabel", nullptr));
        NameLabel->setText(QApplication::translate("SYSLogDlg", "\347\263\273\347\273\237\346\227\245\345\277\227", nullptr));
        groupBox_6->setTitle(QString());
        MinBtn->setText(QApplication::translate("SYSLogDlg", "PushButton", nullptr));
        CloseBtn->setText(QApplication::translate("SYSLogDlg", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SYSLogDlg: public Ui_SYSLogDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSLOGDLG_H
