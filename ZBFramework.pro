#-------------------------------------------------
#
# Project created by QtCreator 2016-11-15T11:54:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets multimedia

TARGET = ZBFramework
TEMPLATE = app

SOURCES += \
    core/agamestate.cpp \
    core/aprototype.cpp \
    core/engine.cpp \
    core/gamestatemanager.cpp \
    core/graphicsitemfactory.cpp \
    core/resourcemanager.cpp \
    core/texturemanager.cpp \
    core/vector2d.cpp \
    test/bullet.cpp \
    test/bulletprototype.cpp \
    test/enemy.cpp \
    test/enemyprototype.cpp \
    test/enemyspawner.cpp \
    test/gamegui.cpp \
    test/gameover.cpp \
    test/health.cpp \
    test/inputplayer.cpp \
    test/level.cpp \
    test/mainmenu.cpp \
    test/pixmapentity.cpp \
    test/player.cpp \
    test/playerstate.cpp \
    test/playerstatemachine.cpp \
    test/score.cpp \
    main.cpp

HEADERS  += \
    core/agamestate.h \
    core/aprototype.h \
    core/engine.h \
    core/gamestatemanager.h \
    core/graphicsitemfactory.h \
    core/resourcemanager.h \
    core/texturemanager.h \
    core/vector2d.h \
    test/bullet.h \
    test/bulletprototype.h \
    test/enemy.h \
    test/enemyprototype.h \
    test/enemyspawner.h \
    test/gamegui.h \
    test/gameover.h \
    test/health.h \
    test/inputplayer.h \
    test/level.h \
    test/mainmenu.h \
    test/pixmapentity.h \
    test/player.h \
    test/playerstate.h \
    test/playerstatemachine.h \
    test/score.h

FORMS +=

DISTFILES +=

RESOURCES += \
    space.qrc
