#ifndef GAMEMAINSCREEN_H
#define GAMEMAINSCREEN_H

#include "scene.h"

class GameMainScreen : public Scene {
    Q_OBJECT

  public:
    explicit GameMainScreen(QWidget* parent = nullptr);

  signals:
};

#endif // GAMEMAINSCREEN_H