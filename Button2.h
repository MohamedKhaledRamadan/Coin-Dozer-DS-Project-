#ifndef BUTTON2_H
#define BUTTON2_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class Button2:public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    // constructors
    Button2(QString name, QGraphicsItem* parent=NULL);

    // public methods (events)
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
signals:
    void clicked();
private:
    QGraphicsTextItem* text;

};

class lable:public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    // constructors
    lable(QString name, QGraphicsItem* parent=NULL);

private:
    QGraphicsTextItem* text;
};


#endif // BUTTON2_H
