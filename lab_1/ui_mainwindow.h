/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Login;
    QAction *action_Quit;
    QAction *action_tbl_Gr;
    QAction *action_Save;
    QAction *action_undo;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_2;
    QPushButton *pushButton;
    QTableView *tableView;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Firstbtn;
    QPushButton *Previousbtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *Nextbtn;
    QPushButton *Lastbtn;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *NameEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QVBoxLayout *verticalLayout;
    QPushButton *AddBtn;
    QPushButton *exitBtn;
    QPushButton *deleteBtn;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *SurnameEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(639, 386);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icon/images/strategy.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_Login = new QAction(MainWindow);
        action_Login->setObjectName(QStringLiteral("action_Login"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/open/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Login->setIcon(icon1);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_tbl_Gr = new QAction(MainWindow);
        action_tbl_Gr->setObjectName(QStringLiteral("action_tbl_Gr"));
        action_tbl_Gr->setIcon(icon);
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/Save/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon2);
        action_undo = new QAction(MainWindow);
        action_undo->setObjectName(QStringLiteral("action_undo"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_undo->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 4, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));

        gridLayout->addWidget(doubleSpinBox_2, 0, 5, 1, 2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 7, 1, 1);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableView, 1, 0, 1, 8);

        horizontalSpacer_2 = new QSpacerItem(110, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Firstbtn = new QPushButton(centralWidget);
        Firstbtn->setObjectName(QStringLiteral("Firstbtn"));

        horizontalLayout_2->addWidget(Firstbtn);

        Previousbtn = new QPushButton(centralWidget);
        Previousbtn->setObjectName(QStringLiteral("Previousbtn"));

        horizontalLayout_2->addWidget(Previousbtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        Nextbtn = new QPushButton(centralWidget);
        Nextbtn->setObjectName(QStringLiteral("Nextbtn"));

        horizontalLayout_2->addWidget(Nextbtn);

        Lastbtn = new QPushButton(centralWidget);
        Lastbtn->setObjectName(QStringLiteral("Lastbtn"));

        horizontalLayout_2->addWidget(Lastbtn);


        gridLayout->addLayout(horizontalLayout_2, 2, 2, 1, 4);

        horizontalSpacer_4 = new QSpacerItem(124, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 6, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        NameEdit = new QLineEdit(centralWidget);
        NameEdit->setObjectName(QStringLiteral("NameEdit"));

        horizontalLayout->addWidget(NameEdit);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setMaximum(5);
        doubleSpinBox->setSingleStep(0.01);

        horizontalLayout_4->addWidget(doubleSpinBox);


        gridLayout->addLayout(horizontalLayout_4, 3, 3, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        AddBtn = new QPushButton(centralWidget);
        AddBtn->setObjectName(QStringLiteral("AddBtn"));

        verticalLayout->addWidget(AddBtn);

        exitBtn = new QPushButton(centralWidget);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));

        verticalLayout->addWidget(exitBtn);

        deleteBtn = new QPushButton(centralWidget);
        deleteBtn->setObjectName(QStringLiteral("deleteBtn"));

        verticalLayout->addWidget(deleteBtn);


        gridLayout->addLayout(verticalLayout, 3, 7, 2, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        SurnameEdit = new QLineEdit(centralWidget);
        SurnameEdit->setObjectName(QStringLiteral("SurnameEdit"));

        horizontalLayout_3->addWidget(SurnameEdit);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        dateEdit = new QDateEdit(centralWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setCalendarPopup(true);

        horizontalLayout_5->addWidget(dateEdit);


        gridLayout->addLayout(horizontalLayout_5, 4, 3, 1, 3);

        MainWindow->setCentralWidget(centralWidget);
        tableView->raise();
        lineEdit->raise();
        label_6->raise();
        doubleSpinBox_2->raise();
        label_5->raise();
        pushButton->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 639, 20));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addSeparator();
        menu->addAction(action_Login);
        menu->addAction(action_Quit);
        menu_2->addAction(action_tbl_Gr);
        mainToolBar->addAction(action_Save);
        mainToolBar->addAction(action_undo);

        retranslateUi(MainWindow);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\245\320\276\321\200\320\276\321\210\320\260\321\217 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260", Q_NULLPTR));
        action_Login->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", Q_NULLPTR));
        action_Login->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", Q_NULLPTR));
        action_Quit->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", Q_NULLPTR));
        action_Quit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
        action_tbl_Gr->setText(QApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \320\263\321\200\321\203\320\277\320\277", Q_NULLPTR));
        action_Save->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", Q_NULLPTR));
        action_undo->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
        action_undo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\270\320\274\320\265\320\275\320\270", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\320\277\320\276\320\270\321\201\320\272 \320\277\320\276 \320\276\321\206\320\265\320\275\320\272\320\265", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\321\201\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \321\204\320\270\320\273\321\214\321\202\321\200", Q_NULLPTR));
        Firstbtn->setText(QApplication::translate("MainWindow", "<<\320\237\320\265\321\200\320\262\321\213\320\271", Q_NULLPTR));
        Previousbtn->setText(QApplication::translate("MainWindow", "<\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271", Q_NULLPTR));
        Nextbtn->setText(QApplication::translate("MainWindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\271>", Q_NULLPTR));
        Lastbtn->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\320\273\320\265\320\264\320\275\320\270\320\271>>", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\320\230\320\274\321\217", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        NameEdit->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>\320\255\321\202\320\276 \320\277\320\276\320\273\320\265 \320\222\320\262\320\276\320\264\320\260 \320\230\320\274\320\265\320\275\320\270</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        NameEdit->setText(QApplication::translate("MainWindow", "\320\230\320\274\321\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\320\221\320\260\320\273\320\273\321\213", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        doubleSpinBox->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>\320\227\320\264\320\265\321\201\321\214 \320\275\320\260\320\264\320\276 \320\262\321\213\320\261\321\200\320\260\321\202\321\214 \321\201\321\200\320\265\320\264\320\275\320\270\320\271 \320\261\320\260\320\273 </p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        AddBtn->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", Q_NULLPTR));
        deleteBtn->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        SurnameEdit->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>\320\255\321\202\320\276 \320\277\320\276\320\273\320\265 \320\262\320\262\320\276\320\264\320\260 \320\244\320\260\320\274\320\270\320\273\320\270\320\270</p><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        SurnameEdit->setText(QApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\320\224\320\265\320\275\321\214 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\320\265", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        dateEdit->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>\320\227\320\264\320\265\321\201\321\214 \320\262\321\213\320\261\320\270\321\200\320\260\321\216\321\202 \320\224\320\265\320\275\321\214 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\320\265 </p><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        menu->setTitle(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
