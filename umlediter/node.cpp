#include <QtGui>

#include "link.h"
#include "node.h"

Node::Node()
{
    myPolygon << QPointF(-5, 5) << QPointF(5,5)
              << QPointF(5, -5) << QPointF(-5, -5);
    qPath.addPolygon(myPolygon);
    qBrush.setColor( Qt::black );
    qBrush.setStyle( Qt::SolidPattern );
    setFlags(ItemIsMovable | ItemIsSelectable);
}
Node::~Node()
{
    foreach (Link *link, myLinks)
        delete link;
}

void Node::addLink(Link *link)
{
    myLinks.insert(link);
}

void Node::removeLink(Link *link)
{
    myLinks.remove(link);
}

void Node::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
     painter->fillPath( qPath, qBrush );
}

QRectF Node::boundingRect() const
{
     return qPath.boundingRect();
}
