#ifndef GAMEINFO_H
#define GAMEINFO_H


#include "TextBox.h"
#include <QString>
#include <QStringList>
#include <QMap>
#include <QList>
#include <QFont>
#include <QFontDatabase>
#include "Container.h"
#include "Piece.h"
#include <fstream>

class GameInfo {
public:
// Constructors
    GameInfo();

// Destructors
    ~GameInfo();

// Getters
    QBrush getBrush();
    int getQuotient(int divident, int divisor);
    int getFontNum();
    int getPlayers();
    int getMaxPlayers();
    int getPieceSpriteStart();
    int getPieceAmount();
    int getPiece(int num);
    bool getPause();

// Setters
    void setPlayers(int players);
    void setMaxPlayers(int maxPlayers);
    void setupBrush(QColor color = QColor(157, 116, 86, 255));
    void setPieceSpriteStart(int pieceStart);
    void setPieceAmount(int pieceAmount);
    void setPause(bool pause);

    QPixmap setSprite(int spriteNum,
                      float scale = 1,
                      int spriteW = 64, int spriteH = 64,
                      QString path = ":/imgs/Spritesheet.png");

// Public methods
    void addFont(QString path);
    void drawTitle();
    int randNum(int low, int high);

// Public members
    QGraphicsTextItem * titleText;
    QMap<int, TextBox*> tempPlayerNames;
    QMap<int, Piece*> tempPlayerPieces;
    QMap<int, QGraphicsPixmapItem*> checkmarkMap;
    QFontDatabase * fontDb;

    QMap<int, int> playerPieces;
    QStringList playerNames = (QStringList()
        << "Player 1"
        << "Player 2"
        << "Player 3"
        << "Player 4"
        << "Player 5"
        << "Player 6"
        << "Player 7");

    bool locked[6] {false, false, false, false, false, false};
    std::vector<bool> finished;
    int playerTurn = 1;
    bool windowed = false;
    int theme = 1;
    float scale;
    std::fstream file;
    QStringList instructions = (QStringList()
        << "Press the start button in main menu"
        << "Choose the number of players"
        << "Pick a face and a name for each player and lock the selection"
        << "When everybody have lockes their selection, press start"
        << "The first player have to roll the dice by clicking on it"
        << "When the face have moved to the correct position, it is the \n"
           "next players turn to roll the dice"
        << "If pause is neccesary, press the pause button at the top right"
        << "To start the game again, press continue"
        << "Current players turn is indicated right next to the timer at \n"
           "the top right");

private:
    QBrush brush;
    int fontNum = 1;
    int players;
    int maxPlayers = 6;
    int pieceSpriteStart = 17;
    int pieceAmount = 22;
    bool pause = false;
};

#endif // GAMEINFO_H
