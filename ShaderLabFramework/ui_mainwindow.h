/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/MatricesWidget.h"
#include "qt/gldisplay.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    GLDisplay *m_GLWidget;
    QTabWidget *m_tabWidget;
    QWidget *m_logTab;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QWidget *m_sceneTab;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_2;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QComboBox *comboBox_2;
    QLabel *label_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *pushButton;
    QCheckBox *checkBox_3;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QWidget *m_matricesTab;
    QHBoxLayout *horizontalLayout;
    MatricesWidget *matricesWidget;
    QWidget *m_uniformsTab;
    QWidget *m_materialTab;
    QWidget *m_GLInfoTab;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1127, 934);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        m_GLWidget = new GLDisplay(splitter);
        m_GLWidget->setObjectName(QStringLiteral("m_GLWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_GLWidget->sizePolicy().hasHeightForWidth());
        m_GLWidget->setSizePolicy(sizePolicy1);
        m_GLWidget->setMinimumSize(QSize(400, 200));
        splitter->addWidget(m_GLWidget);
        m_tabWidget = new QTabWidget(splitter);
        m_tabWidget->setObjectName(QStringLiteral("m_tabWidget"));
        m_tabWidget->setMinimumSize(QSize(600, 400));
        m_tabWidget->setIconSize(QSize(64, 64));
        m_logTab = new QWidget();
        m_logTab->setObjectName(QStringLiteral("m_logTab"));
        verticalLayout = new QVBoxLayout(m_logTab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(m_logTab);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        m_tabWidget->addTab(m_logTab, QString());
        m_sceneTab = new QWidget();
        m_sceneTab->setObjectName(QStringLiteral("m_sceneTab"));
        gridLayout_4 = new QGridLayout(m_sceneTab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox_2 = new QGroupBox(m_sceneTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 0, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout_2);


        gridLayout_4->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(m_sceneTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(groupBox);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMinimum(1);
        doubleSpinBox->setMaximum(90);
        doubleSpinBox->setValue(45);

        gridLayout->addWidget(doubleSpinBox, 2, 1, 1, 1);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);


        verticalLayout_7->addLayout(gridLayout);


        gridLayout_4->addWidget(groupBox, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(m_sceneTab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_3->addWidget(checkBox, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout_3->addWidget(checkBox_2, 1, 0, 1, 1);

        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_3->addWidget(pushButton, 3, 0, 1, 1);

        checkBox_3 = new QCheckBox(groupBox_3);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        gridLayout_3->addWidget(checkBox_3, 2, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout_3);


        gridLayout_4->addWidget(groupBox_3, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(m_sceneTab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_4->addWidget(pushButton_2, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 0, 1, 1);

        m_tabWidget->addTab(m_sceneTab, QString());
        m_matricesTab = new QWidget();
        m_matricesTab->setObjectName(QStringLiteral("m_matricesTab"));
        m_matricesTab->setProperty("toolTipDuration", QVariant(-1));
        horizontalLayout = new QHBoxLayout(m_matricesTab);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        matricesWidget = new MatricesWidget(m_matricesTab);
        matricesWidget->setObjectName(QStringLiteral("matricesWidget"));
        matricesWidget->setMinimumSize(QSize(0, 300));
        matricesWidget->setMaximumSize(QSize(1920, 1080));

        horizontalLayout->addWidget(matricesWidget);

        m_tabWidget->addTab(m_matricesTab, QString());
        m_uniformsTab = new QWidget();
        m_uniformsTab->setObjectName(QStringLiteral("m_uniformsTab"));
        m_tabWidget->addTab(m_uniformsTab, QString());
        m_materialTab = new QWidget();
        m_materialTab->setObjectName(QStringLiteral("m_materialTab"));
        m_tabWidget->addTab(m_materialTab, QString());
        m_GLInfoTab = new QWidget();
        m_GLInfoTab->setObjectName(QStringLiteral("m_GLInfoTab"));
        verticalLayout_3 = new QVBoxLayout(m_GLInfoTab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        textEdit = new QTextEdit(m_GLInfoTab);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_3->addWidget(textEdit);

        m_tabWidget->addTab(m_GLInfoTab, QString());
        splitter->addWidget(m_tabWidget);

        verticalLayout_2->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(m_GLWidget, SIGNAL(displayLog()), MainWindow, SLOT(showLogTab()));
        QObject::connect(m_GLWidget, SIGNAL(updateUniformTab()), MainWindow, SLOT(updateUniformTab()));
        QObject::connect(m_GLWidget, SIGNAL(updateViewMatrix(QMatrix4x4)), matricesWidget, SLOT(updateViewMatrix(QMatrix4x4)));
        QObject::connect(doubleSpinBox, SIGNAL(valueChanged(double)), m_GLWidget, SLOT(updateCameraFieldOfView(double)));
        QObject::connect(m_GLWidget, SIGNAL(updateModelMatrix(QMatrix4x4)), matricesWidget, SLOT(updateModelMatrix(QMatrix4x4)));
        QObject::connect(comboBox_2, SIGNAL(currentTextChanged(QString)), m_GLWidget, SLOT(updateCameraType(QString)));
        QObject::connect(pushButton, SIGNAL(clicked()), m_GLWidget, SLOT(takeScreenshot()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), m_GLWidget, SLOT(resetMatrices()));
        QObject::connect(m_GLWidget, SIGNAL(updateLog(QString)), plainTextEdit, SLOT(appendPlainText(QString)));
        QObject::connect(m_GLWidget, SIGNAL(updateProjectionMatrix(QMatrix4x4)), matricesWidget, SLOT(updateProjectionMatrix(QMatrix4x4)));
        QObject::connect(matricesWidget, SIGNAL(viewMatrixChanged(QMatrix4x4)), m_GLWidget, SLOT(viewMatrixUpdated(QMatrix4x4)));
        QObject::connect(comboBox, SIGNAL(currentTextChanged(QString)), m_GLWidget, SLOT(updateObject(QString)));
        QObject::connect(checkBox, SIGNAL(clicked(bool)), m_GLWidget, SLOT(updateWireframeRendering(bool)));
        QObject::connect(checkBox_2, SIGNAL(clicked(bool)), m_GLWidget, SLOT(updateBackfaceCulling(bool)));
        QObject::connect(m_GLWidget, SIGNAL(updateGLInfo(QString)), textEdit, SLOT(append(QString)));
        QObject::connect(matricesWidget, SIGNAL(projectionMatrixChanged(QMatrix4x4)), m_GLWidget, SLOT(projectionMatrixUpdated(QMatrix4x4)));
        QObject::connect(matricesWidget, SIGNAL(resetMatrices()), m_GLWidget, SLOT(resetMatrices()));
        QObject::connect(checkBox_3, SIGNAL(clicked(bool)), m_GLWidget, SLOT(updateRenderCoordinateFrame(bool)));
        QObject::connect(matricesWidget, SIGNAL(modelMatrixChanged(QMatrix4x4)), m_GLWidget, SLOT(modelMatrixUpdated(QMatrix4x4)));

        m_tabWidget->setCurrentIndex(2);
        comboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Open GL", 0));
        m_tabWidget->setTabText(m_tabWidget->indexOf(m_logTab), QApplication::translate("MainWindow", "Log", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Object", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Teapot", 0)
         << QApplication::translate("MainWindow", "Teapot low res", 0)
         << QApplication::translate("MainWindow", "Square", 0)
         << QApplication::translate("MainWindow", "Cube", 0)
         << QApplication::translate("MainWindow", "Monkey", 0)
        );
        comboBox->setProperty("currentText", QVariant(QApplication::translate("MainWindow", "Teapot", 0)));
        groupBox->setTitle(QApplication::translate("MainWindow", "Camera", 0));
        label->setText(QApplication::translate("MainWindow", "Type", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Perspective", 0)
         << QApplication::translate("MainWindow", "Orthographic", 0)
        );
        label_2->setText(QApplication::translate("MainWindow", "Field Of View", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Rendering", 0));
        checkBox->setText(QApplication::translate("MainWindow", "Enable wireframe", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "Enable backface culling", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Screenshot", 0));
        checkBox_3->setText(QApplication::translate("MainWindow", "Show coordinate frame", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Reset scene", 0));
        m_tabWidget->setTabText(m_tabWidget->indexOf(m_sceneTab), QApplication::translate("MainWindow", "Scene", 0));
        m_tabWidget->setTabText(m_tabWidget->indexOf(m_matricesTab), QApplication::translate("MainWindow", "Matrices", 0));
        m_tabWidget->setTabText(m_tabWidget->indexOf(m_uniformsTab), QApplication::translate("MainWindow", "User uniforms", 0));
        m_tabWidget->setTabText(m_tabWidget->indexOf(m_materialTab), QApplication::translate("MainWindow", "Material", 0));
        m_tabWidget->setTabText(m_tabWidget->indexOf(m_GLInfoTab), QApplication::translate("MainWindow", "GL Info", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
