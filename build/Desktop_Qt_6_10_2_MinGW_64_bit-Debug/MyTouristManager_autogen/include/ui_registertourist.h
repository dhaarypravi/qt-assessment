/********************************************************************************
** Form generated from reading UI file 'registertourist.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERTOURIST_H
#define UI_REGISTERTOURIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registertourist
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtFirstName;
    QLabel *label_2;
    QLineEdit *txtfirstName;
    QLabel *label_3;
    QLineEdit *txtLastName;
    QLabel *label_4;
    QLineEdit *txtPasspostNo;
    QLabel *label_5;
    QLineEdit *txtContactNo;
    QLabel *label_6;
    QLineEdit *txtAddress;
    QLabel *label_7;
    QComboBox *cmbChoosePackage;
    QTextEdit *txtPackageDesciption;
    QLabel *label_8;
    QPushButton *btnSave;
    QPushButton *btnReset;

    void setupUi(QDialog *Registertourist)
    {
        if (Registertourist->objectName().isEmpty())
            Registertourist->setObjectName("Registertourist");
        Registertourist->resize(400, 300);
        Registertourist->setMaximumSize(QSize(400, 300));
        formLayoutWidget = new QWidget(Registertourist);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 381, 241));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        txtFirstName = new QLineEdit(formLayoutWidget);
        txtFirstName->setObjectName("txtFirstName");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, txtFirstName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        txtfirstName = new QLineEdit(formLayoutWidget);
        txtfirstName->setObjectName("txtfirstName");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, txtfirstName);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        txtLastName = new QLineEdit(formLayoutWidget);
        txtLastName->setObjectName("txtLastName");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, txtLastName);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        txtPasspostNo = new QLineEdit(formLayoutWidget);
        txtPasspostNo->setObjectName("txtPasspostNo");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, txtPasspostNo);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_5);

        txtContactNo = new QLineEdit(formLayoutWidget);
        txtContactNo->setObjectName("txtContactNo");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, txtContactNo);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_6);

        txtAddress = new QLineEdit(formLayoutWidget);
        txtAddress->setObjectName("txtAddress");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, txtAddress);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_7);

        cmbChoosePackage = new QComboBox(formLayoutWidget);
        cmbChoosePackage->setObjectName("cmbChoosePackage");

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, cmbChoosePackage);

        txtPackageDesciption = new QTextEdit(formLayoutWidget);
        txtPackageDesciption->setObjectName("txtPackageDesciption");

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, txtPackageDesciption);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, label_8);

        btnSave = new QPushButton(Registertourist);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(300, 260, 90, 29));
        btnReset = new QPushButton(Registertourist);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(170, 260, 90, 29));

        retranslateUi(Registertourist);

        QMetaObject::connectSlotsByName(Registertourist);
    } // setupUi

    void retranslateUi(QDialog *Registertourist)
    {
        Registertourist->setWindowTitle(QCoreApplication::translate("Registertourist", "RegisterTourist", nullptr));
        label->setText(QCoreApplication::translate("Registertourist", "first Name", nullptr));
        label_2->setText(QCoreApplication::translate("Registertourist", "Middle Name", nullptr));
        label_3->setText(QCoreApplication::translate("Registertourist", "Last Name", nullptr));
        label_4->setText(QCoreApplication::translate("Registertourist", "Passport No", nullptr));
        label_5->setText(QCoreApplication::translate("Registertourist", "Contact No", nullptr));
        label_6->setText(QCoreApplication::translate("Registertourist", "Address", nullptr));
        label_7->setText(QCoreApplication::translate("Registertourist", "Choose Package", nullptr));
        label_8->setText(QCoreApplication::translate("Registertourist", "Desciption", nullptr));
        btnSave->setText(QCoreApplication::translate("Registertourist", "Save", nullptr));
        btnReset->setText(QCoreApplication::translate("Registertourist", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registertourist: public Ui_Registertourist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERTOURIST_H
