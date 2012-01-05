#include "diagramscene.h"
#include "basemode.h"
#include "insertclassmode.h"
#include "classobject.h"

diagramscene::diagramscene()
{
    mymode=new InsertClassMode(this);
}
void diagramscene::setMode(basemode *mode)
{
    mymode=mode;
}

void diagramscene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(mymode->i != 0)
    mymode->mousepress(event);
    else
    QGraphicsScene::mousePressEvent(event);
}

void diagramscene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if(mymode->i != 0)
    mymode->mouserelease(event);
    else
    QGraphicsScene::mouseReleaseEvent(event);
}
