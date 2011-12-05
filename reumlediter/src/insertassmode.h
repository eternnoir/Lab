#ifndef insertassmode_H
#define insertassmode_H
#include <QMainWindow>
#include <QPair>
#include <basemode.h>
#include <QtGui>
#include <diagramscene.h>
#include <classobject.h>
#include <baseobjcet.h>
#include <QList>
#include <node.h>
class diagramscene;

class QGraphicsScene;
class QGraphicsSceneMouseEvent;
class insertassmode : public basemode
{
public:
    insertassmode(diagramscene *pscene);
    void mousepress(QGraphicsSceneMouseEvent *event);
    void mouserelease(QGraphicsSceneMouseEvent *event);

private:
    typedef QPair<baseobjcet *, baseobjcet *> objectPair;
    diagramscene *scene;
    QGraphicsLineItem *line;
   // objectPair selectedobject() const;
    Node *first ;
    Node *second;
    int select;
};

#endif // insertassmode_H
