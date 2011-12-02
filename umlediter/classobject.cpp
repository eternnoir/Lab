#include <QtGui>

#include "link.h"
#include "classobject.h"

classobject::classobject()
{
    myTextColor = Qt::black;
    myOutlineColor = Qt::black;
    myBackgroundColor = Qt::white;
    myText="test";

    Nnode = new Node;
    Enode = new Node;
    Wnode = new Node;
    Snode = new Node;

    myPolygon << QPointF(-30, 60) << QPointF(30, 60)
              << QPointF(30, -30) << QPointF(-30, -30);
    qPath.addPolygon(myPolygon);
    setFlags(ItemIsMovable | ItemIsSelectable);

    //this->scene()->addItem(Nnode);
}

classobject::~classobject()
{
    //foreach (Link *link, myLinks)
    //    delete link;
}

void classobject::setText(const QString &text)
{
    prepareGeometryChange();
    myText = text;
    update();
}

QString classobject::text() const
{
    return myText;
}

void classobject::setTextColor(const QColor &color)
{
    myTextColor = color;
    update();
}

QColor classobject::textColor() const
{
    return myTextColor;
}

void classobject::setOutlineColor(const QColor &color)
{
    myOutlineColor = color;
    update();
}

QColor classobject::outlineColor() const
{
    return myOutlineColor;
}

void classobject::setBackgroundColor(const QColor &color)
{
    myBackgroundColor = color;
    update();
}

QColor classobject::backgroundColor() const
{
    return myBackgroundColor;
}


QRectF classobject::boundingRect() const
{
    const int Margin =0;
    return outlineRect().adjusted(-Margin, -Margin, +Margin, +Margin);
}

QPainterPath classobject::shape() const
{
    QRectF rect = outlineRect();

    QPainterPath path;
    path.addRoundRect(rect, roundness(rect.width()),
                      roundness(rect.height()));
    return path;
}

void classobject::paint(QPainter *painter,
                 const QStyleOptionGraphicsItem *option,
                 QWidget * /* widget */)
{
    QPen pen(myOutlineColor);


    painter->setPen(pen);
    painter->setBrush(myBackgroundColor);

    QRectF rect = outlineRect();
    //QPainter painter(this);
    painter->drawPolygon(myPolygon);

    painter->setPen(myTextColor);
    painter->drawText(rect, Qt::AlignCenter, myText);
    Nnode->setPos(this->pos().x(),this->pos().y()-30);
    Wnode->setPos(this->pos().x()-30,this->pos().y()+15);
    Enode->setPos(this->pos().x()+30,this->pos().y()+15);
    Snode->setPos(this->pos().x(),this->pos().y()+60);

    this->scene()->addItem(Nnode);
    this->scene()->addItem(Wnode);
    this->scene()->addItem(Enode);
    this->scene()->addItem(Snode);


    if (option->state & QStyle::State_Selected)
    {
        Nnode->show();
        Wnode->show();
        Enode->show();
        Snode->show();
    }
    else
    {
        Nnode->hide();
        Wnode->hide();
        Enode->hide();
        Snode->hide();
    }
    painter->drawLine(30,10,-30,10);
    painter->drawLine(30,40,-30,40);
}

void classobject::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    QString text = QInputDialog::getText(event->widget(),
                           tr("Edit Text"), tr("Enter new text:"),
                           QLineEdit::Normal, myText);
    if (!text.isEmpty())
        setText(text);
}

/*QVariant classobject::itemChange(GraphicsItemChange change,
                          const QVariant &value)
{
    if (change == ItemPositionHasChanged) {
        foreach (Link *link, myLinks)
            link->trackclassobjects();
    }
    return QGraphicsItem::itemChange(change, value);
}*/

QRectF classobject::outlineRect() const
{
    const int Padding = 60;
    QFontMetricsF metrics = qApp->font();
    QRectF rect = metrics.boundingRect(myText);
    rect.adjust(-Padding, -Padding, +Padding, +Padding);
    rect.translate(-rect.center());
    return rect;
}

int classobject::roundness(double size) const
{
    const int Diameter = 1;
    return 30 * Diameter / int(size);
}
void classobject::editText()
{

    QString text = QInputDialog::getText(0,
                           tr("Edit Text"), tr("Enter new text:"),
                           QLineEdit::Normal, myText);


    if (!text.isEmpty())
        setText(text);
}
