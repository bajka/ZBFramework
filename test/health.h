#ifndef HEALTH_H
#define HEALTH_H
#include <QGraphicsTextItem>


class Health : public QGraphicsTextItem
{
public:
    Health();
    int getHealth();
public slots:
     void decrease(int h);
private:
    int health;
    QWidget* widget;
};

#endif // HEALTH_H
