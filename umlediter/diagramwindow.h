#ifndef DIAGRAMWINDOW_H
#define DIAGRAMWINDOW_H

#include <QMainWindow>
#include <QPair>
#include <basemode.h>
#include <insertclassmode.h>
#include <diagramscene.h>
//#include <diagramwindow.ui>

class QAction;
class QGraphicsItem;
class QGraphicsScene;
class QGraphicsView;
class basemode;
class DiagramScene;

namespace Ui {
    class diagramwindow;
}

class diagramwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit diagramwindow(QWidget *parent = 0);
    ~diagramwindow();

private slots:
    void on_selectButton_clicked();

    void on_associationButton_clicked();

    void on_generalizationButton_clicked();

    void on_compositionButton_clicked();

    void on_classButton_clicked();

    void on_usecaseButton_clicked();

    void on_GUButton_clicked();

    void on_actionGroup_triggered();

    void on_actionUngruop_triggered();

    void on_actionEdit_Name_triggered();

private:
    Ui::diagramwindow *ui;
    diagramscene *scene;
    //DiagramScene *dscene;
    QGraphicsItemGroup *group;

    basemode *I_C_M;
    basemode *S_M;
    basemode *G_M;
    basemode *I_U_M;
    basemode *I_A_M;
    basemode *I_CO_M;



    int seqNumber;
};

#endif // DIAGRAMWINDOW_H
