/********************************************************************************
** Form generated from reading UI file 'sure.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SURE_H
#define UI_SURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Sure
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Sure)
    {
        if (Sure->objectName().isEmpty())
            Sure->setObjectName(QStringLiteral("Sure"));
        Sure->resize(400, 300);
        label = new QLabel(Sure);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 80, 251, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\345\234\206\345\215\241\351\200\232POP\345\255\227"));
        font.setPointSize(36);
        label->setFont(font);
        pushButton = new QPushButton(Sure);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 230, 93, 28));

        retranslateUi(Sure);

        QMetaObject::connectSlotsByName(Sure);
    } // setupUi

    void retranslateUi(QDialog *Sure)
    {
        Sure->setWindowTitle(QApplication::translate("Sure", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Sure", "\346\267\273\345\212\240\346\210\220\345\212\237", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Sure", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Sure: public Ui_Sure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SURE_H
