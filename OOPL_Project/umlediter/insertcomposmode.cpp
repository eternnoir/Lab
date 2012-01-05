#include "insertcomposmode.h"
#include <QtGui>
#include "composline.h"
#include <QLine>
#include <baseobjcet.h>

insertcomposmode::insertcomposmode(diagramscene *pscene)
{
    scene=pscene;
    i=2;
    first=NULL;
    second=NULL;
    select=0;
}
void insertcomposmode::mousepress(QGraphicsSceneMouseEvent *event)
{

    first=NULL;
    second=NULL;
    QTransform a;
    baseobjcet *tmp;
    if(scene->itemAt(event->scenePos(),a)==0)
    {
        select=0;
        return;
    }
    tmp =  dynamic_cast<baseobjcet *>(scene->itemAt(event->scenePos(),a));
    if(tmp!=NULL)
    {
        tmp->setSelected(1);
    }
    first =  dynamic_cast<Node *>(scene->itemAt(event->scenePos(),a));
    if(first!=NULL)
    select=1;
}
void insertcomposmode::mouserelease(QGraphicsSceneMouseEvent *event)
{
    QTransform a;
    if((scene->itemAt(event->scenePos(),a)==0)||select==0)
    {

        return;
    }
    second=dynamic_cast<Node *>(scene->itemAt(event->scenePos(),a));

    if(second==NULL)
        return;

/*    //////////////////////////////////////////////////////////////////
    Node *temp;
    Node *Fnode,*Snode;
    int N,E,W,S,x,y;

    QLine *lineN = new QLine(first->Nnode->pos().toPoint(),second->pos().toPoint());
    QLine *lineE = new QLine(first->Enode->pos().toPoint(),second->pos().toPoint());
    QLine *lineW = new QLine(first->Wnode->pos().toPoint(),second->pos().toPoint());
    QLine *lineS = new QLine(first->Snode->pos().toPoint(),second->pos().toPoint());

    N=lineN->dx()*lineN->dx()+lineN->dy()*lineN->dy();
    E=lineE->dx()*lineE->dx()+lineE->dy()*lineE->dy();
    W=lineW->dx()*lineW->dx()+lineW->dy()*lineW->dy();
    S=lineS->dx()*lineS->dx()+lineS->dy()*lineS->dy();

    if(N<E&&N<W&&N<S)
    {
        Fnode=first->Nnode;
        Snode=second->Snode;
    }
    else if(E<N&&E<W&&E<S)
    {
        Fnode=first->Enode;
        Snode=second->Wnode;
    }
    else if(W<N&&W<E&&W<S)
    {
        Fnode=first->Wnode;
        Snode=second->Enode;
    }
    else
    {
        Fnode=first->Snode;
        Fnode=second->Nnode;
    }





    //////////////////////////////////////////////////////////////////
*/

    composline *line = new composline(first,second);

    scene->addItem(line);

}

insertcomposmode::objectPair insertcomposmode::selectedobject() const
{

    QList<QGraphicsItem *> items = scene->selectedItems();
    if (items.count() == 2) {
        baseobjcet *first = dynamic_cast<baseobjcet *>(items.first());
        baseobjcet *second = dynamic_cast<baseobjcet *>(items.last());
        if (first && second)
            return objectPair(first, second);
    }
    return objectPair();
}


