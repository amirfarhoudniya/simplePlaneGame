#ifndef GAME_H
#define GAME_H

#include "player.h"
#include <QWidget>
#include <QGraphicsTextItem>
#include <QGraphicsItem>
#include <QString>
#include <QFont>
#include <QImage>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QObject>
#include <QTimer>
#include <enemy.h>
#include <score.h>
#include <health.h>

//#include <QMediaPlayer>

class Game : public QGraphicsView
{

public:
    Game(QWidget * parent=0);
    QGraphicsScene * scene ;
    Score *score ;
    Health *health ;
    QTimer *timer ;
    QGraphicsView *view;
    Player *player ;
};
#endif // GAME_H
