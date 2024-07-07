#include "scenemanager.h"
#include "src/scene/E_scene.h"
#include "src/scene/mainscreen/mainscreen.h"
#include "src/scene/scene.h"
#include "src/scene/startscreen/startscreen.h"
namespace gm {
Q_GLOBAL_STATIC(SceneManager, sceneManager)

SceneManager* getSceneManager() {
  return sceneManager;
}
} // namespace gm
template <typename T>

concept Subclass = std::is_base_of<Scene, T>::value;

template <Subclass T>
Scene* createSubScene() {
  static T e;
  return &e;
}
SceneManager::SceneManager(QObject* parent) : GameManager(parent) {
  mainWindow_ = new MainWindow;
  mainWindow_->show();
  SceneMap = {
      {start, createSubScene<StartScreen>},
      {gameMain, createSubScene<MainScreen>},
  };
}

Scene* SceneManager::getScene(const E_scene& target) {
  if (SceneMap.contains(target)) {
    return SceneMap.value(target)();
  }
  return nullptr;
}

void SceneManager::showScene(const E_scene& target) {
  Scene* e = getScene(target);
  // connect(e, &Scene::switcheScene, this,
  // &gameSceneManager::showScene,Qt::UniqueConnection); // 绑定信号，切换scene
  //  Qt::UniqueConnection防止重复连接信号槽
  switchScene(e);
}

void SceneManager::switchScene(Scene* target) {
  if (mainWindow_->currentWidget() == target) {
    qDebug() << "same scene!";
    return;
  }
  mainWindow_->addWidget(target);
  mainWindow_->setCurrentWidget(target);
}
