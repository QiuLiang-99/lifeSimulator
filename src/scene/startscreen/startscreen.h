#ifndef GAMESTARTSCREEN_H
#define GAMESTARTSCREEN_H

#include "../scene.h"
class StartScreen : public SceneWidget {
    Q_OBJECT

  public:
    explicit StartScreen(QWidget* parent = nullptr);

  private:
    QGridLayout* mLayout;
};

#endif // GAMESTARTSCREEN_H
