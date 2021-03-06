#-------------------------------------------------
#
# Project created by QtCreator 2016-06-11T00:40:28
#
#-------------------------------------------------

QT       += core gui

win32:RC_ICONS += SL.ico

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = snakes-ladders
TEMPLATE = app


SOURCES += main.cpp \
    Button.cpp \
    Game.cpp \
    Piece.cpp \
    Tile.cpp \
    Dice.cpp \
    Arrow.cpp \
    TextBox.cpp \
    Board.cpp \
    GameInfo.cpp \
    Container.cpp \
    Timer.cpp \
    Ladder.cpp \
    Overlay.cpp \
    Scene.cpp

HEADERS  += \
    Button.h \
    Game.h \
    Piece.h \
    Tile.h \
    Dice.h \
    Arrow.h \
    TextBox.h \
    Board.h \
    GameInfo.h \
    Container.h \
    Timer.h \
    Ladder.h \
    Overlay.h \
    Scene.h

FORMS    +=

RESOURCES += \
    res.qrc
