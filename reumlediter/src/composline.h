#ifndef composline_H
#define composline_H

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
class composline : public QGraphicsLineItem
{
public:
    composline(Node *fromNode, Node *toNode);
    ~composline();

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
