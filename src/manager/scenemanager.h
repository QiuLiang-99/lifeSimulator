#ifndef __SCENEMANAGER_H__
#define __SCENEMANAGER_H__

#include "src/gamemanager.h"
#include "src/scene/E_scene.h"
#include "src/scene/mainwindow.h"
#include <qtmetamacros.h>

class Scene;
class SceneManager : public GameManager {
    Q_OBJECT

  public:
    explicit SceneManager(QObject* parent = nullptr);

  public:
    inline MainWindow* mainWindow() const { return Window; };

  public slots:
    void showScene(E_scene);
    void switchScene(Scene*);
  signals:

  protected:
    // void customEvent(QEvent* event);
    //  bool eventFilter(QObject *obj, QEvent *event);

  private:
    MainWindow* Window;
    // currentScene
};

#endif // __SCENEMANAGER_H__