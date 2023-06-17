#include "game.h"

Game::Game(QWidget *parent )
{
    //create a scene
    scene = new QGraphicsScene();
    scene->setBackgroundBrush(QBrush(QImage(":/images/ground.jpg")));

    //create player and put into scene
    player = new Player();

    //add the item to the scene
    scene->addItem(player);

    //add a view
    view = new QGraphicsView(scene);
    //view->setScene(scene);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //make player focusable
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    view->show();
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);
    player->setPos(view->width() / 2 - 80 , view->height() / 2 + 170);

    //make & show Score
    score = new Score();
    scene->addItem(score);

    //make & show health
    health = new Health();
    health->setPos(health->x(), health->y() + 20);
    scene->addItem(health);

    //spawn enemies
    timer = new QTimer();
    QObject::connect(timer , SIGNAL(timeout()) ,player,SLOT(spawn()) );
    timer->start(2000);

    //play background music
    //QMediaPlayer *music = new QMediaPlayer();
    //music->setMedia(QUrl("qrc:/sounds/music.mp3"));
    //music->play();
}




