#include <health.h>

Health::Health(QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
    //initialise health
    health = 3 ;

    //draw the text
    setPlainText(QString("Health : ") + QString::number(health));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times" , 16 , QFont::Bold));
}

void Health::decrease()
{
    health -- ;
    //draw the text
    setPlainText(QString("Health : ") + QString::number(health));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times" , 16 , QFont::Bold));

}
