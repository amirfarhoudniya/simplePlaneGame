#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QGraphicsItem>
#include <QString>
#include <QFont>

class Score : public QGraphicsTextItem
{
private :
    int score ;
public:
    Score(QGraphicsItem *parent = 0);
    void increase();
};

#endif // SCORE_H
