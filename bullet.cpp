#include "bullet.h"


extern Game *game;

Bullet::Bullet()
{
    //draw QGraphics
    setPixmap(QPixmap(":/images/fireball.png").scaled(50,50));

    //connect
    QTimer *timer = new QTimer();
    connect(timer , SIGNAL(timeout()) ,this , SLOT(move()) );

    timer->start(50);
}

void Bullet::move()
{
    //if bullet collides with enemy , destroy both
    QList<QGraphicsItem *> colliding_item = collidingItems();
    for (int i = 0 , n = colliding_item.size() ; i < n ; i++) {
        if(typeid(*(colliding_item[i])) == typeid(Enemy)){
            //increase score
            game->score->increase();
            //remove them both
            scene()-> removeItem(colliding_item[i]);
            scene()-> removeItem(this);
            //delete them both from memory
            delete colliding_item[i] ;
            delete this ;
            return ;
        }
    }

    //move bullet up
    setPos(x() , y() - 10 );

    //delete bullets if they are out of view , to save memory
    if (pos().y() + pos().manhattanLength() < 0) {
        game->score->increase();
        scene()->removeItem(this);
        delete this;
    }
}

