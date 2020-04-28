/********************************************************************************
** Form generated from reading UI file 'tbl_gr_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TBL_GR_DIALOG_H
#define UI_TBL_GR_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_tbl_gr_dialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *number_edit;
    QPushButton *AddButton;
    QTableView *tableView;
    QPushButton *DeleteButton;

    void setupUi(QDialog *tbl_gr_dialog)
    {
        if (tbl_gr_dialog->objectName().isEmpty())
            tbl_gr_dialog->setObjectName(QStringLiteral("tbl_gr_dialog"));
        tbl_gr_dialog->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icon/images/strategy.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbl_gr_dialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(tbl_gr_dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        number_edit = new QLineEdit(tbl_gr_dialog);
        number_edit->setObjectName(QStringLiteral("number_edit"));

        gridLayout->addWidget(number_edit, 1, 0, 1, 1);

        AddButton = new QPushButton(tbl_gr_dialog);
        AddButton->setObjectName(QStringLiteral("AddButton"));

        gridLayout->addWidget(AddButton, 2, 0, 1, 1);

        tableView = new QTableView(tbl_gr_dialog);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        DeleteButton = new QPushButton(tbl_gr_dialog);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));

        gridLayout->addWidget(DeleteButton, 3, 0, 1, 1);


        retranslateUi(tbl_gr_dialog);

        QMetaObject::connectSlotsByName(tbl_gr_dialog);
    } // setupUi

    void retranslateUi(QDialog *tbl_gr_dialog)
    {
        tbl_gr_dialog->setWindowTitle(QApplication::translate("tbl_gr_dialog", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \320\223\321\200\321\203\320\277", Q_NULLPTR));
        AddButton->setText(QApplication::translate("tbl_gr_dialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        DeleteButton->setText(QApplication::translate("tbl_gr_dialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tbl_gr_dialog: public Ui_tbl_gr_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TBL_GR_DIALOG_H
