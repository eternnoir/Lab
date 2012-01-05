#ifndef usecaseclass_H
#define usecaseclass_H

#include <QApplication>
#include <QColor>
#include <QGraphicsItem>
#include <QSet>
#include <node.h>
#include <QGraphicsScene>
#include <baseobjcet.h>

class Link;
class Node;

class usecaseclass : public baseobjcet
{
    Q_DECLARE_TR_FUNCTIONS(usecaseclass)

public:
    usecaseclass();
    ~usecaseclass();

    void setText(const QString &text);
    QString text() const;
    void setTextColor(const QColor &color);
    QColor textColor() const;
    void setOutlineColor(const QColor &color);
    QColor outlineColor() const;
    void setBackgroundColor(const QColor &color);
    QColor backgroundColor() const;
    void editText();

    QRectF boundingRect() const;
    QRectF outlineRect() const;
    QPainterPath shape() const;
    void paint(QPainter *painter,
               const QStyleOptionGraphicsItem *option, QWidget *widget);


protected:
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);
    //QVariant itemChange(GraphicsItemChange change,
    //                    const QVariant &value);

private:
    //QRectF outlineRect() const;
    int roundness(double size) const;


    QString myText;
    QColor myTextColor;
    QColor myBackgroundColor;
    QColor myOutlineColor;
    QPainterPath  qPath;
    QRectF rectangle;
};

#endif
