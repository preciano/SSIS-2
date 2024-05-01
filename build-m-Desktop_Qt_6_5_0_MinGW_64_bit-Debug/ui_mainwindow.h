/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QPushButton *addButton1;
    QPushButton *deleteButton1;
    QPushButton *editButton1;
    QSplitter *splitter;
    QLineEdit *lineSearch;
    QPushButton *searchButton1;
    QSplitter *splitter_9;
    QSplitter *splitter_2;
    QLabel *label;
    QLineEdit *lastName;
    QSplitter *splitter_3;
    QLabel *label_2;
    QLineEdit *firstName;
    QSplitter *splitter_4;
    QLabel *label_3;
    QLineEdit *middleName;
    QSplitter *splitter_10;
    QSplitter *splitter_7;
    QLabel *label_6;
    QLineEdit *ID;
    QSplitter *splitter_8;
    QLabel *label_7;
    QLineEdit *course;
    QSplitter *splitter_11;
    QSplitter *splitter_5;
    QLabel *label_4;
    QComboBox *gender;
    QSplitter *splitter_6;
    QLabel *label_5;
    QComboBox *yrLvl;
    QTableWidget *studentT;
    QPushButton *saveButton;
    QPushButton *cancelButton1;
    QWidget *tab_3;
    QSplitter *splitter_18;
    QLineEdit *lineSearch2;
    QPushButton *searchButton2;
    QSplitter *splitter_17;
    QSplitter *splitter_14;
    QSplitter *splitter_12;
    QLabel *label_8;
    QLineEdit *cC;
    QSplitter *splitter_13;
    QLabel *label_9;
    QLineEdit *cN;
    QPushButton *addButton2;
    QPushButton *saveButton2;
    QTableWidget *courseT;
    QPushButton *deleteButton2;
    QPushButton *editButton2;
    QPushButton *cancelButton2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 0, 771, 541));
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        addButton1 = new QPushButton(tab_2);
        addButton1->setObjectName("addButton1");
        addButton1->setGeometry(QRect(30, 290, 211, 32));
        deleteButton1 = new QPushButton(tab_2);
        deleteButton1->setObjectName("deleteButton1");
        deleteButton1->setGeometry(QRect(30, 340, 211, 32));
        editButton1 = new QPushButton(tab_2);
        editButton1->setObjectName("editButton1");
        editButton1->setGeometry(QRect(30, 390, 211, 32));
        splitter = new QSplitter(tab_2);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(280, 0, 471, 24));
        splitter->setOrientation(Qt::Horizontal);
        lineSearch = new QLineEdit(splitter);
        lineSearch->setObjectName("lineSearch");
        splitter->addWidget(lineSearch);
        searchButton1 = new QPushButton(splitter);
        searchButton1->setObjectName("searchButton1");
        splitter->addWidget(searchButton1);
        splitter_9 = new QSplitter(tab_2);
        splitter_9->setObjectName("splitter_9");
        splitter_9->setGeometry(QRect(10, 60, 251, 76));
        splitter_9->setOrientation(Qt::Vertical);
        splitter_2 = new QSplitter(splitter_9);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter_2);
        label->setObjectName("label");
        splitter_2->addWidget(label);
        lastName = new QLineEdit(splitter_2);
        lastName->setObjectName("lastName");
        splitter_2->addWidget(lastName);
        splitter_9->addWidget(splitter_2);
        splitter_3 = new QSplitter(splitter_9);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_3);
        label_2->setObjectName("label_2");
        splitter_3->addWidget(label_2);
        firstName = new QLineEdit(splitter_3);
        firstName->setObjectName("firstName");
        splitter_3->addWidget(firstName);
        splitter_9->addWidget(splitter_3);
        splitter_4 = new QSplitter(splitter_9);
        splitter_4->setObjectName("splitter_4");
        splitter_4->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter_4);
        label_3->setObjectName("label_3");
        splitter_4->addWidget(label_3);
        middleName = new QLineEdit(splitter_4);
        middleName->setObjectName("middleName");
        splitter_4->addWidget(middleName);
        splitter_9->addWidget(splitter_4);
        splitter_10 = new QSplitter(tab_2);
        splitter_10->setObjectName("splitter_10");
        splitter_10->setGeometry(QRect(10, 220, 251, 49));
        splitter_10->setOrientation(Qt::Vertical);
        splitter_7 = new QSplitter(splitter_10);
        splitter_7->setObjectName("splitter_7");
        splitter_7->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(splitter_7);
        label_6->setObjectName("label_6");
        splitter_7->addWidget(label_6);
        ID = new QLineEdit(splitter_7);
        ID->setObjectName("ID");
        splitter_7->addWidget(ID);
        splitter_10->addWidget(splitter_7);
        splitter_8 = new QSplitter(splitter_10);
        splitter_8->setObjectName("splitter_8");
        splitter_8->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(splitter_8);
        label_7->setObjectName("label_7");
        splitter_8->addWidget(label_7);
        course = new QLineEdit(splitter_8);
        course->setObjectName("course");
        splitter_8->addWidget(course);
        splitter_10->addWidget(splitter_8);
        splitter_11 = new QSplitter(tab_2);
        splitter_11->setObjectName("splitter_11");
        splitter_11->setGeometry(QRect(10, 150, 251, 49));
        splitter_11->setOrientation(Qt::Vertical);
        splitter_5 = new QSplitter(splitter_11);
        splitter_5->setObjectName("splitter_5");
        splitter_5->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(splitter_5);
        label_4->setObjectName("label_4");
        splitter_5->addWidget(label_4);
        gender = new QComboBox(splitter_5);
        gender->addItem(QString());
        gender->addItem(QString());
        gender->setObjectName("gender");
        splitter_5->addWidget(gender);
        splitter_11->addWidget(splitter_5);
        splitter_6 = new QSplitter(splitter_11);
        splitter_6->setObjectName("splitter_6");
        splitter_6->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(splitter_6);
        label_5->setObjectName("label_5");
        splitter_6->addWidget(label_5);
        yrLvl = new QComboBox(splitter_6);
        yrLvl->addItem(QString());
        yrLvl->addItem(QString());
        yrLvl->addItem(QString());
        yrLvl->addItem(QString());
        yrLvl->setObjectName("yrLvl");
        splitter_6->addWidget(yrLvl);
        splitter_11->addWidget(splitter_6);
        studentT = new QTableWidget(tab_2);
        studentT->setObjectName("studentT");
        studentT->setGeometry(QRect(270, 40, 481, 461));
        saveButton = new QPushButton(tab_2);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(30, 440, 91, 32));
        cancelButton1 = new QPushButton(tab_2);
        cancelButton1->setObjectName("cancelButton1");
        cancelButton1->setGeometry(QRect(150, 440, 91, 31));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        splitter_18 = new QSplitter(tab_3);
        splitter_18->setObjectName("splitter_18");
        splitter_18->setGeometry(QRect(20, 390, 731, 24));
        splitter_18->setOrientation(Qt::Horizontal);
        lineSearch2 = new QLineEdit(splitter_18);
        lineSearch2->setObjectName("lineSearch2");
        splitter_18->addWidget(lineSearch2);
        searchButton2 = new QPushButton(splitter_18);
        searchButton2->setObjectName("searchButton2");
        splitter_18->addWidget(searchButton2);
        splitter_17 = new QSplitter(tab_3);
        splitter_17->setObjectName("splitter_17");
        splitter_17->setGeometry(QRect(20, 430, 721, 42));
        splitter_17->setOrientation(Qt::Horizontal);
        splitter_14 = new QSplitter(splitter_17);
        splitter_14->setObjectName("splitter_14");
        splitter_14->setOrientation(Qt::Vertical);
        splitter_12 = new QSplitter(splitter_14);
        splitter_12->setObjectName("splitter_12");
        splitter_12->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(splitter_12);
        label_8->setObjectName("label_8");
        splitter_12->addWidget(label_8);
        cC = new QLineEdit(splitter_12);
        cC->setObjectName("cC");
        splitter_12->addWidget(cC);
        splitter_14->addWidget(splitter_12);
        splitter_13 = new QSplitter(splitter_14);
        splitter_13->setObjectName("splitter_13");
        splitter_13->setOrientation(Qt::Horizontal);
        label_9 = new QLabel(splitter_13);
        label_9->setObjectName("label_9");
        splitter_13->addWidget(label_9);
        cN = new QLineEdit(splitter_13);
        cN->setObjectName("cN");
        splitter_13->addWidget(cN);
        splitter_14->addWidget(splitter_13);
        splitter_17->addWidget(splitter_14);
        addButton2 = new QPushButton(splitter_17);
        addButton2->setObjectName("addButton2");
        splitter_17->addWidget(addButton2);
        saveButton2 = new QPushButton(tab_3);
        saveButton2->setObjectName("saveButton2");
        saveButton2->setGeometry(QRect(270, 480, 100, 32));
        courseT = new QTableWidget(tab_3);
        courseT->setObjectName("courseT");
        courseT->setGeometry(QRect(10, 10, 741, 371));
        deleteButton2 = new QPushButton(tab_3);
        deleteButton2->setObjectName("deleteButton2");
        deleteButton2->setGeometry(QRect(530, 480, 221, 32));
        editButton2 = new QPushButton(tab_3);
        editButton2->setObjectName("editButton2");
        editButton2->setGeometry(QRect(10, 480, 231, 32));
        cancelButton2 = new QPushButton(tab_3);
        cancelButton2->setObjectName("cancelButton2");
        cancelButton2->setGeometry(QRect(410, 480, 91, 31));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addButton1->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        deleteButton1->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        editButton1->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        searchButton1->setText(QCoreApplication::translate("MainWindow", "Search ID#", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Last Name:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "First Name:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Middle Name:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "ID Number:", nullptr));
        ID->setPlaceholderText(QCoreApplication::translate("MainWindow", "e.g. 2022-0001", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Course:", nullptr));
        course->setPlaceholderText(QCoreApplication::translate("MainWindow", "e.g. BSCS", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Gender:", nullptr));
        gender->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        gender->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "Year Level:", nullptr));
        yrLvl->setItemText(0, QCoreApplication::translate("MainWindow", "1st Year", nullptr));
        yrLvl->setItemText(1, QCoreApplication::translate("MainWindow", "2nd Year", nullptr));
        yrLvl->setItemText(2, QCoreApplication::translate("MainWindow", "3rd Year", nullptr));
        yrLvl->setItemText(3, QCoreApplication::translate("MainWindow", "4th Year", nullptr));

        saveButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        cancelButton1->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Student Info", nullptr));
        searchButton2->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Course Code:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Course Name:", nullptr));
        addButton2->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        saveButton2->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        deleteButton2->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        editButton2->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        cancelButton2->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Available Courses", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
