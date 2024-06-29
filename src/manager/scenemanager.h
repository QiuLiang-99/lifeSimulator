#ifndef __SCENEMANAGER_H__
#define __SCENEMANAGER_H__

#include "gamemanager.h"
#include "scene/E_scene.h"
#include "scene/mainwindow.h"
#include <QHash>

#include <qtmetamacros.h>

class Scene;
class SceneManager : public GameManager {
    Q_OBJECT

  public:
    explicit SceneManager(QObject* parent = nullptr);

  public:
    inline MainWindow* mainWindow() const { return mainWindow_; };

  public slots:

    void showScene(const E_scene&);

  private:
    Scene* getScene(const E_scene&);
    void   switchScene(Scene*);
  signals:

  protected:
    // void customEvent(QEvent* event);
    //  bool eventFilter(QObject *obj, QEvent *event);

  private:
    MainWindow* mainWindow_;
    // currentScene
    using SceneFactory = std::function<Scene*()>;
    QHash<E_scene, SceneFactory> SceneMap;
};

#endif // __SCENEMANAGER_H__