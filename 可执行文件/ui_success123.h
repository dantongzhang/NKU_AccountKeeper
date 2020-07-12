/********************************************************************************
** Form generated from reading UI file 'success123.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUCCESS123_H
#define UI_SUCCESS123_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_success123
{
public:
    QLabel *label;
    QPushButton *pushButton_check;
    QPushButton *pushButton;

    void setupUi(QDialog *success123)
    {
        if (success123->objectName().isEmpty())
            success123->setObjectName(QStringLiteral("success123"));
        success123->resize(400, 300);
        label = new QLabel(success123);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 50, 281, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\345\234\206\345\215\241\351\200\232POP\345\255\227"));
        font.setPointSize(20);
        label->setFont(font);
        pushButton_check = new QPushButton(success123);
        pushButton_check->setObjectName(QStringLiteral("pushButton_check"));
        pushButton_check->setGeometry(QRect(220, 210, 111, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        pushButton_check->setFont(font1);
        pushButton = new QPushButton(success123);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 210, 93, 31));
        pushButton->setFont(font1);

        retranslateUi(success123);

        QMetaObject::connectSlotsByName(success123);
    } // setupUi

    void retranslateUi(QDialog *success123)
    {
        success123->setWindowTitle(QApplication::translate("success123", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("success123", "\346\201\255\345\226\234\344\275\240\346\267\273\345\212\240\346\210\220\345\212\237~", Q_NULLPTR));
        pushButton_check->setText(QApplication::translate("success123", "\346\237\245\347\234\213\346\226\207\344\273\266", Q_NULLPTR));
        pushButton->setText(QApplication::translate("success123", "\346\225\264\346\214\272\345\245\275", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class success123: public Ui_success123 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCCESS123_H
