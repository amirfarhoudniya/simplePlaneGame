#include <score.h>


Score::Score(QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
    //initialise score to zero
    score = 0 ;

    //draw the text
    setPlainText(QString("Score : ") + QString::number(score));

    setDefaultTextColor(Qt::blue);
    setFont(QFont("times" , 16 , QFont::Bold));



}

void Score::increase()
{
    score ++ ;
    //draw the text
    setPlainText(QString("Score : ") + QString::number(score));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times" , 16 , QFont::Bold));
}

