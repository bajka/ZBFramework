#include "enemy.h"
#include <cstdlib>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QList>
#include <typeinfo>


#include <QDebug>
#include "SpaceShooter/player/player.h"


Enemy::Enemy(QPixmap* texture,QObject* parent):QObject(parent),frame(3),tick(0),mSprite(texture)
{




    width=mSprite->width();
    fWidth=width/frame;
    setPixmap(mSprite->copy(0,0,fWidth,mSprite->height()));
    QTimer* timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    QTimer* animTimer=new QTimer(this);
    connect(animTimer,SIGNAL(timeout()),this,SLOT(anim()));
    timer->start(10);
    animTimer->start(100);

    mSound=new QSound(":/sfx/res/boom.wav");



}

Enemy::~Enemy()
{
    qDebug()<<"enemy destroyed";
}


void Enemy::move()
{
    setPos(x(),y()+1);


    if(pos().y()>600){

        scene()->removeItem(this);
        deleteLater();
    }
    QList<QGraphicsItem*> mcollidingItems=collidingItems();
    for(auto obj:mcollidingItems)
    {
        if(typeid(*obj)==typeid(Player))
        {

            mSound->play();
            Player* player=dynamic_cast<Player*>(obj);
            player->hit();
            scene()->removeItem(this);

            delete this;
            return;
        }
    }
}

void Enemy::anim()
{
    int temp=tick%frame;
    setPixmap(mSprite->copy(0+fWidth*temp,0,fWidth,mSprite->height()));
    tick++;
}

void Enemy::hit(int dmg)
{

}

void Enemy::attack()
{

}
