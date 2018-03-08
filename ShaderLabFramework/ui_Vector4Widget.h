/********************************************************************************
** Form generated from reading UI file 'Vector4Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VECTOR4WIDGET_H
#define UI_VECTOR4WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vector4Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QDoubleSpinBox *a0_0;
    QDoubleSpinBox *a0_1;
    QDoubleSpinBox *a0_3;
    QDoubleSpinBox *a0_2;

    void setupUi(QWidget *Vector4Widget)
    {
        if (Vector4Widget->objectName().isEmpty())
            Vector4Widget->setObjectName(QStringLiteral("Vector4Widget"));
        Vector4Widget->resize(790, 429);
        gridLayoutWidget = new QWidget(Vector4Widget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 430, 162));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        a0_0 = new QDoubleSpinBox(gridLayoutWidget);
        a0_0->setObjectName(QStringLiteral("a0_0"));
        a0_0->setDecimals(3);
        a0_0->setMinimum(-99.99);
        a0_0->setSingleStep(0.001);
        a0_0->setValue(0);

        gridLayout->addWidget(a0_0, 0, 0, 1, 1);

        a0_1 = new QDoubleSpinBox(gridLayoutWidget);
        a0_1->setObjectName(QStringLiteral("a0_1"));
        a0_1->setDecimals(3);
        a0_1->setMinimum(-99.99);
        a0_1->setSingleStep(0.001);

        gridLayout->addWidget(a0_1, 0, 1, 1, 1);

        a0_3 = new QDoubleSpinBox(gridLayoutWidget);
        a0_3->setObjectName(QStringLiteral("a0_3"));
        a0_3->setDecimals(3);
        a0_3->setMinimum(-99.99);
        a0_3->setSingleStep(0.001);

        gridLayout->addWidget(a0_3, 0, 3, 1, 1);

        a0_2 = new QDoubleSpinBox(gridLayoutWidget);
        a0_2->setObjectName(QStringLiteral("a0_2"));
        a0_2->setDecimals(3);
        a0_2->setMinimum(-99.99);
        a0_2->setSingleStep(0.001);

        gridLayout->addWidget(a0_2, 0, 2, 1, 1);


        retranslateUi(Vector4Widget);

        QMetaObject::connectSlotsByName(Vector4Widget);
    } // setupUi

    void retranslateUi(QWidget *Vector4Widget)
    {
        Vector4Widget->setWindowTitle(QApplication::translate("Vector4Widget", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Vector4Widget: public Ui_Vector4Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VECTOR4WIDGET_H
