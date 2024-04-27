#ifndef GAMESTARTSCREEN_H
#define GAMESTARTSCREEN_H

#include "scene.h"
// todo 继承而不是派生
class gameStartScreen : public Scene {
    Q_OBJECT

  public:
    explicit gameStartScreen(QWidget* parent = nullptr);

  private:
    QGridLayout* mLayout;
};

#endif // GAMESTARTSCREEN_H
