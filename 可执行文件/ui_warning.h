/********************************************************************************
** Form generated from reading UI file 'warning.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNING_H
#define UI_WARNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_warning
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *warning)
    {
        if (warning->objectName().isEmpty())
            warning->setObjectName(QStringLiteral("warning"));
        warning->resize(400, 300);
        pushButton = new QPushButton(warning);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 250, 93, 28));
        label = new QLabel(warning);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 80, 231, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\255\227\344\275\223\347\256\241\345\256\266\346\243\211\350\212\261\347\263\226"));
        font.setPointSize(18);
        label->setFont(font);

        retranslateUi(warning);

        QMetaObject::connectSlotsByName(warning);
    } // setupUi

    void retranslateUi(QDialog *warning)
    {
        warning->setWindowTitle(QApplication::translate("warning", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("warning", "\347\241\256\345\256\232", Q_NULLPTR));
        label->setText(QApplication::translate("warning", "\344\275\240\346\262\241\346\267\273\345\212\240\346\226\207\344\273\266\345\221\220~", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class warning: public Ui_warning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNING_H
