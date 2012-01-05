#include "assoline.h".h"
#include "node.h"

assoline::assoline(Node *fromNode, Node *toNode)
{
    myFromNode = fromNode;
    myToNode = toNode;

    //myFromNode->addLink(this);
    //myToNode->addLink(this);

    setFlags(QGraphicsItem::ItemIsSelectable);
    setZValue(-1);

    setColor(Qt::darkRed);
   // trackNodes();
}

assoline::~assoline()
{
    //myFromNode->removeassoline(this);
    //myToNode->removeassoline(this);
}

/*Node *assoline::fromNode() const
{
    return myFromNode;
}

Node *assoline::toNode() const
{
    return myToNode;
}
*/
void assoline::setColor(const QColor &color)
{
    setPen(QPen(color, 1.0));
}

QColor assoline::color() const
{
    return pen().color();
}

void assoline::trackNodes()
{
    setLine(QLineF(myFromNode->pos(), myToNode->pos()));
}

void assoline::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen myPen = pen();
    myPen.setColor(Qt::black);
    qreal arrowSize = 20;
    painter->setPen(myPen);
    //painter->setBrush(Qt::white);
    setLine(QLineF(myFromNode->pos(), myToNode->pos()));
    painter->drawLine(myFromNode->pos(),myToNode->pos());
    update();

}
