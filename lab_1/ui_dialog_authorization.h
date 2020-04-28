/********************************************************************************
** Form generated from reading UI file 'dialog_authorization.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_AUTHORIZATION_H
#define UI_DIALOG_AUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialog_authorization
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_Login;
    QLabel *label_2;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton;

    void setupUi(QDialog *dialog_authorization)
    {
        if (dialog_authorization->objectName().isEmpty())
            dialog_authorization->setObjectName(QStringLiteral("dialog_authorization"));
        dialog_authorization->resize(400, 120);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/copy/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        dialog_authorization->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(dialog_authorization);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(dialog_authorization);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(dialog_authorization);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_Login = new QLineEdit(dialog_authorization);
        lineEdit_Login->setObjectName(QStringLiteral("lineEdit_Login"));

        gridLayout->addWidget(lineEdit_Login, 0, 1, 1, 1);

        label_2 = new QLabel(dialog_authorization);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_Password = new QLineEdit(dialog_authorization);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));
        lineEdit_Password->setInputMethodHints(Qt::ImhHiddenText);

        gridLayout->addWidget(lineEdit_Password, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        pushButton = new QPushButton(dialog_authorization);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 2, 0, 1, 1);


        retranslateUi(dialog_authorization);

        QMetaObject::connectSlotsByName(dialog_authorization);
    } // setupUi

    void retranslateUi(QDialog *dialog_authorization)
    {
        dialog_authorization->setWindowTitle(QApplication::translate("dialog_authorization", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("dialog_authorization", "\320\242\321\203\321\202 \320\274\320\276\320\266\320\275\320\276 \320\260\320\262\321\202\320\276\321\200\320\270\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\201\321\217", Q_NULLPTR));
        label->setText(QApplication::translate("dialog_authorization", "\320\233\320\276\320\263\320\270\320\275", Q_NULLPTR));
        label_2->setText(QApplication::translate("dialog_authorization", "\320\277\320\260\321\200\320\276\320\273\321\214", Q_NULLPTR));
        pushButton->setText(QApplication::translate("dialog_authorization", "\320\222\320\276\320\271\321\202\320\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialog_authorization: public Ui_dialog_authorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_AUTHORIZATION_H
