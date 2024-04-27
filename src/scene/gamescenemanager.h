#ifndef GAMESCENEMANAGER_H
#define GAMESCENEMANAGER_H

#include "gamestartscreen.h"
#include "mainwindow.h"
#include "scene.h"

#include "src/gamemanager.h"

template <typename Tscene>
Tscene* getInstance() {
  static Tscene e;
  return &e;
};
enum class E_scene {
  start
};
class gameSceneManager : public GameManager {
    Q_OBJECT

  public:
    explicit gameSceneManager(QObject* parent = nullptr);

  public:
    inline MainWindow* mainWindow() const {
      return Window;
    };

  public:
    void showScene(E_scene);
    void switchScene(Scene*);
  signals:

  protected:
    // void customEvent(QEvent* event);
    //  bool eventFilter(QObject *obj, QEvent *event);

  private:
    MainWindow* Window;
};

#endif // GAMESCENEMANAGER_H
