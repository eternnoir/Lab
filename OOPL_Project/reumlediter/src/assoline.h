#ifndef ASSOLINE_H
#define ASSOLINE_H

#include <QGraphicsLineItem>
#include <baseobjcet.h>
#include <node.h>

class Node;

class assoline : public QGraphicsLineItem
{
public:
    assoline(Node *fromNode, Node *toNode);
    ~assoline();



    void setColor(const QColor &color);
    QColor color() const;

    void trackNodes();
protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
private:
    Node *myFromNode;
    Node *myToNode;
};

#endif

