#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QTimer>
#include <stdlib.h>
#include <score.h>


class Enemy : public QObject ,public  QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Enemy() ;

public slots :
    void move ();

};

#endif // ENEMY_H
