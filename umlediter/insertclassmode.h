#ifndef INSERTCLASSMODE_H
#define INSERTCLASSMODE_H
#include <QMainWindow>
#include <QPair>
#include <basemode.h>
#include <QtGui>
#include <diagramscene.h>
class diagramscene;

class QGraphicsScene;
class QGraphicsSceneMouseEvent;
class InsertClassMode : public basemode
{
public:
    InsertClassMode(diagramscene *pscene);
    void mousepress(QGraphicsSceneMouseEvent *event);

private:
    diagramscene *scene;

};

#endif // INSERTCLASSMODE_H
