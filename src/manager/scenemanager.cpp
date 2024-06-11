#include "scenemanager.h"
#include "src/scene/mainscreen.h"
#include "src/scene/scene.h"
#include "src/scene/startscreen.h"

SceneManager::SceneManager(QObject* parent) : GameManager(parent) {
  Window = new MainWindow;
  Window->show();
}

void SceneManager::showScene(E_scene target) {
  Scene* e = nullptr;
  switch (target) {
  case start:
    // e = &gameStartScreen::GetInstance();
    qDebug() << "fuck";
    break;
  case gameMain:
    // e = &GameMainScreen::GetInstance();
    qDebug() << "fuck";
    break;
  default:
    qDebug() << "scene type wrong";
    return;
  }
  // connect(e, &Scene::switcheScene, this,
  // &gameSceneManager::showScene,Qt::UniqueConnection); // 绑定信号，切换scene
  //  Qt::UniqueConnection防止重复连接信号槽
  switchScene(e);
}

void SceneManager::switchScene(Scene* target) {
  if (Window->currentWidget() == target) {
    qDebug() << "same scene!";
    return;
  }
  Window->addWidget(target);
  Window->setCurrentWidget(target);
}
