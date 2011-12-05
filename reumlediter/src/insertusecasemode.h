#ifndef insertusecasemode_H
#define insertusecasemode_H
#include <QMainWindow>
#include <QPair>
#include <usecaseclass.h>
#include <QtGui>
#include <diagramscene.h>
class diagramscene;

class QGraphicsScene;
class QGraphicsSceneMouseEvent;
class insertusecasemode : public basemode
{
public:
    insertusecasemode(diagramscene *pscene);
    void mousepress(QGraphicsSceneMouseEvent *event);

private:
    diagramscene *scene;

};

#endif // insertusecasemode_H
