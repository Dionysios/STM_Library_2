/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu May 2 23:36:18 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *gb_top;
    QPushButton *b_connect;
    QPushButton *b_disconnect;
    QPushButton *b_send;
    QPushButton *b_sendLast;
    QPushButton *b_receive;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *b_help;
    QPushButton *b_quit;
    QPlainTextEdit *t_log;
    QTabWidget *tabw_info;
    QWidget *tab_mcu;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QLabel *l_type;
    QLineEdit *le_type;
    QLabel *l_flashbase;
    QLineEdit *le_flashbase;
    QLabel *l_rambase;
    QLineEdit *le_rambase;
    QLabel *l_chipid;
    QLineEdit *le_chipid;
    QLabel *l_flashsize;
    QLineEdit *le_flashsize;
    QLabel *l_ramsize;
    QLineEdit *le_ramsize;
    QWidget *tab_stlink;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *l_stlver;
    QLineEdit *le_stlver;
    QLabel *l_jtagver;
    QLineEdit *le_jtagver;
    QLabel *l_swimver;
    QLineEdit *le_swimver;
    QSpacerItem *verticalSpacer;
    QWidget *tab_flash;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *l_readpr;
    QLineEdit *le_readpr;
    QLabel *l_writepr;
    QLineEdit *le_writepr;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_progress;
    QVBoxLayout *verticalLayout_3;
    QLabel *l_progress;
    QHBoxLayout *horizontalLayout_4;
    QProgressBar *pgb_transfer;
    QPushButton *b_stop;
    QHBoxLayout *gb_bottom;
    QPushButton *b_halt;
    QPushButton *b_run;
    QPushButton *b_reset;
    QPushButton *b_hardReset;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *r_jtag;
    QRadioButton *r_swd;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(695, 505);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        gb_top = new QHBoxLayout();
        gb_top->setSpacing(6);
        gb_top->setObjectName(QString::fromUtf8("gb_top"));
        b_connect = new QPushButton(centralWidget);
        b_connect->setObjectName(QString::fromUtf8("b_connect"));

        gb_top->addWidget(b_connect);

        b_disconnect = new QPushButton(centralWidget);
        b_disconnect->setObjectName(QString::fromUtf8("b_disconnect"));

        gb_top->addWidget(b_disconnect);

        b_send = new QPushButton(centralWidget);
        b_send->setObjectName(QString::fromUtf8("b_send"));

        gb_top->addWidget(b_send);

        b_sendLast = new QPushButton(centralWidget);
        b_sendLast->setObjectName(QString::fromUtf8("b_sendLast"));

        gb_top->addWidget(b_sendLast);

        b_receive = new QPushButton(centralWidget);
        b_receive->setObjectName(QString::fromUtf8("b_receive"));

        gb_top->addWidget(b_receive);


        horizontalLayout_7->addLayout(gb_top);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        b_help = new QPushButton(centralWidget);
        b_help->setObjectName(QString::fromUtf8("b_help"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icon-questionmark.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_help->setIcon(icon1);

        horizontalLayout_6->addWidget(b_help);

        b_quit = new QPushButton(centralWidget);
        b_quit->setObjectName(QString::fromUtf8("b_quit"));

        horizontalLayout_6->addWidget(b_quit);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_4->addLayout(horizontalLayout_7);

        t_log = new QPlainTextEdit(centralWidget);
        t_log->setObjectName(QString::fromUtf8("t_log"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(t_log->sizePolicy().hasHeightForWidth());
        t_log->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        t_log->setFont(font);
        t_log->setUndoRedoEnabled(false);
        t_log->setReadOnly(true);

        verticalLayout_4->addWidget(t_log);

        tabw_info = new QTabWidget(centralWidget);
        tabw_info->setObjectName(QString::fromUtf8("tabw_info"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabw_info->sizePolicy().hasHeightForWidth());
        tabw_info->setSizePolicy(sizePolicy2);
        tab_mcu = new QWidget();
        tab_mcu->setObjectName(QString::fromUtf8("tab_mcu"));
        verticalLayout_5 = new QVBoxLayout(tab_mcu);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        l_type = new QLabel(tab_mcu);
        l_type->setObjectName(QString::fromUtf8("l_type"));

        gridLayout->addWidget(l_type, 0, 0, 1, 1);

        le_type = new QLineEdit(tab_mcu);
        le_type->setObjectName(QString::fromUtf8("le_type"));
        le_type->setReadOnly(true);

        gridLayout->addWidget(le_type, 0, 1, 1, 1);

        l_flashbase = new QLabel(tab_mcu);
        l_flashbase->setObjectName(QString::fromUtf8("l_flashbase"));

        gridLayout->addWidget(l_flashbase, 0, 2, 1, 1);

        le_flashbase = new QLineEdit(tab_mcu);
        le_flashbase->setObjectName(QString::fromUtf8("le_flashbase"));
        le_flashbase->setReadOnly(true);

        gridLayout->addWidget(le_flashbase, 0, 3, 1, 1);

        l_rambase = new QLabel(tab_mcu);
        l_rambase->setObjectName(QString::fromUtf8("l_rambase"));

        gridLayout->addWidget(l_rambase, 0, 4, 1, 1);

        le_rambase = new QLineEdit(tab_mcu);
        le_rambase->setObjectName(QString::fromUtf8("le_rambase"));
        le_rambase->setReadOnly(true);

        gridLayout->addWidget(le_rambase, 0, 5, 1, 1);

        l_chipid = new QLabel(tab_mcu);
        l_chipid->setObjectName(QString::fromUtf8("l_chipid"));

        gridLayout->addWidget(l_chipid, 1, 0, 1, 1);

        le_chipid = new QLineEdit(tab_mcu);
        le_chipid->setObjectName(QString::fromUtf8("le_chipid"));
        le_chipid->setReadOnly(true);

        gridLayout->addWidget(le_chipid, 1, 1, 1, 1);

        l_flashsize = new QLabel(tab_mcu);
        l_flashsize->setObjectName(QString::fromUtf8("l_flashsize"));

        gridLayout->addWidget(l_flashsize, 1, 2, 1, 1);

        le_flashsize = new QLineEdit(tab_mcu);
        le_flashsize->setObjectName(QString::fromUtf8("le_flashsize"));
        le_flashsize->setReadOnly(true);

        gridLayout->addWidget(le_flashsize, 1, 3, 1, 1);

        l_ramsize = new QLabel(tab_mcu);
        l_ramsize->setObjectName(QString::fromUtf8("l_ramsize"));

        gridLayout->addWidget(l_ramsize, 1, 4, 1, 1);

        le_ramsize = new QLineEdit(tab_mcu);
        le_ramsize->setObjectName(QString::fromUtf8("le_ramsize"));
        le_ramsize->setReadOnly(true);

        gridLayout->addWidget(le_ramsize, 1, 5, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        tabw_info->addTab(tab_mcu, QString());
        tab_stlink = new QWidget();
        tab_stlink->setObjectName(QString::fromUtf8("tab_stlink"));
        verticalLayout_2 = new QVBoxLayout(tab_stlink);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        l_stlver = new QLabel(tab_stlink);
        l_stlver->setObjectName(QString::fromUtf8("l_stlver"));

        horizontalLayout_3->addWidget(l_stlver);

        le_stlver = new QLineEdit(tab_stlink);
        le_stlver->setObjectName(QString::fromUtf8("le_stlver"));
        le_stlver->setReadOnly(true);

        horizontalLayout_3->addWidget(le_stlver);

        l_jtagver = new QLabel(tab_stlink);
        l_jtagver->setObjectName(QString::fromUtf8("l_jtagver"));

        horizontalLayout_3->addWidget(l_jtagver);

        le_jtagver = new QLineEdit(tab_stlink);
        le_jtagver->setObjectName(QString::fromUtf8("le_jtagver"));
        le_jtagver->setReadOnly(true);

        horizontalLayout_3->addWidget(le_jtagver);

        l_swimver = new QLabel(tab_stlink);
        l_swimver->setObjectName(QString::fromUtf8("l_swimver"));

        horizontalLayout_3->addWidget(l_swimver);

        le_swimver = new QLineEdit(tab_stlink);
        le_swimver->setObjectName(QString::fromUtf8("le_swimver"));
        le_swimver->setReadOnly(true);

        horizontalLayout_3->addWidget(le_swimver);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabw_info->addTab(tab_stlink, QString());
        tab_flash = new QWidget();
        tab_flash->setObjectName(QString::fromUtf8("tab_flash"));
        verticalLayout = new QVBoxLayout(tab_flash);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        l_readpr = new QLabel(tab_flash);
        l_readpr->setObjectName(QString::fromUtf8("l_readpr"));

        horizontalLayout->addWidget(l_readpr);

        le_readpr = new QLineEdit(tab_flash);
        le_readpr->setObjectName(QString::fromUtf8("le_readpr"));

        horizontalLayout->addWidget(le_readpr);

        l_writepr = new QLabel(tab_flash);
        l_writepr->setObjectName(QString::fromUtf8("l_writepr"));

        horizontalLayout->addWidget(l_writepr);

        le_writepr = new QLineEdit(tab_flash);
        le_writepr->setObjectName(QString::fromUtf8("le_writepr"));

        horizontalLayout->addWidget(le_writepr);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        tabw_info->addTab(tab_flash, QString());
        tab_progress = new QWidget();
        tab_progress->setObjectName(QString::fromUtf8("tab_progress"));
        verticalLayout_3 = new QVBoxLayout(tab_progress);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        l_progress = new QLabel(tab_progress);
        l_progress->setObjectName(QString::fromUtf8("l_progress"));
        l_progress->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(l_progress);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pgb_transfer = new QProgressBar(tab_progress);
        pgb_transfer->setObjectName(QString::fromUtf8("pgb_transfer"));
        pgb_transfer->setValue(0);

        horizontalLayout_4->addWidget(pgb_transfer);

        b_stop = new QPushButton(tab_progress);
        b_stop->setObjectName(QString::fromUtf8("b_stop"));
        b_stop->setEnabled(true);

        horizontalLayout_4->addWidget(b_stop);


        verticalLayout_3->addLayout(horizontalLayout_4);

        tabw_info->addTab(tab_progress, QString());

        verticalLayout_4->addWidget(tabw_info);

        gb_bottom = new QHBoxLayout();
        gb_bottom->setSpacing(6);
        gb_bottom->setObjectName(QString::fromUtf8("gb_bottom"));
        b_halt = new QPushButton(centralWidget);
        b_halt->setObjectName(QString::fromUtf8("b_halt"));

        gb_bottom->addWidget(b_halt);

        b_run = new QPushButton(centralWidget);
        b_run->setObjectName(QString::fromUtf8("b_run"));

        gb_bottom->addWidget(b_run);

        b_reset = new QPushButton(centralWidget);
        b_reset->setObjectName(QString::fromUtf8("b_reset"));

        gb_bottom->addWidget(b_reset);

        b_hardReset = new QPushButton(centralWidget);
        b_hardReset->setObjectName(QString::fromUtf8("b_hardReset"));

        gb_bottom->addWidget(b_hardReset);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gb_bottom->addItem(horizontalSpacer_3);

        r_jtag = new QRadioButton(centralWidget);
        r_jtag->setObjectName(QString::fromUtf8("r_jtag"));

        gb_bottom->addWidget(r_jtag);

        r_swd = new QRadioButton(centralWidget);
        r_swd->setObjectName(QString::fromUtf8("r_swd"));
        r_swd->setChecked(true);

        gb_bottom->addWidget(r_swd);


        verticalLayout_4->addLayout(gb_bottom);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(b_quit, SIGNAL(clicked()), b_stop, SLOT(click()));

        tabw_info->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QSTLink2", 0, QApplication::UnicodeUTF8));
        b_connect->setText(QApplication::translate("MainWindow", "Connect", 0, QApplication::UnicodeUTF8));
        b_disconnect->setText(QApplication::translate("MainWindow", "Disconnect", 0, QApplication::UnicodeUTF8));
        b_send->setText(QApplication::translate("MainWindow", "Send...", 0, QApplication::UnicodeUTF8));
        b_sendLast->setText(QApplication::translate("MainWindow", "Send last file", 0, QApplication::UnicodeUTF8));
        b_receive->setText(QApplication::translate("MainWindow", "Receive...", 0, QApplication::UnicodeUTF8));
        b_help->setText(QString());
        b_quit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        l_type->setText(QApplication::translate("MainWindow", "MCU Type:", 0, QApplication::UnicodeUTF8));
        l_flashbase->setText(QApplication::translate("MainWindow", "Flash base:", 0, QApplication::UnicodeUTF8));
        l_rambase->setText(QApplication::translate("MainWindow", "Ram base:", 0, QApplication::UnicodeUTF8));
        l_chipid->setText(QApplication::translate("MainWindow", "Chip ID:", 0, QApplication::UnicodeUTF8));
        l_flashsize->setText(QApplication::translate("MainWindow", "Flash size:", 0, QApplication::UnicodeUTF8));
        l_ramsize->setText(QApplication::translate("MainWindow", "Ram size:", 0, QApplication::UnicodeUTF8));
        tabw_info->setTabText(tabw_info->indexOf(tab_mcu), QApplication::translate("MainWindow", "MCU Info", 0, QApplication::UnicodeUTF8));
        l_stlver->setText(QApplication::translate("MainWindow", "Version:", 0, QApplication::UnicodeUTF8));
        l_jtagver->setText(QApplication::translate("MainWindow", "JTAG Version:", 0, QApplication::UnicodeUTF8));
        l_swimver->setText(QApplication::translate("MainWindow", "SWIM Version:", 0, QApplication::UnicodeUTF8));
        tabw_info->setTabText(tabw_info->indexOf(tab_stlink), QApplication::translate("MainWindow", "ST-Link Info", 0, QApplication::UnicodeUTF8));
        l_readpr->setText(QApplication::translate("MainWindow", "Read Protection:", 0, QApplication::UnicodeUTF8));
        l_writepr->setText(QApplication::translate("MainWindow", "Write Protection:", 0, QApplication::UnicodeUTF8));
        tabw_info->setTabText(tabw_info->indexOf(tab_flash), QApplication::translate("MainWindow", "Flash Info", 0, QApplication::UnicodeUTF8));
        l_progress->setText(QApplication::translate("MainWindow", "No transfer in progress", 0, QApplication::UnicodeUTF8));
        b_stop->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
        tabw_info->setTabText(tabw_info->indexOf(tab_progress), QApplication::translate("MainWindow", "Transfer Progress", 0, QApplication::UnicodeUTF8));
        b_halt->setText(QApplication::translate("MainWindow", "Halt MCU", 0, QApplication::UnicodeUTF8));
        b_run->setText(QApplication::translate("MainWindow", "Run MCU", 0, QApplication::UnicodeUTF8));
        b_reset->setText(QApplication::translate("MainWindow", "Reset MCU", 0, QApplication::UnicodeUTF8));
        b_hardReset->setText(QApplication::translate("MainWindow", "Hard Reset", 0, QApplication::UnicodeUTF8));
        r_jtag->setText(QApplication::translate("MainWindow", "JTAG", 0, QApplication::UnicodeUTF8));
        r_swd->setText(QApplication::translate("MainWindow", "SWD", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
