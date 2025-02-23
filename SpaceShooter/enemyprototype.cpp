#include "sincrasher.h"
#include "SpaceShooter/enemyprototype.h"
#include "core/spritemanager.h"
#include <QDebug>

EnemyPrototype::EnemyPrototype(QObject *parent) : APrototype(parent)
{
    SpriteManager* texManager=SpriteManager::getInstance();
    mSprite =texManager->loadSprite("res/enemy3.png");
}

EnemyPrototype::~EnemyPrototype()
{
    mSprite.reset();
    SpriteManager::getInstance()->deleteTexture("res/enemy3.png");
}

Enemy *EnemyPrototype::clone()
{
    qDebug()<<"clone enemy a";
    QPixmap* pix=mSprite.get();
    Enemy * enemy = new SinCrasher(pix,parent());
    connect(enemy, SIGNAL(enemyKilled()), this, SLOT(getPoint()));
    return enemy;

}

Enemy2 *EnemyPrototype::clone2()
{
    qDebug()<<"clone enemy2 a";
    QPixmap* pix=mSprite.get();

    return new Enemy2(pix,parent());

}

Enemy3 *EnemyPrototype::clone3()
{
    qDebug()<<"clone enemy3 a";
    QPixmap* pix=mSprite.get();

    return new Enemy3(pix,parent());

}
