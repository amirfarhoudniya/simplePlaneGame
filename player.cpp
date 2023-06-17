#include <player.h>
#include <bullet.h>
#include <game.h>
#include <enemy.h>
#include <QDebug>

Player::Player(QGraphicsPixmapItem *parent)
{
    bulletSound = new QMediaPlayer();
    bulletSound->setMedia(QUrl("qrc:/sounds/shotSound.mp3"));
    setPixmap(QPixmap(":/images/player.png"));
}

void Player::keyPressEvent(QKeyEvent *event)
{

    if (event->key() == Qt::Key_A) {
        if (pos().x() > 0 ) {
            setPos( x() - 10 , y() );
        }

    }else if (event->key() == Qt::Key_D) {
        if (pos().x() + 100 < 800) {
            setPos( x() + 10 , y() );
        }


    }else if (event->key() == Qt::Key_Space) {
        //create a bullet
        Bullet *bullet = new Bullet();
        bullet->setPos(x() + 40 , y());
        scene()->addItem(bullet);

        //play bullet sound
        if(bulletSound->state() == QMediaPlayer::PlayingState){
               bulletSound->setPosition(0);
        }else if(bulletSound->state() == QMediaPlayer::StoppedState){
               bulletSound->play();
        }

    }
}

void Player::spawn()
{
    //create an enemy
    Enemy *enemy = new class Enemy();
    scene()->addItem(enemy);
}
