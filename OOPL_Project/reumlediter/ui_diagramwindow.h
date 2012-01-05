/********************************************************************************
** Form generated from reading UI file 'diagramwindow.ui'
**
** Created: Mon Dec 5 12:38:41 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAGRAMWINDOW_H
#define UI_DIAGRAMWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_diagramwindow
{
public:
    QAction *actionGroup;
    QAction *actionUngruop;
    QAction *actionEdit_Name;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *selectButton;
    QPushButton *associationButton;
    QPushButton *generalizationButton;
    QPushButton *compositionButton;
    QPushButton *classButton;
    QPushButton *usecaseButton;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *diagramwindow)
    {
        if (diagramwindow->objectName().isEmpty())
            diagramwindow->setObjectName(QString::fromUtf8("diagramwindow"));
        diagramwindow->resize(1000, 905);
        diagramwindow->setMaximumSize(QSize(1000, 1000));
        diagramwindow->setAnimated(false);
        actionGroup = new QAction(diagramwindow);
        actionGroup->setObjectName(QString::fromUtf8("actionGroup"));
        actionGroup->setCheckable(true);
        actionGroup->setEnabled(true);
        actionGroup->setSoftKeyRole(QAction::NoSoftKey);
        actionUngruop = new QAction(diagramwindow);
        actionUngruop->setObjectName(QString::fromUtf8("actionUngruop"));
        actionUngruop->setCheckable(true);
        actionEdit_Name = new QAction(diagramwindow);
        actionEdit_Name->setObjectName(QString::fromUtf8("actionEdit_Name"));
        centralwidget = new QWidget(diagramwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 131, 781));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 111, 731));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        selectButton = new QPushButton(layoutWidget);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("image/200712211681157_2.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        selectButton->setIcon(icon);
        selectButton->setIconSize(QSize(50, 50));

        verticalLayout->addWidget(selectButton);

        associationButton = new QPushButton(layoutWidget);
        associationButton->setObjectName(QString::fromUtf8("associationButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("image/ass2o.png"), QSize(), QIcon::Normal, QIcon::Off);
        associationButton->setIcon(icon1);
        associationButton->setIconSize(QSize(50, 50));

        verticalLayout->addWidget(associationButton);

        generalizationButton = new QPushButton(layoutWidget);
        generalizationButton->setObjectName(QString::fromUtf8("generalizationButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("image/ge.png"), QSize(), QIcon::Normal, QIcon::Off);
        generalizationButton->setIcon(icon2);
        generalizationButton->setIconSize(QSize(50, 50));

        verticalLayout->addWidget(generalizationButton);

        compositionButton = new QPushButton(layoutWidget);
        compositionButton->setObjectName(QString::fromUtf8("compositionButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("image/asso.png"), QSize(), QIcon::Normal, QIcon::Off);
        compositionButton->setIcon(icon3);
        compositionButton->setIconSize(QSize(50, 50));

        verticalLayout->addWidget(compositionButton);

        classButton = new QPushButton(layoutWidget);
        classButton->setObjectName(QString::fromUtf8("classButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("image/class.png"), QSize(), QIcon::Normal, QIcon::Off);
        classButton->setIcon(icon4);
        classButton->setIconSize(QSize(50, 50));

        verticalLayout->addWidget(classButton);

        usecaseButton = new QPushButton(layoutWidget);
        usecaseButton->setObjectName(QString::fromUtf8("usecaseButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("image/use.png"), QSize(), QIcon::Normal, QIcon::Off);
        usecaseButton->setIcon(icon5);
        usecaseButton->setIconSize(QSize(50, 50));

        verticalLayout->addWidget(usecaseButton);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setGeometry(QRect(160, 20, 821, 785));
        graphicsView->setMaximumSize(QSize(1000, 785));
        graphicsView->setContextMenuPolicy(Qt::NoContextMenu);
        graphicsView->setAcceptDrops(false);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setDragMode(QGraphicsView::NoDrag);
        diagramwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(diagramwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        diagramwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(diagramwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        diagramwindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuEdit->addAction(actionGroup);
        menuEdit->addAction(actionUngruop);
        menuEdit->addAction(actionEdit_Name);

        retranslateUi(diagramwindow);

        QMetaObject::connectSlotsByName(diagramwindow);
    } // setupUi

    void retranslateUi(QMainWindow *diagramwindow)
    {
        diagramwindow->setWindowTitle(QApplication::translate("diagramwindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionGroup->setText(QApplication::translate("diagramwindow", "Group", 0, QApplication::UnicodeUTF8));
        actionUngruop->setText(QApplication::translate("diagramwindow", "ungruop", 0, QApplication::UnicodeUTF8));
        actionEdit_Name->setText(QApplication::translate("diagramwindow", "Edit Name", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("diagramwindow", "ToolBox", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QString());
        associationButton->setText(QString());
        generalizationButton->setText(QString());
        compositionButton->setText(QString());
        classButton->setText(QString());
        usecaseButton->setText(QString());
        menuFile->setTitle(QApplication::translate("diagramwindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("diagramwindow", "Edit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class diagramwindow: public Ui_diagramwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAGRAMWINDOW_H
