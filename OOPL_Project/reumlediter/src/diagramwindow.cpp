#include <QtGui>
#include "diagramwindow.h"
#include "ui_diagramwindow.h"
#include "node.h"
#include "classobject.h"
#include "basemode.h"
#include "insertclassmode.h"
#include "diagramscene.h"
#include "selectmode.h"
#include "insertgenmode.h"
#include "insertusecasemode.h"
#include "insertassmode.h"
#include "insertcomposmode.h"
#include "groupobject.h"

diagramwindow::diagramwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::diagramwindow)
{
    ui->setupUi(this);
    scene = new diagramscene();
    //scene->setSceneRect(0,0,5000,5000);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setDragMode(QGraphicsView::RubberBandDrag);
    ui->graphicsView->setRenderHints(QPainter::Antialiasing
                         | QPainter::TextAntialiasing);
    ui->graphicsView->setContextMenuPolicy(Qt::ActionsContextMenu);

    S_M = new selectmode(scene);
    G_M=new insertgenmode(scene);
    I_C_M=new InsertClassMode(scene);
    I_U_M=new insertusecasemode(scene);
    I_A_M=new insertassmode(scene);
    I_CO_M =new insertcomposmode(scene);
}

diagramwindow::~diagramwindow()
{
    delete ui;
}

void diagramwindow::on_selectButton_clicked()
{


    ui->selectButton->setFlat(1);
    ui->associationButton->setFlat(0);
    ui->generalizationButton->setFlat(0);
    ui->compositionButton->setFlat(0);
    ui->classButton->setFlat(0);
    ui->usecaseButton->setFlat(0);

    scene->setMode(S_M);

}

void diagramwindow::on_associationButton_clicked()
{
    ui->selectButton->setFlat(0);
    ui->associationButton->setFlat(1);
    ui->generalizationButton->setFlat(0);
    ui->compositionButton->setFlat(0);
    ui->classButton->setFlat(0);
    ui->usecaseButton->setFlat(0);
    scene->setMode(I_A_M);
}

void diagramwindow::on_generalizationButton_clicked()
{

    ui->selectButton->setFlat(0);
    ui->associationButton->setFlat(0);
    ui->generalizationButton->setFlat(1);
    ui->compositionButton->setFlat(0);
    ui->classButton->setFlat(0);
    ui->usecaseButton->setFlat(0);
    scene->setMode(G_M);
}

void diagramwindow::on_compositionButton_clicked()
{
    ui->selectButton->setFlat(0);
    ui->associationButton->setFlat(0);
    ui->generalizationButton->setFlat(0);
    ui->compositionButton->setFlat(1);
    ui->classButton->setFlat(0);
    ui->usecaseButton->setFlat(0);
    scene->setMode(I_CO_M);

}

void diagramwindow::on_classButton_clicked()
{


    ui->selectButton->setFlat(0);
    ui->associationButton->setFlat(0);
    ui->generalizationButton->setFlat(0);
    ui->compositionButton->setFlat(0);
    ui->classButton->setFlat(1);
    ui->usecaseButton->setFlat(0);

    scene->setMode(I_C_M);

}

void diagramwindow::on_usecaseButton_clicked()
{
    ui->selectButton->setFlat(0);
    ui->associationButton->setFlat(0);
    ui->generalizationButton->setFlat(0);
    ui->compositionButton->setFlat(0);
    ui->classButton->setFlat(0);
    ui->usecaseButton->setFlat(1);
    scene->setMode(I_U_M);
}

void diagramwindow::on_GUButton_clicked()
{

}

void diagramwindow::on_actionGroup_triggered()
{
    //group =scene->createItemGroup(scene->selectedItems());
    groupobject *g=new groupobject(scene->selectedItems());
    scene->addItem(g);
}

void diagramwindow::on_actionUngruop_triggered()
{

    groupobject *g=NULL;
    groupobject *gp=NULL;
    int max=0;

    for(int i=0;i<scene->selectedItems().size();i++)
    {
        g =  dynamic_cast<groupobject *>(scene->selectedItems().at(i));
        if(g!=NULL)
        {
            if(g->size()>=max)
            {
                gp=g;
                max=g->size();
            }
        }
    }
    if(gp!=NULL)
        scene->removeItem(gp);


}

void diagramwindow::on_actionEdit_Name_triggered()
{
    baseobjcet *tmp=NULL;
    for(int i=0;i<scene->selectedItems().size();i++)
    {
    tmp = dynamic_cast<baseobjcet *>(scene->selectedItems().at(i));
    }
    if(tmp!=NULL)
    {
        tmp->editText();
    }
}
