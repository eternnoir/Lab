#include "insertgenmode.h"
#include <QtGui>
#include "link.h"
#include <QLine>

insertgenmode::insertgenmode(diagramscene *pscene)
{
    scene=pscene;
    i=2;
    first=NULL;
    second=NULL;
    select=0;
}
void insertgenmode::mousepress(QGraphicsSceneMouseEvent *event)
{

    first=NULL;
    second=NULL;
    QTransform a;
    if(scene->itemAt(event->scenePos(),a)==0)
    {
        select=0;
        return;
    }

    first =  dynamic_cast<Node *>(scene->itemAt(event->scenePos(),a));
    if(first!=NULL)
    select=1;
}
void insertgenmode::mouserelease(QGraphicsSceneMouseEvent *event)
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

    Link *line = new Link(first,second);

    scene->addItem(line);

}



