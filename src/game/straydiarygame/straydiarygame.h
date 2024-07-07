#ifndef STRAYDIARYGAME_H
#define STRAYDIARYGAME_H

#include "../game.h"

class StraydiaryGame : public Game {
    Q_OBJECT

  public:
    explicit StraydiaryGame(QObject* parent = nullptr);

  private:
    int distance;
};

#endif // STRAYDIARYGAME_H