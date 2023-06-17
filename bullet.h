#ifndef BULLET_H
#define BULLET_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QTimer>
#include <QList>
#include <enemy.h>
#include <score.h>
#include <health.h>
#include <game.h>

class Bullet : public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Bullet();

public slots :
    void move();

};

#endif // BULLET_H
