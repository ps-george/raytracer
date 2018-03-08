/********************************************************************************
** Form generated from reading UI file 'materialEditorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATERIALEDITORWIDGET_H
#define UI_MATERIALEDITORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaterialEditor
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QDoubleSpinBox *a0_0;
    QDoubleSpinBox *a0_1;
    QDoubleSpinBox *a0_3;
    QDoubleSpinBox *a0_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *d0_0;
    QDoubleSpinBox *d0_1;
    QDoubleSpinBox *d0_3;
    QDoubleSpinBox *d0_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QDoubleSpinBox *s0_0;
    QDoubleSpinBox *s0_1;
    QDoubleSpinBox *s0_2;
    QDoubleSpinBox *s0_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QDoubleSpinBox *shininess;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QDoubleSpinBox *acoeff;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QDoubleSpinBox *dcoeff;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_8;
    QDoubleSpinBox *scoeff;

    void setupUi(QWidget *MaterialEditor)
    {
        if (MaterialEditor->objectName().isEmpty())
            MaterialEditor->setObjectName(QStringLiteral("MaterialEditor"));
        MaterialEditor->resize(671, 591);
        verticalLayout = new QVBoxLayout(MaterialEditor);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(MaterialEditor);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        a0_0 = new QDoubleSpinBox(MaterialEditor);
        a0_0->setObjectName(QStringLiteral("a0_0"));
        a0_0->setDecimals(3);
        a0_0->setMinimum(0);
        a0_0->setMaximum(1);
        a0_0->setSingleStep(0.001);
        a0_0->setValue(0);

        gridLayout->addWidget(a0_0, 0, 0, 1, 1);

        a0_1 = new QDoubleSpinBox(MaterialEditor);
        a0_1->setObjectName(QStringLiteral("a0_1"));
        a0_1->setDecimals(3);
        a0_1->setMinimum(0);
        a0_1->setMaximum(1);
        a0_1->setSingleStep(0.001);

        gridLayout->addWidget(a0_1, 0, 1, 1, 1);

        a0_3 = new QDoubleSpinBox(MaterialEditor);
        a0_3->setObjectName(QStringLiteral("a0_3"));
        a0_3->setDecimals(3);
        a0_3->setMinimum(0);
        a0_3->setMaximum(1);
        a0_3->setSingleStep(0.001);

        gridLayout->addWidget(a0_3, 0, 3, 1, 1);

        a0_2 = new QDoubleSpinBox(MaterialEditor);
        a0_2->setObjectName(QStringLiteral("a0_2"));
        a0_2->setDecimals(3);
        a0_2->setMinimum(0);
        a0_2->setMaximum(1);
        a0_2->setSingleStep(0.001);

        gridLayout->addWidget(a0_2, 0, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(MaterialEditor);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        d0_0 = new QDoubleSpinBox(MaterialEditor);
        d0_0->setObjectName(QStringLiteral("d0_0"));
        d0_0->setDecimals(3);
        d0_0->setMinimum(0);
        d0_0->setMaximum(1);
        d0_0->setSingleStep(0.001);
        d0_0->setValue(0);

        gridLayout_2->addWidget(d0_0, 0, 0, 1, 1);

        d0_1 = new QDoubleSpinBox(MaterialEditor);
        d0_1->setObjectName(QStringLiteral("d0_1"));
        d0_1->setDecimals(3);
        d0_1->setMinimum(0);
        d0_1->setMaximum(1);
        d0_1->setSingleStep(0.001);

        gridLayout_2->addWidget(d0_1, 0, 1, 1, 1);

        d0_3 = new QDoubleSpinBox(MaterialEditor);
        d0_3->setObjectName(QStringLiteral("d0_3"));
        d0_3->setDecimals(3);
        d0_3->setMinimum(0);
        d0_3->setMaximum(1);
        d0_3->setSingleStep(0.001);

        gridLayout_2->addWidget(d0_3, 0, 3, 1, 1);

        d0_2 = new QDoubleSpinBox(MaterialEditor);
        d0_2->setObjectName(QStringLiteral("d0_2"));
        d0_2->setDecimals(3);
        d0_2->setMinimum(0);
        d0_2->setMaximum(1);
        d0_2->setSingleStep(0.001);

        gridLayout_2->addWidget(d0_2, 0, 2, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(MaterialEditor);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        s0_0 = new QDoubleSpinBox(MaterialEditor);
        s0_0->setObjectName(QStringLiteral("s0_0"));
        s0_0->setDecimals(3);
        s0_0->setMinimum(0);
        s0_0->setMaximum(1);
        s0_0->setSingleStep(0.001);
        s0_0->setValue(0);

        horizontalLayout_3->addWidget(s0_0);

        s0_1 = new QDoubleSpinBox(MaterialEditor);
        s0_1->setObjectName(QStringLiteral("s0_1"));
        s0_1->setDecimals(3);
        s0_1->setMinimum(0);
        s0_1->setMaximum(1);
        s0_1->setSingleStep(0.001);

        horizontalLayout_3->addWidget(s0_1);

        s0_2 = new QDoubleSpinBox(MaterialEditor);
        s0_2->setObjectName(QStringLiteral("s0_2"));
        s0_2->setDecimals(3);
        s0_2->setMinimum(0);
        s0_2->setMaximum(1);
        s0_2->setSingleStep(0.001);

        horizontalLayout_3->addWidget(s0_2);

        s0_3 = new QDoubleSpinBox(MaterialEditor);
        s0_3->setObjectName(QStringLiteral("s0_3"));
        s0_3->setDecimals(3);
        s0_3->setMinimum(0);
        s0_3->setMaximum(1);
        s0_3->setSingleStep(0.001);

        horizontalLayout_3->addWidget(s0_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(MaterialEditor);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        shininess = new QDoubleSpinBox(MaterialEditor);
        shininess->setObjectName(QStringLiteral("shininess"));
        shininess->setDecimals(3);
        shininess->setMinimum(-99.99);
        shininess->setSingleStep(0.001);

        horizontalLayout_4->addWidget(shininess);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(MaterialEditor);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        acoeff = new QDoubleSpinBox(MaterialEditor);
        acoeff->setObjectName(QStringLiteral("acoeff"));
        acoeff->setDecimals(3);
        acoeff->setMinimum(-99.99);
        acoeff->setSingleStep(0.001);

        horizontalLayout_5->addWidget(acoeff);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(MaterialEditor);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        dcoeff = new QDoubleSpinBox(MaterialEditor);
        dcoeff->setObjectName(QStringLiteral("dcoeff"));
        dcoeff->setDecimals(3);
        dcoeff->setMinimum(-99.99);
        dcoeff->setSingleStep(0.001);

        horizontalLayout_7->addWidget(dcoeff);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(MaterialEditor);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        scoeff = new QDoubleSpinBox(MaterialEditor);
        scoeff->setObjectName(QStringLiteral("scoeff"));
        scoeff->setDecimals(3);
        scoeff->setMinimum(-99.99);
        scoeff->setSingleStep(0.001);

        horizontalLayout_8->addWidget(scoeff);


        verticalLayout->addLayout(horizontalLayout_8);

        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        shininess->raise();
        label_5->raise();
        label_7->raise();

        retranslateUi(MaterialEditor);
        QObject::connect(a0_0, SIGNAL(valueChanged(double)), MaterialEditor, SLOT(updateSceneObject()));
        QObject::connect(a0_1, SIGNAL(valueChanged(double)), MaterialEditor, SLOT(updateSceneObject()));
        QObject::connect(a0_2, SIGNAL(valueChanged(double)), MaterialEditor, SLOT(updateSceneObject()));
        QObject::connect(a0_3, SIGNAL(valueChanged(double)), MaterialEditor, SLOT(updateSceneObject()));
        QObject::connect(d0_0, SIGNAL(valueChanged(double)), MaterialEditor, SLOT(updateSceneObject()));
        QObject::connect(d0_1, SIGNAL(valueChanged(double)), MaterialEditor, SLOT(updateSceneObject()));
        QObject::connect(d0_2, SIGNAL(valueChanged(double)), MaterialEditor, SLOT(updateSceneObject()));
        QObject::connect(d0_3, SIGNAL(valueChanged(double)), MaterialEditor, SLOT(updateSceneObject()));
        QObject::connect(s0_0, SIGNAL(valueChanged(double)), MaterialEditor, SLOT(updateSceneObject()));
        QObject::connect(s0_1, SIGNAL(valueChanged(double)), MaterialEditor, SLOT(updateSceneObject()));
        QObject::connect(s0_2, SIGNAL(valueChanged(double)), MaterialEditor, SLOT(updateSceneObject()));
        QObject::connect(s0_3, SIGNAL(valueChanged(double)), MaterialEditor, SLOT(updateSceneObject()));
        QObject::connect(shininess, SIGNAL(valueChanged(double)), MaterialEditor, SLOT(updateSceneObject()));
        QObject::connect(acoeff, SIGNAL(valueChanged(double)), MaterialEditor, SLOT(updateSceneObject()));
        QObject::connect(dcoeff, SIGNAL(valueChanged(double)), MaterialEditor, SLOT(updateSceneObject()));
        QObject::connect(scoeff, SIGNAL(valueChanged(double)), MaterialEditor, SLOT(updateSceneObject()));

        QMetaObject::connectSlotsByName(MaterialEditor);
    } // setupUi

    void retranslateUi(QWidget *MaterialEditor)
    {
        MaterialEditor->setWindowTitle(QApplication::translate("MaterialEditor", "Form", 0));
        label->setText(QApplication::translate("MaterialEditor", "ambient color", 0));
        label_2->setText(QApplication::translate("MaterialEditor", "diffuse color", 0));
        label_3->setText(QApplication::translate("MaterialEditor", "specular color", 0));
        label_4->setText(QApplication::translate("MaterialEditor", "shininess", 0));
        label_5->setText(QApplication::translate("MaterialEditor", "ambient coefficient", 0));
        label_7->setText(QApplication::translate("MaterialEditor", "diffuse coefficient", 0));
        label_8->setText(QApplication::translate("MaterialEditor", "specular coefficient", 0));
    } // retranslateUi

};

namespace Ui {
    class MaterialEditor: public Ui_MaterialEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATERIALEDITORWIDGET_H
