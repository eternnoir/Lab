#ifndef LINK_H
#define LINK_H

#include <QGraphicsLineItem>
#include <QGraphicsPixmapItem>
#include <QList>

class QGraphicsPolygonItem;

class QGraphicsPolygonItem;
class QGraphicsLineItem;
class QGraphicsScene;
class QRectF;
class QGraphicsSceneMouseEvent;
class QPainterPath;
class Node;
class Link : public QGraphicsLineItem
{
public:
    Link(Node *fromNode, Node *toNode);
    ~Link();

    Node *fromNode() const;
    Node *toNode() const;
    QRectF boundingRect() const;
    QPainterPath shape() const;
    void setColor(const QColor &color);
    QColor color() const;

    void trackNodes();

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
    Node *myFromNode;
    Node  *myToNode;
    QColor myColor;
    QPolygonF arrowHead;
};

#endif
