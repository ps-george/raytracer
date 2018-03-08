/********************************************************************************
** Form generated from reading UI file 'GLSLEditorWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLSLEDITORWINDOW_H
#define UI_GLSLEDITORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GLSLEditorWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave_As;
    QAction *actionExit;
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionSave_As_;
    QAction *actionExit_Ctrl_X;
    QAction *actionAbout;
    QAction *actionSave_pipeline;
    QAction *actionLoad_pipeline;
    QAction *actionSave_pipeline_As;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *EditorTabWidget;
    QMenuBar *EditorMenubar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GLSLEditorWindow)
    {
        if (GLSLEditorWindow->objectName().isEmpty())
            GLSLEditorWindow->setObjectName(QStringLiteral("GLSLEditorWindow"));
        GLSLEditorWindow->resize(671, 481);
        actionNew = new QAction(GLSLEditorWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(GLSLEditorWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave_As = new QAction(GLSLEditorWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionExit = new QAction(GLSLEditorWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionLoad = new QAction(GLSLEditorWindow);
        actionLoad->setObjectName(QStringLiteral("actionLoad"));
        actionSave = new QAction(GLSLEditorWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_As_ = new QAction(GLSLEditorWindow);
        actionSave_As_->setObjectName(QStringLiteral("actionSave_As_"));
        actionExit_Ctrl_X = new QAction(GLSLEditorWindow);
        actionExit_Ctrl_X->setObjectName(QStringLiteral("actionExit_Ctrl_X"));
        actionAbout = new QAction(GLSLEditorWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionSave_pipeline = new QAction(GLSLEditorWindow);
        actionSave_pipeline->setObjectName(QStringLiteral("actionSave_pipeline"));
        actionLoad_pipeline = new QAction(GLSLEditorWindow);
        actionLoad_pipeline->setObjectName(QStringLiteral("actionLoad_pipeline"));
        actionSave_pipeline_As = new QAction(GLSLEditorWindow);
        actionSave_pipeline_As->setObjectName(QStringLiteral("actionSave_pipeline_As"));
        centralwidget = new QWidget(GLSLEditorWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        EditorTabWidget = new QTabWidget(centralwidget);
        EditorTabWidget->setObjectName(QStringLiteral("EditorTabWidget"));

        verticalLayout->addWidget(EditorTabWidget);

        GLSLEditorWindow->setCentralWidget(centralwidget);
        EditorMenubar = new QMenuBar(GLSLEditorWindow);
        EditorMenubar->setObjectName(QStringLiteral("EditorMenubar"));
        EditorMenubar->setGeometry(QRect(0, 0, 671, 38));
        menuFile = new QMenu(EditorMenubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAbout = new QMenu(EditorMenubar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        GLSLEditorWindow->setMenuBar(EditorMenubar);
        statusbar = new QStatusBar(GLSLEditorWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GLSLEditorWindow->setStatusBar(statusbar);

        EditorMenubar->addAction(menuFile->menuAction());
        EditorMenubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionSave_pipeline);
        menuFile->addAction(actionSave_pipeline_As);
        menuFile->addAction(actionLoad_pipeline);
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As_);
        menuFile->addSeparator();
        menuFile->addAction(actionExit_Ctrl_X);
        menuAbout->addAction(actionAbout);

        retranslateUi(GLSLEditorWindow);

        EditorTabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(GLSLEditorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GLSLEditorWindow)
    {
        GLSLEditorWindow->setWindowTitle(QApplication::translate("GLSLEditorWindow", "MainWindow", 0));
        actionNew->setText(QApplication::translate("GLSLEditorWindow", "New", 0));
        actionOpen->setText(QApplication::translate("GLSLEditorWindow", "Open", 0));
        actionSave_As->setText(QApplication::translate("GLSLEditorWindow", "Save As", 0));
        actionExit->setText(QApplication::translate("GLSLEditorWindow", "Exit", 0));
        actionLoad->setText(QApplication::translate("GLSLEditorWindow", "Load Shader (Ctrl-L)", 0));
#ifndef QT_NO_TOOLTIP
        actionLoad->setToolTip(QApplication::translate("GLSLEditorWindow", "&Load (Ctrl-L)", 0));
#endif // QT_NO_TOOLTIP
        actionLoad->setShortcut(QApplication::translate("GLSLEditorWindow", "Ctrl+L", 0));
        actionSave->setText(QApplication::translate("GLSLEditorWindow", "Save Shader (Ctrl-U)", 0));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("GLSLEditorWindow", "&Save (Ctrl-U)", 0));
#endif // QT_NO_TOOLTIP
        actionSave->setShortcut(QApplication::translate("GLSLEditorWindow", "Ctrl+U", 0));
        actionSave_As_->setText(QApplication::translate("GLSLEditorWindow", "Save Shader As (Ctrl-Shift-U)", 0));
        actionSave_As_->setShortcut(QApplication::translate("GLSLEditorWindow", "Ctrl+Shift+U", 0));
        actionExit_Ctrl_X->setText(QApplication::translate("GLSLEditorWindow", "Exit (Ctrl-Q)", 0));
        actionExit_Ctrl_X->setShortcut(QApplication::translate("GLSLEditorWindow", "Ctrl+Q", 0));
        actionAbout->setText(QApplication::translate("GLSLEditorWindow", "About", 0));
        actionSave_pipeline->setText(QApplication::translate("GLSLEditorWindow", "Save pipeline (Ctrl-S)", 0));
        actionSave_pipeline->setShortcut(QApplication::translate("GLSLEditorWindow", "Ctrl+S", 0));
        actionLoad_pipeline->setText(QApplication::translate("GLSLEditorWindow", "Load pipeline (Ctrl-O)", 0));
        actionLoad_pipeline->setShortcut(QApplication::translate("GLSLEditorWindow", "Ctrl+O", 0));
        actionSave_pipeline_As->setText(QApplication::translate("GLSLEditorWindow", "Save pipeline As (Ctrl-E)", 0));
        actionSave_pipeline_As->setShortcut(QApplication::translate("GLSLEditorWindow", "Ctrl+E", 0));
        menuFile->setTitle(QApplication::translate("GLSLEditorWindow", "File", 0));
        menuAbout->setTitle(QApplication::translate("GLSLEditorWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class GLSLEditorWindow: public Ui_GLSLEditorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLSLEDITORWINDOW_H
