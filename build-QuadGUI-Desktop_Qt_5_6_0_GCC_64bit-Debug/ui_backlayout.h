/********************************************************************************
** Form generated from reading UI file 'backlayout.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKLAYOUT_H
#define UI_BACKLAYOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BackLayout
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *BF;
    QLabel *label;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QWidget *Main;
    QDial *R;
    QDial *Theta;
    QLabel *Camfeed;
    QPushButton *Emergency;
    QSlider *Focus;
    QLabel *Focus_label;
    QTextBrowser *LogBox;
    QCheckBox *Log;
    QLCDNumber *Battery;
    QLCDNumber *Signal;
    QTextBrowser *MsgLogBox;
    QLabel *Battery_label;
    QLabel *Signal_Label;
    QTextBrowser *InfoBox;
    QLabel *MsgLog_label;
    QLabel *l6;
    QPushButton *Takeoff;
    QPushButton *Auto;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *BackLayout)
    {
        if (BackLayout->objectName().isEmpty())
            BackLayout->setObjectName(QStringLiteral("BackLayout"));
        BackLayout->resize(913, 550);
        centralWidget = new QWidget(BackLayout);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 911, 511));
        tabWidget->setStyleSheet(QStringLiteral("QTabBar::tab { ; width: 150px; }"));
        BF = new QWidget();
        BF->setObjectName(QStringLiteral("BF"));
        label = new QLabel(BF);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 591, 431));
        label->setStyleSheet(QStringLiteral("Background-color: #000;"));
        radioButton = new QRadioButton(BF);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(680, 80, 116, 22));
        radioButton_2 = new QRadioButton(BF);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(680, 140, 116, 22));
        radioButton_3 = new QRadioButton(BF);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(680, 200, 116, 22));
        tabWidget->addTab(BF, QString());
        Main = new QWidget();
        Main->setObjectName(QStringLiteral("Main"));
        R = new QDial(Main);
        R->setObjectName(QStringLiteral("R"));
        R->setGeometry(QRect(470, 310, 50, 64));
        Theta = new QDial(Main);
        Theta->setObjectName(QStringLiteral("Theta"));
        Theta->setGeometry(QRect(540, 310, 50, 64));
        Camfeed = new QLabel(Main);
        Camfeed->setObjectName(QStringLiteral("Camfeed"));
        Camfeed->setGeometry(QRect(0, 10, 421, 331));
        Camfeed->setStyleSheet(QStringLiteral("Background-color: #000;"));
        Emergency = new QPushButton(Main);
        Emergency->setObjectName(QStringLiteral("Emergency"));
        Emergency->setGeometry(QRect(10, 416, 891, 61));
        Focus = new QSlider(Main);
        Focus->setObjectName(QStringLiteral("Focus"));
        Focus->setGeometry(QRect(0, 350, 421, 31));
        Focus->setOrientation(Qt::Horizontal);
        Focus_label = new QLabel(Main);
        Focus_label->setObjectName(QStringLiteral("Focus_label"));
        Focus_label->setGeometry(QRect(20, 380, 51, 31));
        LogBox = new QTextBrowser(Main);
        LogBox->setObjectName(QStringLiteral("LogBox"));
        LogBox->setGeometry(QRect(660, 330, 231, 71));
        Log = new QCheckBox(Main);
        Log->setObjectName(QStringLiteral("Log"));
        Log->setGeometry(QRect(660, 300, 61, 31));
        Battery = new QLCDNumber(Main);
        Battery->setObjectName(QStringLiteral("Battery"));
        Battery->setGeometry(QRect(583, 230, 41, 23));
        Signal = new QLCDNumber(Main);
        Signal->setObjectName(QStringLiteral("Signal"));
        Signal->setGeometry(QRect(583, 260, 41, 23));
        MsgLogBox = new QTextBrowser(Main);
        MsgLogBox->setObjectName(QStringLiteral("MsgLogBox"));
        MsgLogBox->setGeometry(QRect(640, 190, 256, 111));
        Battery_label = new QLabel(Main);
        Battery_label->setObjectName(QStringLiteral("Battery_label"));
        Battery_label->setGeometry(QRect(480, 230, 67, 17));
        Signal_Label = new QLabel(Main);
        Signal_Label->setObjectName(QStringLiteral("Signal_Label"));
        Signal_Label->setGeometry(QRect(480, 260, 67, 17));
        InfoBox = new QTextBrowser(Main);
        InfoBox->setObjectName(QStringLiteral("InfoBox"));
        InfoBox->setGeometry(QRect(640, 30, 256, 131));
        MsgLog_label = new QLabel(Main);
        MsgLog_label->setObjectName(QStringLiteral("MsgLog_label"));
        MsgLog_label->setGeometry(QRect(650, 170, 67, 17));
        l6 = new QLabel(Main);
        l6->setObjectName(QStringLiteral("l6"));
        l6->setGeometry(QRect(660, 10, 67, 17));
        Takeoff = new QPushButton(Main);
        Takeoff->setObjectName(QStringLiteral("Takeoff"));
        Takeoff->setGeometry(QRect(480, 30, 101, 27));
        Auto = new QPushButton(Main);
        Auto->setObjectName(QStringLiteral("Auto"));
        Auto->setGeometry(QRect(480, 90, 101, 27));
        tabWidget->addTab(Main, QString());
        Camfeed->raise();
        R->raise();
        Theta->raise();
        Emergency->raise();
        Focus->raise();
        Focus_label->raise();
        LogBox->raise();
        Log->raise();
        Battery->raise();
        Signal->raise();
        MsgLogBox->raise();
        Battery_label->raise();
        Signal_Label->raise();
        InfoBox->raise();
        MsgLog_label->raise();
        l6->raise();
        Takeoff->raise();
        Auto->raise();
        BackLayout->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BackLayout);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 913, 23));
        BackLayout->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BackLayout);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BackLayout->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(BackLayout);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(BackLayout);
    } // setupUi

    void retranslateUi(QMainWindow *BackLayout)
    {
        BackLayout->setWindowTitle(QApplication::translate("BackLayout", "BackLayout", 0));
        label->setText(QApplication::translate("BackLayout", "TextLabel", 0));
        radioButton->setText(QApplication::translate("BackLayout", "RadioButton", 0));
        radioButton_2->setText(QApplication::translate("BackLayout", "RadioButton", 0));
        radioButton_3->setText(QApplication::translate("BackLayout", "RadioButton", 0));
        tabWidget->setTabText(tabWidget->indexOf(BF), QApplication::translate("BackLayout", "Tab 1", 0));
        Camfeed->setText(QApplication::translate("BackLayout", "Cam Feed", 0));
        Emergency->setText(QApplication::translate("BackLayout", "Emergency", 0));
        Focus_label->setText(QApplication::translate("BackLayout", "Focus", 0));
        Log->setText(QApplication::translate("BackLayout", "Log", 0));
        Battery_label->setText(QApplication::translate("BackLayout", "Battery", 0));
        Signal_Label->setText(QApplication::translate("BackLayout", "Singnal", 0));
        MsgLog_label->setText(QApplication::translate("BackLayout", "Msg Log", 0));
        l6->setText(QApplication::translate("BackLayout", "TextLabel", 0));
        Takeoff->setText(QApplication::translate("BackLayout", "Take Off", 0));
        Auto->setText(QApplication::translate("BackLayout", "PushButton", 0));
        tabWidget->setTabText(tabWidget->indexOf(Main), QApplication::translate("BackLayout", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class BackLayout: public Ui_BackLayout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKLAYOUT_H
