#include "baseobjcet.h"

baseobjcet::baseobjcet()
{
}
QRectF baseobjcet::boundingRect()const
{
    QRectF r2(QPoint(10, 20), QSize(1, 1));;
    return r2;
}
void baseobjcet::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

}
void baseobjcet::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{

}

void baseobjcet::editText()
{

}
