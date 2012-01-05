#include "insertclassmode.h"
#include <classobject.h>
#include <diagramscene.h>

InsertClassMode::InsertClassMode(diagramscene *pscene)
{
    scene=pscene;
    i=1;
}
void InsertClassMode::mousepress(QGraphicsSceneMouseEvent *event)
{
    classobject *classo = new classobject;
    classo->setPos(event->scenePos());
    scene->addItem(classo);

}
