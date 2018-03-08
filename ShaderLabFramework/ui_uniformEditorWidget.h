/********************************************************************************
** Form generated from reading UI file 'uniformEditorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNIFORMEDITORWIDGET_H
#define UI_UNIFORMEDITORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UniformEditorWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QComboBox *m_uniformComboBox;
    QFrame *m_UniformEditFrame;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *m_uniformLabel;

    void setupUi(QWidget *UniformEditorWidget)
    {
        if (UniformEditorWidget->objectName().isEmpty())
            UniformEditorWidget->setObjectName(QStringLiteral("UniformEditorWidget"));
        UniformEditorWidget->resize(733, 611);
        verticalLayout_2 = new QVBoxLayout(UniformEditorWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        m_uniformComboBox = new QComboBox(UniformEditorWidget);
        m_uniformComboBox->setObjectName(QStringLiteral("m_uniformComboBox"));

        verticalLayout_2->addWidget(m_uniformComboBox);

        m_UniformEditFrame = new QFrame(UniformEditorWidget);
        m_UniformEditFrame->setObjectName(QStringLiteral("m_UniformEditFrame"));
        m_UniformEditFrame->setFrameShape(QFrame::StyledPanel);
        m_UniformEditFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(m_UniformEditFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        m_uniformLabel = new QLabel(m_UniformEditFrame);
        m_uniformLabel->setObjectName(QStringLiteral("m_uniformLabel"));

        gridLayout->addWidget(m_uniformLabel, 1, 0, 1, 1);


        verticalLayout_2->addWidget(m_UniformEditFrame);


        retranslateUi(UniformEditorWidget);

        QMetaObject::connectSlotsByName(UniformEditorWidget);
    } // setupUi

    void retranslateUi(QWidget *UniformEditorWidget)
    {
        UniformEditorWidget->setWindowTitle(QApplication::translate("UniformEditorWidget", "Form", 0));
        m_uniformLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UniformEditorWidget: public Ui_UniformEditorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNIFORMEDITORWIDGET_H
