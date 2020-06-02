#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>

class Game: public QGraphicsView{
    Q_OBJECT
public:
    // constructors
    Game(QWidget* parent=NULL);

    // public methods
    void displayMainMenu();

    // public attributes
    QGraphicsScene* scene;
    QString whosTurn;
public slots:
    void start();
    void Remove1();
    void Remove2();
};


#endif // GAME_H
