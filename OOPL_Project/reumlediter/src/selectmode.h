#ifndef SELECTMODE_H
#define SELECTMODE_H
#include <QMainWindow>
#include <QPair>
#include <basemode.h>
#include <QtGui>
#include <diagramscene.h>
class diagramscene;

class QGraphicsScene;
class QGraphicsSceneMouseEvent;


class selectmode : public basemode
{
public:
    selectmode(diagramscene *pscene);
    void mousepress(QGraphicsSceneMouseEvent *event);

private:
    diagramscene *scene;

};

#endif // SELECTMODE_H
