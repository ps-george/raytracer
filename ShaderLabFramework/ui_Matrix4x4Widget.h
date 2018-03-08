/********************************************************************************
** Form generated from reading UI file 'Matrix4x4Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRIX4X4WIDGET_H
#define UI_MATRIX4X4WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_matrix4x4Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QDoubleSpinBox *a0_1;
    QDoubleSpinBox *a0_3;
    QDoubleSpinBox *a0_2;
    QDoubleSpinBox *a1_3;
    QDoubleSpinBox *a1_1;
    QDoubleSpinBox *a0_0;
    QDoubleSpinBox *a1_0;
    QDoubleSpinBox *a2_1;
    QDoubleSpinBox *a3_1;
    QDoubleSpinBox *a2_0;
    QDoubleSpinBox *a2_3;
    QDoubleSpinBox *a2_2;
    QDoubleSpinBox *a3_0;
    QDoubleSpinBox *a3_2;
    QDoubleSpinBox *a1_2;
    QDoubleSpinBox *a3_3;

    void setupUi(QWidget *matrix4x4Widget)
    {
        if (matrix4x4Widget->objectName().isEmpty())
            matrix4x4Widget->setObjectName(QStringLiteral("matrix4x4Widget"));
        matrix4x4Widget->resize(370, 204);
        gridLayoutWidget = new QWidget(matrix4x4Widget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 348, 162));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
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

        a1_3 = new QDoubleSpinBox(gridLayoutWidget);
        a1_3->setObjectName(QStringLiteral("a1_3"));
        a1_3->setDecimals(3);
        a1_3->setMinimum(-99.99);
        a1_3->setSingleStep(0.001);

        gridLayout->addWidget(a1_3, 1, 3, 1, 1);

        a1_1 = new QDoubleSpinBox(gridLayoutWidget);
        a1_1->setObjectName(QStringLiteral("a1_1"));
        a1_1->setDecimals(3);
        a1_1->setMinimum(-99.99);
        a1_1->setSingleStep(0.001);
        a1_1->setValue(1);

        gridLayout->addWidget(a1_1, 1, 1, 1, 1);

        a0_0 = new QDoubleSpinBox(gridLayoutWidget);
        a0_0->setObjectName(QStringLiteral("a0_0"));
        a0_0->setDecimals(3);
        a0_0->setMinimum(-99.99);
        a0_0->setSingleStep(0.001);
        a0_0->setValue(1);

        gridLayout->addWidget(a0_0, 0, 0, 1, 1);

        a1_0 = new QDoubleSpinBox(gridLayoutWidget);
        a1_0->setObjectName(QStringLiteral("a1_0"));
        a1_0->setDecimals(3);
        a1_0->setMinimum(-99.99);
        a1_0->setSingleStep(0.001);

        gridLayout->addWidget(a1_0, 1, 0, 1, 1);

        a2_1 = new QDoubleSpinBox(gridLayoutWidget);
        a2_1->setObjectName(QStringLiteral("a2_1"));
        a2_1->setDecimals(3);
        a2_1->setMinimum(-99.99);
        a2_1->setSingleStep(0.001);

        gridLayout->addWidget(a2_1, 2, 1, 1, 1);

        a3_1 = new QDoubleSpinBox(gridLayoutWidget);
        a3_1->setObjectName(QStringLiteral("a3_1"));
        a3_1->setDecimals(3);
        a3_1->setMinimum(-99.99);
        a3_1->setSingleStep(0.001);

        gridLayout->addWidget(a3_1, 3, 1, 1, 1);

        a2_0 = new QDoubleSpinBox(gridLayoutWidget);
        a2_0->setObjectName(QStringLiteral("a2_0"));
        a2_0->setDecimals(3);
        a2_0->setMinimum(-99.99);
        a2_0->setSingleStep(0.001);

        gridLayout->addWidget(a2_0, 2, 0, 1, 1);

        a2_3 = new QDoubleSpinBox(gridLayoutWidget);
        a2_3->setObjectName(QStringLiteral("a2_3"));
        a2_3->setDecimals(3);
        a2_3->setMinimum(-99.99);
        a2_3->setSingleStep(0.001);

        gridLayout->addWidget(a2_3, 2, 3, 1, 1);

        a2_2 = new QDoubleSpinBox(gridLayoutWidget);
        a2_2->setObjectName(QStringLiteral("a2_2"));
        a2_2->setDecimals(3);
        a2_2->setMinimum(-99.99);
        a2_2->setSingleStep(0.001);
        a2_2->setValue(1);

        gridLayout->addWidget(a2_2, 2, 2, 1, 1);

        a3_0 = new QDoubleSpinBox(gridLayoutWidget);
        a3_0->setObjectName(QStringLiteral("a3_0"));
        a3_0->setDecimals(3);
        a3_0->setMinimum(-99.99);
        a3_0->setSingleStep(0.001);

        gridLayout->addWidget(a3_0, 3, 0, 1, 1);

        a3_2 = new QDoubleSpinBox(gridLayoutWidget);
        a3_2->setObjectName(QStringLiteral("a3_2"));
        a3_2->setDecimals(3);
        a3_2->setMinimum(-99.99);
        a3_2->setSingleStep(0.001);

        gridLayout->addWidget(a3_2, 3, 2, 1, 1);

        a1_2 = new QDoubleSpinBox(gridLayoutWidget);
        a1_2->setObjectName(QStringLiteral("a1_2"));
        a1_2->setDecimals(3);
        a1_2->setMinimum(-99.99);
        a1_2->setSingleStep(0.001);

        gridLayout->addWidget(a1_2, 1, 2, 1, 1);

        a3_3 = new QDoubleSpinBox(gridLayoutWidget);
        a3_3->setObjectName(QStringLiteral("a3_3"));
        a3_3->setDecimals(3);
        a3_3->setMinimum(-99.99);
        a3_3->setSingleStep(0.001);
        a3_3->setValue(1);

        gridLayout->addWidget(a3_3, 3, 3, 1, 1);


        retranslateUi(matrix4x4Widget);

        QMetaObject::connectSlotsByName(matrix4x4Widget);
    } // setupUi

    void retranslateUi(QWidget *matrix4x4Widget)
    {
        matrix4x4Widget->setWindowTitle(QApplication::translate("matrix4x4Widget", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class matrix4x4Widget: public Ui_matrix4x4Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIX4X4WIDGET_H
