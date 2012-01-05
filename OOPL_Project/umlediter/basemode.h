#ifndef BASEMODE_H
#define BASEMODE_H
#include <QMainWindow>
#include <QPair>
#include <basemode.h>
#include <QtGui>
#include <node.h>


class basemode
{
public:
    basemode();
    ~basemode();
    //virtual void setmode();
    virtual void mousepress(QGraphicsSceneMouseEvent *event);
    virtual void mouserelease(QGraphicsSceneMouseEvent *event);
    //virtual mousepress(QGraphicsSceneEvent *event);
    int i;



};

#endif // BASEMODE_H
