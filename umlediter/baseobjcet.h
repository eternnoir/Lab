#ifndef BASEOBJCET_H
#define BASEOBJCET_H
#include <QtGui>
#include <node.h>

class baseobjcet : public QGraphicsItem
{
public:
    baseobjcet();

    Node *Nnode;
    Node *Enode;
    Node *Wnode;
    Node *Snode;
    QRectF boundingRect()const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    virtual void editText();

protected:
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);



};

#endif // BASEOBJCET_H
