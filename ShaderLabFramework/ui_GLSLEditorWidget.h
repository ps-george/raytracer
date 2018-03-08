/********************************************************************************
** Form generated from reading UI file 'GLSLEditorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLSLEDITORWIDGET_H
#define UI_GLSLEDITORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GLSLEditorWidget
{
public:
    QVBoxLayout *mainVLayout;
    QHBoxLayout *mainHLayout;
    QCheckBox *linkToProgramCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *compileAndLinkButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *GLSLEditorWidget)
    {
        if (GLSLEditorWidget->objectName().isEmpty())
            GLSLEditorWidget->setObjectName(QStringLiteral("GLSLEditorWidget"));
        GLSLEditorWidget->resize(400, 300);
        mainVLayout = new QVBoxLayout(GLSLEditorWidget);
        mainVLayout->setObjectName(QStringLiteral("mainVLayout"));
        mainHLayout = new QHBoxLayout();
        mainHLayout->setObjectName(QStringLiteral("mainHLayout"));
        linkToProgramCheckBox = new QCheckBox(GLSLEditorWidget);
        linkToProgramCheckBox->setObjectName(QStringLiteral("linkToProgramCheckBox"));

        mainHLayout->addWidget(linkToProgramCheckBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mainHLayout->addItem(horizontalSpacer_2);

        compileAndLinkButton = new QPushButton(GLSLEditorWidget);
        compileAndLinkButton->setObjectName(QStringLiteral("compileAndLinkButton"));

        mainHLayout->addWidget(compileAndLinkButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mainHLayout->addItem(horizontalSpacer);


        mainVLayout->addLayout(mainHLayout);


        retranslateUi(GLSLEditorWidget);

        QMetaObject::connectSlotsByName(GLSLEditorWidget);
    } // setupUi

    void retranslateUi(QWidget *GLSLEditorWidget)
    {
        GLSLEditorWidget->setWindowTitle(QApplication::translate("GLSLEditorWidget", "Form", 0));
        linkToProgramCheckBox->setText(QApplication::translate("GLSLEditorWidget", "link to program", 0));
        compileAndLinkButton->setText(QApplication::translate("GLSLEditorWidget", "Compile / Link (F5)", 0));
    } // retranslateUi

};

namespace Ui {
    class GLSLEditorWidget: public Ui_GLSLEditorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLSLEDITORWIDGET_H
