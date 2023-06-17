#include <enemy.h>
#include <game.h>

extern Game *game;

Enemy::Enemy()
{
    //draw QGraphics
    //   setRect(0,0,100,100);
    setPixmap(QPixmap(":/images/enemy.png"));

    setTransformOriginPoint(50,50);
    setRotation(180);

    //set random position
    int random_number = rand() % 700 ;
    setPos(random_number , 0);

    //connect
    QTimer *timer = new QTimer();
    connect(timer , SIGNAL(timeout()) ,this , SLOT(move()) );

    timer->start(50);
}

void Enemy::move()
{
    //move enemy  down
    setPos(x() , y() + 5 );

    //delete enemies if they are out of view , to save memory
    if (pos().y() > 600) {
        game->health->decrease();
        scene()->removeItem(this);
        delete this;
    }
}
