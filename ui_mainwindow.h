/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat 23. Dec 12:36:59 2017
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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QTextEdit *Action_list;
    QLabel *label_3;
    QPushButton *Run_button;
    QLabel *label_2;
    QRadioButton *Round_but_R;
    QRadioButton *Square_button_R;
    QRadioButton *Groove_but_R;
    QLabel *label_4;
    QLineEdit *Size_text;
    QPushButton *Create_notch_button;
    QLabel *label_5;
    QTextEdit *Notch_list;
    QPushButton *Delete_list1_button;
    QPushButton *delete_b;
    QLabel *label_6;
    QLineEdit *delete_number;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(647, 357);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(480, 10, 111, 16));
        QFont font;
        font.setPointSize(10);
        font.setItalic(true);
        label->setFont(font);
        Action_list = new QTextEdit(centralWidget);
        Action_list->setObjectName(QString::fromUtf8("Action_list"));
        Action_list->setGeometry(QRect(430, 30, 201, 201));
        Action_list->setReadOnly(true);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 10, 101, 16));
        label_3->setFont(font);
        Run_button = new QPushButton(centralWidget);
        Run_button->setObjectName(QString::fromUtf8("Run_button"));
        Run_button->setGeometry(QRect(430, 240, 201, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 30, 31, 16));
        label_2->setFont(font);
        Round_but_R = new QRadioButton(centralWidget);
        Round_but_R->setObjectName(QString::fromUtf8("Round_but_R"));
        Round_but_R->setGeometry(QRect(60, 50, 61, 18));
        Round_but_R->setFont(font);
        Square_button_R = new QRadioButton(centralWidget);
        Square_button_R->setObjectName(QString::fromUtf8("Square_button_R"));
        Square_button_R->setGeometry(QRect(60, 70, 82, 18));
        Square_button_R->setFont(font);
        Groove_but_R = new QRadioButton(centralWidget);
        Groove_but_R->setObjectName(QString::fromUtf8("Groove_but_R"));
        Groove_but_R->setGeometry(QRect(60, 90, 82, 18));
        Groove_but_R->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 120, 131, 16));
        label_4->setFont(font);
        Size_text = new QLineEdit(centralWidget);
        Size_text->setObjectName(QString::fromUtf8("Size_text"));
        Size_text->setGeometry(QRect(50, 140, 113, 20));
        Create_notch_button = new QPushButton(centralWidget);
        Create_notch_button->setObjectName(QString::fromUtf8("Create_notch_button"));
        Create_notch_button->setGeometry(QRect(60, 170, 81, 23));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 10, 121, 16));
        label_5->setFont(font);
        Notch_list = new QTextEdit(centralWidget);
        Notch_list->setObjectName(QString::fromUtf8("Notch_list"));
        Notch_list->setGeometry(QRect(210, 30, 211, 201));
        Notch_list->setReadOnly(true);
        Delete_list1_button = new QPushButton(centralWidget);
        Delete_list1_button->setObjectName(QString::fromUtf8("Delete_list1_button"));
        Delete_list1_button->setGeometry(QRect(430, 270, 201, 23));
        delete_b = new QPushButton(centralWidget);
        delete_b->setObjectName(QString::fromUtf8("delete_b"));
        delete_b->setGeometry(QRect(360, 270, 61, 23));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 240, 341, 20));
        label_6->setFont(font);
        delete_number = new QLineEdit(centralWidget);
        delete_number->setObjectName(QString::fromUtf8("delete_number"));
        delete_number->setGeometry(QRect(360, 240, 61, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 647, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "List of the actions", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Create the notch", 0, QApplication::UnicodeUTF8));
        Run_button->setText(QApplication::translate("MainWindow", "Run the process", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Type", 0, QApplication::UnicodeUTF8));
        Round_but_R->setText(QApplication::translate("MainWindow", "Round", 0, QApplication::UnicodeUTF8));
        Square_button_R->setText(QApplication::translate("MainWindow", "Square", 0, QApplication::UnicodeUTF8));
        Groove_but_R->setText(QApplication::translate("MainWindow", "Groove", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Please enter the size", 0, QApplication::UnicodeUTF8));
        Create_notch_button->setText(QApplication::translate("MainWindow", "Create a notch", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "List of the notches", 0, QApplication::UnicodeUTF8));
        Delete_list1_button->setText(QApplication::translate("MainWindow", "Delete the list", 0, QApplication::UnicodeUTF8));
        delete_b->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Please enter the number of notch that you wan to delete ->", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
