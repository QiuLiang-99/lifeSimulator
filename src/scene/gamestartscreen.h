#ifndef GAMESTARTSCREEN_H
#define GAMESTARTSCREEN_H

#include "scene.h"

class gameStartScreen : public Scene {
    Q_OBJECT

  public:
    explicit gameStartScreen(QWidget* parent = nullptr);
};

#endif // GAMESTARTSCREEN_H
