#ifndef NODE_H
#define NODE_H

#include <QApplication>
#include <QColor>
#include <QGraphicsItem>
#include <QSet>
#include <link.h>
#include <QVector>
#include <baseobjcet.h>


class Node : public QGraphicsItem
{
     Q_DECLARE_TR_FUNCTIONS(Node)
public:
    Node();
    ~Node();
    QPolygonF polygon() const
        { return myPolygon; }

    QRectF boundingRect() const;
    void addLink(Link *link);
    void removeLink(Link *link);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


private:
    QSet<Link *> myLinks;
    QPolygonF myPolygon;
    QPainterPath  qPath;
    QBrush        qBrush;


};

#endif // NODE_H
