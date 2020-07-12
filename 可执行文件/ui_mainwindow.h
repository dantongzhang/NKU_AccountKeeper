/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser_text;
    QPushButton *pushButton_new;
    QPushButton *pushButton_old;
    QLabel *label;
    QLabel *label_2;
    QTextBrowser *textBrowser_less;
    QPushButton *pushButton_check;
    QLabel *label_3;
    QLineEdit *lineEdit_getmoney;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit_Reason;
    QDateEdit *dateEdit_time;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_sure;
    QLabel *label_7;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textBrowser_text = new QTextBrowser(centralwidget);
        textBrowser_text->setObjectName(QStringLiteral("textBrowser_text"));
        textBrowser_text->setGeometry(QRect(100, 80, 401, 31));
        pushButton_new = new QPushButton(centralwidget);
        pushButton_new->setObjectName(QStringLiteral("pushButton_new"));
        pushButton_new->setGeometry(QRect(530, 80, 111, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\255\227\344\275\223\347\256\241\345\256\266\346\243\211\350\212\261\347\263\226"));
        font.setPointSize(10);
        pushButton_new->setFont(font);
        pushButton_old = new QPushButton(centralwidget);
        pushButton_old->setObjectName(QStringLiteral("pushButton_old"));
        pushButton_old->setGeometry(QRect(650, 80, 111, 31));
        pushButton_old->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 80, 71, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\261\211\344\273\252\346\251\204\346\246\204\344\275\223\347\256\200"));
        font1.setPointSize(12);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 140, 121, 31));
        label_2->setFont(font1);
        textBrowser_less = new QTextBrowser(centralwidget);
        textBrowser_less->setObjectName(QStringLiteral("textBrowser_less"));
        textBrowser_less->setGeometry(QRect(140, 140, 361, 31));
        pushButton_check = new QPushButton(centralwidget);
        pushButton_check->setObjectName(QStringLiteral("pushButton_check"));
        pushButton_check->setGeometry(QRect(530, 140, 111, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\255\227\344\275\223\347\256\241\345\256\266\346\243\211\350\212\261\347\263\226"));
        font2.setPointSize(11);
        pushButton_check->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 210, 161, 21));
        label_3->setFont(font1);
        lineEdit_getmoney = new QLineEdit(centralwidget);
        lineEdit_getmoney->setObjectName(QStringLiteral("lineEdit_getmoney"));
        lineEdit_getmoney->setGeometry(QRect(190, 200, 311, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 270, 131, 21));
        label_4->setFont(font1);
        plainTextEdit_Reason = new QPlainTextEdit(centralwidget);
        plainTextEdit_Reason->setObjectName(QStringLiteral("plainTextEdit_Reason"));
        plainTextEdit_Reason->setGeometry(QRect(190, 270, 311, 181));
        dateEdit_time = new QDateEdit(centralwidget);
        dateEdit_time->setObjectName(QStringLiteral("dateEdit_time"));
        dateEdit_time->setGeometry(QRect(529, 315, 181, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\226\271\345\234\206\345\215\241\351\200\232POP\345\255\227"));
        font3.setPointSize(14);
        dateEdit_time->setFont(font3);
        dateEdit_time->setDateTime(QDateTime(QDate(2020, 7, 2), QTime(0, 0, 0)));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(530, 270, 111, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\261\211\344\273\252\346\251\204\346\246\204\344\275\223\347\256\200"));
        font4.setPointSize(11);
        label_5->setFont(font4);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 240, 481, 21));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\255\227\344\275\223\347\256\241\345\256\266\346\243\211\350\212\261\347\263\226"));
        label_6->setFont(font5);
        pushButton_sure = new QPushButton(centralwidget);
        pushButton_sure->setObjectName(QStringLiteral("pushButton_sure"));
        pushButton_sure->setGeometry(QRect(320, 490, 161, 41));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(300, 20, 211, 51));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\255\227\344\275\223\347\256\241\345\256\266\346\243\211\350\212\261\347\263\226"));
        font6.setPointSize(24);
        label_7->setFont(font6);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 120, 651, 16));
        label_8->setFont(font5);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_new->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266~", Q_NULLPTR));
        pushButton_old->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266~", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\211\200\345\211\251\344\275\231\351\207\221\351\242\235\357\274\232", Q_NULLPTR));
        pushButton_check->setText(QApplication::translate("MainWindow", "\347\202\271\346\210\221\346\237\245\347\234\213~", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\203\263\350\246\201\345\242\236\345\212\240\347\232\204\351\207\221\351\242\235\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\344\272\247\347\224\237\346\265\201\346\260\264\345\216\237\345\233\240\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "PS\357\274\232\345\242\236\345\212\240\344\270\272\346\255\243\357\274\214\345\207\217\345\260\221\344\270\272\350\264\237\357\274\214\346\224\257\346\214\201\344\270\244\344\275\215\345\260\217\346\225\260\345\223\237~", Q_NULLPTR));
        pushButton_sure->setText(QApplication::translate("MainWindow", "\346\210\221\345\274\204\345\245\275\345\225\246\357\274\214\346\220\236\350\265\267\346\235\245~", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\350\256\260\350\264\246\345\260\217\345\270\256\346\211\213", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "PS:\347\224\261\344\272\216\350\276\223\345\207\272\346\240\274\345\274\217\345\233\272\345\256\232\357\274\214\350\213\245\346\234\252\344\275\277\347\224\250\350\277\207\346\255\244\350\275\257\344\273\266\357\274\214\345\273\272\350\256\256\345\205\210\347\202\271\345\207\273\342\200\234\346\226\260\345\273\272\346\226\207\344\273\266\342\200\235\345\273\272\347\253\213\346\226\207\344\273\266\344\271\213\345\220\216\357\274\214\345\206\215\346\267\273\345\212\240\346\265\201\346\260\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
