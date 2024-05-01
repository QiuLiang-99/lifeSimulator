#ifndef GAMEMAINSCREEN_H
#define GAMEMAINSCREEN_H

#include "scene.h"
#include <qgridlayout.h>

class GameMainScreen : public Scene, public Singleton<GameMainScreen> {
    Q_OBJECT

  public:
    explicit GameMainScreen(QWidget* parent = nullptr);

  private:
    QGridLayout* layout;
  signals:
};

#endif // GAMEMAINSCREEN_H
