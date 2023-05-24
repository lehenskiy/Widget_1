/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QLabel *label_2;
    QDoubleSpinBox *numberToPow;
    QLineEdit *result;
    QPushButton *nextButton;
    QPushButton *exitButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(306, 212);
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 131, 20));
        label_2 = new QLabel(Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 120, 81, 20));
        numberToPow = new QDoubleSpinBox(Form);
        numberToPow->setObjectName(QString::fromUtf8("numberToPow"));
        numberToPow->setGeometry(QRect(20, 60, 101, 34));
        result = new QLineEdit(Form);
        result->setObjectName(QString::fromUtf8("result"));
        result->setEnabled(false);
        result->setGeometry(QRect(20, 160, 101, 34));
        nextButton = new QPushButton(Form);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setEnabled(false);
        nextButton->setGeometry(QRect(180, 50, 94, 36));
        exitButton = new QPushButton(Form);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(180, 100, 94, 36));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276:", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        nextButton->setText(QCoreApplication::translate("Form", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\265\320\265", nullptr));
        exitButton->setText(QCoreApplication::translate("Form", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
