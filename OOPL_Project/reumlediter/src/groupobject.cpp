#include "groupobject.h"

groupobject::groupobject(QList<QGraphicsItem *> list)
{
        setFlags(ItemIsMovable | ItemIsSelectable);
        glist=list;
        isselect=0;
        setSelected(0);
}
groupobject::~groupobject()
{

}
int groupobject::size()
{
    return glist.size();
}

QRectF groupobject::boundingRect() const
{
    return glist.at(0)->boundingRect();
}


void groupobject::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    for(int i=0;i<glist.size();i++)
    {
        if(glist.at(i)->isSelected()==1)
        {
            setSelected(1);
            break;
        }
        else
            setSelected(0);
    }
    update();
    if(isSelected()==1)
    {
        for(int k=0;k<glist.size();k++)
        {
            glist.at(k)->setSelected(1);
        }
    }
}
