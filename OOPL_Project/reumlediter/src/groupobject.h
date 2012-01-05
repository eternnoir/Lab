#ifndef GROUPOBJECT_H
#define GROUPOBJECT_H
#include <baseobjcet.h>
#include <QList>

class groupobject : public baseobjcet
{
public:
    groupobject(QList<QGraphicsItem *> list);
    ~groupobject();
    int size();
private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    QList<QGraphicsItem *> glist;
    int isselect;
};

#endif // GROUPOBJECT_H
