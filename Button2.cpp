#include <Button2.h>
#include <QPainter>
#include <QBrush>
#include <QGraphicsTextItem>

Button2::Button2(QString name, QGraphicsItem *parent)
{
    // draw the rect
       setRect(0,0,100,30);
       QBrush brush;
       brush.setStyle(Qt::SolidPattern);
       brush.setColor(Qt::darkCyan);
       setBrush(brush);

       // draw the text
       text = new QGraphicsTextItem(name,this);
       int xPos = rect().width()/2 - text->boundingRect().width()/2;
       int yPos = rect().height()/2 - text->boundingRect().height()/2;
       text->setPos(xPos,yPos);

       // allow responding to hover events
       setAcceptHoverEvents(true);

}

void Button2::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    emit clicked();
}

void Button2::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::cyan);
    setBrush(brush);
}

void Button2::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    // change color to dark cyan
     QBrush brush;
     brush.setStyle(Qt::SolidPattern);
     brush.setColor(Qt::darkCyan);
     setBrush(brush);
}
