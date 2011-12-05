#ifndef insertgenmode_H
#define insertgenmode_H
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
class insertgenmode : public basemode
{
public:
    insertgenmode(diagramscene *pscene);
    void mousepress(QGraphicsSceneMouseEvent *event);
    void mouserelease(QGraphicsSceneMouseEvent *event);

private:
    diagramscene *scene;
    int select;
    QGraphicsLineItem *line;
    Node *first ;
    Node *second;
};

#endif // insertgenmode_H
