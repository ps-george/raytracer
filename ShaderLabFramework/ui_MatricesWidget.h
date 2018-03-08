/********************************************************************************
** Form generated from reading UI file 'MatricesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRICESWIDGET_H
#define UI_MATRICESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MatricesWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *ModelMatrixBox;
    QGroupBox *ProjectionMatrixBox;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *ViewMatrixBox;
    QPushButton *m_resetButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QWidget *MatricesWidget)
    {
        if (MatricesWidget->objectName().isEmpty())
            MatricesWidget->setObjectName(QStringLiteral("MatricesWidget"));
        MatricesWidget->resize(961, 739);
        verticalLayout_3 = new QVBoxLayout(MatricesWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame = new QFrame(MatricesWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ModelMatrixBox = new QGroupBox(frame);
        ModelMatrixBox->setObjectName(QStringLiteral("ModelMatrixBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ModelMatrixBox->sizePolicy().hasHeightForWidth());
        ModelMatrixBox->setSizePolicy(sizePolicy);
        ModelMatrixBox->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(ModelMatrixBox);

        ProjectionMatrixBox = new QGroupBox(frame);
        ProjectionMatrixBox->setObjectName(QStringLiteral("ProjectionMatrixBox"));
        sizePolicy.setHeightForWidth(ProjectionMatrixBox->sizePolicy().hasHeightForWidth());
        ProjectionMatrixBox->setSizePolicy(sizePolicy);
        ProjectionMatrixBox->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(ProjectionMatrixBox);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ViewMatrixBox = new QGroupBox(frame);
        ViewMatrixBox->setObjectName(QStringLiteral("ViewMatrixBox"));
        sizePolicy.setHeightForWidth(ViewMatrixBox->sizePolicy().hasHeightForWidth());
        ViewMatrixBox->setSizePolicy(sizePolicy);
        ViewMatrixBox->setMinimumSize(QSize(0, 0));

        verticalLayout_2->addWidget(ViewMatrixBox);

        m_resetButton = new QPushButton(frame);
        m_resetButton->setObjectName(QStringLiteral("m_resetButton"));

        verticalLayout_2->addWidget(m_resetButton);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addWidget(frame);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(MatricesWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);

        horizontalLayout_2->addWidget(label);

        label_3 = new QLabel(MatricesWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(40, 50));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/enter/rcs/mono-key-enter.png")));
        label_3->setScaledContents(true);

        horizontalLayout_2->addWidget(label_3);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(MatricesWidget);

        QMetaObject::connectSlotsByName(MatricesWidget);
    } // setupUi

    void retranslateUi(QWidget *MatricesWidget)
    {
        MatricesWidget->setWindowTitle(QApplication::translate("MatricesWidget", "Form", 0));
        ModelMatrixBox->setTitle(QApplication::translate("MatricesWidget", "Model Matrix", 0));
        ProjectionMatrixBox->setTitle(QApplication::translate("MatricesWidget", "Projection Matrix", 0));
        ViewMatrixBox->setTitle(QApplication::translate("MatricesWidget", "View Matrix", 0));
        m_resetButton->setText(QApplication::translate("MatricesWidget", "Reset Matrices", 0));
        label->setText(QApplication::translate("MatricesWidget", "please press Enter \n"
"or change focus to apply \n"
"manual matrix changes!", 0));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MatricesWidget: public Ui_MatricesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRICESWIDGET_H
