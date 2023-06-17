#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QObject>

#include <QMediaPlayer>
class Player :public QObject ,  public QGraphicsPixmapItem{
    Q_OBJECT
public :
    Player(QGraphicsPixmapItem *parent=0);
    void keyPressEvent(QKeyEvent *event);
public slots :
    void spawn();
private :
         QMediaPlayer *bulletSound ;

};

#endif // PLAYER_H
