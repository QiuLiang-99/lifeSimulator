#ifndef GAMESCENEMANAGER_H
#define GAMESCENEMANAGER_H

#include "gamestartscreen.h"
#include "mainwindow.h"
#include "scene.h"
#include <QDebug>
#include <QObject>

template <typename Tscene>
Tscene* getInstance() {
  static Tscene e;
  return &e;
};
enum class E_scene {
  start
};
class gameSceneManager : public QObject {
    Q_OBJECT

  public:
    explicit gameSceneManager(QObject* parent = nullptr);

  public:
    void showScene(E_scene);
    void switchScene(Scene*);
  signals:

  private:
    MainWindow* mainWindow;
};

#endif // GAMESCENEMANAGER_H
