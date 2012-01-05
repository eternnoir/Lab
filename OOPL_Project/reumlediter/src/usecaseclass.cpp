#include <QtGui>

#include "link.h"
#include "usecaseclass.h"

usecaseclass::usecaseclass()
{
    myTextColor = Qt::darkGreen;
    myOutlineColor = Qt::black;
    myBackgroundColor = Qt::white;
    myText="test";

    Nnode = new Node;
    Enode = new Node;
    Wnode = new Node;
    Snode = new Node;

    QRectF rectangle(10.0, 20.0, 30.0, 30.0);
    qPath.addPolygon(rectangle);
    setFlags(ItemIsMovable | ItemIsSelectable);

    //this->scene()->addItem(Nnode);
}

usecaseclass::~usecaseclass()
{
    //foreach (Link *link, myLinks)
    //    delete link;
}

void usecaseclass::setText(const QString &text)
{
    prepareGeometryChange();
    myText = text;
    update();
}

QString usecaseclass::text() const
{
    return myText;
}

void usecaseclass::setTextColor(const QColor &color)
{
    myTextColor = color;
    update();
}

QColor usecaseclass::textColor() const
{
    return myTextColor;
}

void usecaseclass::setOutlineColor(const QColor &color)
{
    myOutlineColor = color;
    update();
}

QColor usecaseclass::outlineColor() const
{
    return myOutlineColor;
}

void usecaseclass::setBackgroundColor(const QColor &color)
{
    myBackgroundColor = color;
    update();
}

QColor usecaseclass::backgroundColor() const
{
    return myBackgroundColor;
}


QRectF usecaseclass::boundingRect() const
{
    const int Margin = 1;
    return outlineRect().adjusted(-Margin, -Margin, +Margin, +Margin);
}

QPainterPath usecaseclass::shape() const
{
    QRectF rect = outlineRect();

    QPainterPath path;
    path.addRoundRect(rect, roundness(rect.width()),
                      roundness(rect.height()));
    return path;
}

void usecaseclass::paint(QPainter *painter,
                 const QStyleOptionGraphicsItem *option,
                 QWidget * /* widget */)
{
    QPen pen(myOutlineColor);


    painter->setPen(pen);
    painter->setBrush(myBackgroundColor);

    QRectF rect = outlineRect();
    //QPainter painter(this);
    painter->drawEllipse(-40,-30,80,60);

    painter->setPen(myTextColor);
    painter->drawText(rect, Qt::AlignCenter, myText);
    Nnode->setPos(this->pos().x(),this->pos().y()+30);
    Wnode->setPos(this->pos().x()-40,this->pos().y());
    Enode->setPos(this->pos().x()+40,this->pos().y());
    Snode->setPos(this->pos().x(),this->pos().y()-30);

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
}

void usecaseclass::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    QString text = QInputDialog::getText(event->widget(),
                           tr("Edit Text"), tr("Enter new text:"),
                           QLineEdit::Normal, myText);
    if (!text.isEmpty())
        setText(text);
}

/*QVariant usecaseclass::itemChange(GraphicsItemChange change,
                          const QVariant &value)
{
    if (change == ItemPositionHasChanged) {
        foreach (Link *link, myLinks)
            link->trackusecaseclasss();
    }
    return QGraphicsItem::itemChange(change, value);
}*/

QRectF usecaseclass::outlineRect() const
{
    const int Padding = 60;
    QFontMetricsF metrics = qApp->font();
    QRectF rect = metrics.boundingRect(myText);
    rect.adjust(-Padding, -Padding, +Padding, +Padding);
    rect.translate(-rect.center());
    return rect;
}

int usecaseclass::roundness(double size) const
{
    const int Diameter = 3;
    return 30 * Diameter / int(size);
}

void usecaseclass::editText()
{

    QString text = QInputDialog::getText(0,
                           tr("Edit Text"), tr("Enter new text:"),
                           QLineEdit::Normal, myText);


    if (!text.isEmpty())
        setText(text);
}

