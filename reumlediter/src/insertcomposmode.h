#ifndef insertcomposmode_H
#define insertcomposmode_H
#include <QMainWindow>
#include <QPair>
#include <basemode.h>
#include <QtGui>
#include <diagramscene.h>
#include <classobject.h>
#include <baseobjcet.h>
#include <QList>
class diagramscene;

class QGraphicsScene;
class QGraphicsSceneMouseEvent;
class insertcomposmode : public basemode
{
public:
    insertcomposmode(diagramscene *pscene);
    void mousepress(QGraphicsSceneMouseEvent *event);
    void mouserelease(QGraphicsSceneMouseEvent *event);

private:
    typedef QPair<baseobjcet *, baseobjcet *> objectPair;
    diagramscene *scene;
    int select;
    QGraphicsLineItem *line;
    objectPair selectedobject() const;
    Node *first ;
    Node *second;
};

#endif // insertcomposmode_H
