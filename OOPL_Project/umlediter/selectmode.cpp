#include "selectmode.h"

selectmode::selectmode(diagramscene *pscene)
{
    scene=pscene;
    i=0;
}

void selectmode::mousepress(QGraphicsSceneMouseEvent *event)
{
    if (event->button() != Qt::LeftButton)
        return;

}
