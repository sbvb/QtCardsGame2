#include "Health.h"
#include <QFont>

Health::Health(QGraphicsItem *parent): QGraphicsTextItem(parent){
    // initialize the health to 5
    health = 5;

    // draw the text
    setPlainText(QString("Health: ") + QString::number(health)); // Health: 5
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));
}

void Health::decrease(){
    health--;
    setPlainText(QString("Health: ") + QString::number(health)); // Health: 4

}




int Health::getHealth(){
    return health;
}
