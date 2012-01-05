#include <QtGui>

#include <QtCore/QtDebug>

#include "composline.h"
#include "node.h"
const qreal Pi = 3.14;

composline::composline(Node *fromNode, Node *toNode)
{
    myFromNode = fromNode;
    myToNode = toNode;

    //myFromNode->addcomposline(this);
    //myToNode->addcomposline(this);

    //setFlags(QGraphicsItem::ItemIsSelectable);
    setZValue(-1);
    myColor = Qt::black;

    setColor(Qt::darkRed);
    //trackNodes();
}

composline::~composline()
{
    //myFromNode->removecomposline(this);
    //myToNode->removecomposline(this);
}

QRectF composline::boundingRect() const
{
    qreal extra = (pen().width() + 20) / 2.0;

    return QRectF(line().p1(), QSizeF(line().p2().x() - line().p1().x(),
                                      line().p2().y() - line().p1().y()))
        .normalized()
        .adjusted(-extra, -extra, extra, extra);
}

QPainterPath composline::shape() const
{
    QPainterPath path = QGraphicsLineItem::shape();
    path.addPolygon(arrowHead);
    return path;
}

Node *composline::fromNode() const
{
    return myFromNode;
}

Node *composline::toNode() const
{
    return myToNode;
}

void composline::setColor(const QColor &color)
{
    setPen(QPen(color, 1.0));
}

QColor composline::color() const
{
    return pen().color();
}

void composline::trackNodes()
{
    setLine(QLineF(myFromNode->pos(), myToNode->pos()));
}

void composline::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if (myFromNode->collidesWithItem(myToNode))
        return;

    QPen myPen = pen();
    myPen.setColor(myColor);
    qreal arrowSize = 20;
    painter->setPen(myPen);
    painter->setBrush(Qt::white);

    QLineF centerLine(myFromNode->pos(), myToNode->pos());
    QPolygonF endPolygon = myToNode->polygon();
    QPointF p1 = endPolygon.first() + myToNode->pos();
    QPointF p2;
/*    QPointF intersectPoint;
    QLineF polyLine;
    for (int i = 1; i < endPolygon.count(); ++i) {
    p2 = endPolygon.at(i) + myToNode->pos();
    polyLine = QLineF(p1, p2);
    QLineF::IntersectType intersectType =
        polyLine.intersect(centerLine, &intersectPoint);
    if (intersectType == QLineF::BoundedIntersection)
        break;
        p1 = p2;
    }
*/
    setLine(QLineF(myToNode->pos(), myFromNode->pos()));

    double angle = ::acos(line().dx() / line().length());
    if (line().dy() >= 0)
        angle = (Pi * 2) - angle;

        QPointF arrowP1 = line().p1() + QPointF(sin(angle + Pi / 3) * arrowSize,
                                        cos(angle + Pi / 3) * arrowSize);
        QPointF arrowP2 = line().p1() + QPointF(sin(angle + Pi - Pi / 3) * arrowSize,
                                        cos(angle + Pi - Pi / 3) * arrowSize);
        QPointF arrowP3 = line().p1() + QPointF(sin(angle - Pi / 3) * arrowSize,
                                        cos(angle + Pi / 3) * arrowSize);
        QPointF arrowP4 = line().p1() + QPointF(sin(angle + Pi + Pi / 3) * arrowSize,
                                        cos(angle + Pi - Pi / 3) * arrowSize);

        arrowHead.clear();
        arrowHead << line().p1() << arrowP1 << arrowP2 <<arrowP3<<arrowP4;
        painter->drawLine(line());
       // painter->drawPolygon(arrowHead);
        if (isSelected()) {
            painter->setPen(QPen(myColor, 1, Qt::DashLine));
        QLineF myLine = line();
        myLine.translate(0, 4.0);
        painter->drawLine(myLine);
        myLine.translate(0,-8.0);
        painter->drawLine(myLine);
    }

    QPolygonF myPolygon;
    myPolygon << QPointF(line().p1().x()-20, line().p1().y())
              << QPointF(line().p1().x()-10,line().p1().y()+10)
              << QPointF(line().p1().x(),line().p1().y())
              << QPointF(line().p1().x()-10, line().p1().y()-10);

    painter->drawPolygon(myPolygon);
}
