/********************************************************************************
** Form generated from reading UI file 'new123.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW123_H
#define UI_NEW123_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_new123
{
public:
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_end;
    QLabel *label;

    void setupUi(QDialog *new123)
    {
        if (new123->objectName().isEmpty())
            new123->setObjectName(QStringLiteral("new123"));
        new123->resize(400, 300);
        pushButton = new QPushButton(new123);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 210, 111, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\345\234\206\345\215\241\351\200\232POP\345\255\227"));
        font.setPointSize(11);
        pushButton->setFont(font);
        plainTextEdit = new QPlainTextEdit(new123);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(80, 110, 221, 51));
        pushButton_end = new QPushButton(new123);
        pushButton_end->setObjectName(QStringLiteral("pushButton_end"));
        pushButton_end->setGeometry(QRect(220, 210, 111, 41));
        pushButton_end->setFont(font);
        label = new QLabel(new123);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 50, 361, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\255\227\344\275\223\347\256\241\345\256\266\346\243\211\350\212\261\347\263\226"));
        font1.setPointSize(20);
        label->setFont(font1);

        retranslateUi(new123);

        QMetaObject::connectSlotsByName(new123);
    } // setupUi

    void retranslateUi(QDialog *new123)
    {
        new123->setWindowTitle(QApplication::translate("new123", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("new123", "\346\210\221\345\241\253\345\256\214\345\225\246~", Q_NULLPTR));
        pushButton_end->setText(QApplication::translate("new123", "\346\211\223\346\211\260\344\272\206...", Q_NULLPTR));
        label->setText(QApplication::translate("new123", "\350\257\267\350\276\223\345\205\245\344\275\240\350\246\201\346\226\260\345\273\272\347\232\204\346\226\207\344\273\266\345\220\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class new123: public Ui_new123 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW123_H
