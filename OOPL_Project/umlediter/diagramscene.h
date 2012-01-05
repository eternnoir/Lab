#ifndef DIAGRAMSCENE_H
#define DIAGRAMSCENE_H
#include <QGraphicsScene>
#include "basemode.h"

class QGraphicsSceneMouseEvent;
class QMenu;
class QPointF;
class QGraphicsLineItem;
class QFont;
class QGraphicsTextItem;
class QColor;
class diagramscene: public QGraphicsScene
{
    Q_OBJECT
public:
    diagramscene();

public slots:
    void setMode(basemode *mode);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

private:
    diagramscene *scene;
    basemode *mymode;

    QAction *pasteAction;

};

#endif // DIAGRAMSCENE_H
