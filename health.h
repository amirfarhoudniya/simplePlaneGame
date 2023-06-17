#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>
#include <QGraphicsItem>
#include <QFont>

class Health : public QGraphicsTextItem
{
private :
    int health ;
public:
    Health(QGraphicsItem *parent = 0);
    void decrease();
};

#endif // HEALTH_H
