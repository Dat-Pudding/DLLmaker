/********************************************************************************
** Form generated from reading UI file 'dllmaker.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLLMAKER_H
#define UI_DLLMAKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DLLmaker
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QPushButton *runButton;
    QLineEdit *generatorInput;
    QPushButton *generatorExeSelectButton;
    QGroupBox *groupBox;
    QPushButton *exeSelectButton;
    QLineEdit *exeFilePathInput;
    QGroupBox *groupBox_3;
    QCheckBox *shortcutCheckBox;
    QCheckBox *saveCheckBox;

    void setupUi(QMainWindow *DLLmaker)
    {
        if (DLLmaker->objectName().isEmpty())
            DLLmaker->setObjectName("DLLmaker");
        DLLmaker->resize(420, 190);
        DLLmaker->setMinimumSize(QSize(370, 190));
        DLLmaker->setMaximumSize(QSize(420, 190));
        centralwidget = new QWidget(DLLmaker);
        centralwidget->setObjectName("centralwidget");
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 100, 401, 81));
        runButton = new QPushButton(groupBox_2);
        runButton->setObjectName("runButton");
        runButton->setGeometry(QRect(290, 50, 101, 24));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        runButton->setFont(font);
        generatorInput = new QLineEdit(groupBox_2);
        generatorInput->setObjectName("generatorInput");
        generatorInput->setGeometry(QRect(10, 20, 381, 24));
        generatorExeSelectButton = new QPushButton(groupBox_2);
        generatorExeSelectButton->setObjectName("generatorExeSelectButton");
        generatorExeSelectButton->setGeometry(QRect(10, 50, 141, 24));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 271, 81));
        exeSelectButton = new QPushButton(groupBox);
        exeSelectButton->setObjectName("exeSelectButton");
        exeSelectButton->setGeometry(QRect(10, 50, 141, 24));
        exeFilePathInput = new QLineEdit(groupBox);
        exeFilePathInput->setObjectName("exeFilePathInput");
        exeFilePathInput->setGeometry(QRect(10, 20, 251, 24));
        exeFilePathInput->setDragEnabled(true);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(290, 10, 121, 81));
        shortcutCheckBox = new QCheckBox(groupBox_3);
        shortcutCheckBox->setObjectName("shortcutCheckBox");
        shortcutCheckBox->setGeometry(QRect(10, 20, 111, 22));
        saveCheckBox = new QCheckBox(groupBox_3);
        saveCheckBox->setObjectName("saveCheckBox");
        saveCheckBox->setGeometry(QRect(10, 50, 101, 22));
        DLLmaker->setCentralWidget(centralwidget);

        retranslateUi(DLLmaker);

        QMetaObject::connectSlotsByName(DLLmaker);
    } // setupUi

    void retranslateUi(QMainWindow *DLLmaker)
    {
        DLLmaker->setWindowTitle(QCoreApplication::translate("DLLmaker", "DLLmaker", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DLLmaker", "Choose and run desired windeployqt.exe", nullptr));
        runButton->setText(QCoreApplication::translate("DLLmaker", "RUN", nullptr));
        generatorExeSelectButton->setText(QCoreApplication::translate("DLLmaker", "Choose WinDeployQt...", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DLLmaker", "Choose location of your project's executable", nullptr));
        exeSelectButton->setText(QCoreApplication::translate("DLLmaker", "Choose executable...", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("DLLmaker", "Options", nullptr));
        shortcutCheckBox->setText(QCoreApplication::translate("DLLmaker", "Create Shortcut", nullptr));
        saveCheckBox->setText(QCoreApplication::translate("DLLmaker", "Save Paths", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DLLmaker: public Ui_DLLmaker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLLMAKER_H
