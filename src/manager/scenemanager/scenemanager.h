#ifndef __SCENEMANAGER_H__
#define __SCENEMANAGER_H__

#include "../manager.h"
#include "scene/E_scene.h"
#include "scene/mainwindow.h"
#include <QHash>

#include "scene/scene.h"
class SceneManager : public Manager {
    Q_OBJECT

  public:
    explicit SceneManager(QObject* parent = nullptr);

  public slots:

    void showScene(const E_scene&);

  private:
    SceneWidget* getScene(const E_scene&);
    void         switchScene(SceneWidget*);
  signals:

  protected:
    // void customEvent(QEvent* event);
    //  bool eventFilter(QObject *obj, QEvent *event);

  private:
    MainWindow& mainWindow_;
    // currentScene
    using SceneFactory = std::function<SceneWidget*()>;
    QHash<E_scene, SceneFactory> SceneMap;
};
#endif // __SCENEMANAGER_H__