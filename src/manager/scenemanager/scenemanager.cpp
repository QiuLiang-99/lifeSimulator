#include "scenemanager.h"
#include "scene/craftscreen/craftscreen.h"
#include "scene/mainwindow.h"
#include "src/scene/E_scene.h"
#include "src/scene/mainscreen/mainscreen.h"
#include "src/scene/scene.h"
#include "src/scene/startscreen/startscreen.h"

template <typename T>
concept isScene = std::is_base_of<Scene, T>::value;

template <isScene T>
Scene* createScene() {
  static T e;
  return &e;
}

SceneManager::SceneManager(QObject* parent) :
    Manager(parent), mainWindow_(MainWindow::getSingleton()) {
  SceneMap = {
      {start, createScene<StartScreen>},
      {gameMain, createScene<MainScreen>},
      {craft, createScene<CraftScreen>},
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
  if (mainWindow_.currentWidget() == target) {
    qDebug() << "same scene!";
    return;
  }
  mainWindow_.showWidget(target);
}
