#include "insertusecasemode.h"
#include <classobject.h>
#include <diagramscene.h>

insertusecasemode::insertusecasemode(diagramscene *pscene)
{
    scene=pscene;
    i=1;
}
void insertusecasemode::mousepress(QGraphicsSceneMouseEvent *event)
{
    usecaseclass *o = new usecaseclass;
    o->setPos(event->scenePos());
    scene->addItem(o);
}
