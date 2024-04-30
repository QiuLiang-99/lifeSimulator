#ifndef GAMESTARTSCREEN_H
#define GAMESTARTSCREEN_H

#include "scene.h"
class gameStartScreen : public Scene, public Singleton<gameStartScreen> {
    Q_OBJECT

  public:
    explicit gameStartScreen(QWidget* parent = nullptr);

  private:
    QGridLayout* mLayout;
};

#endif // GAMESTARTSCREEN_H
