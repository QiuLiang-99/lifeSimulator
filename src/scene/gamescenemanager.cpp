#include "gamescenemanager.h"
#include "src/scene/gamestartscreen.h"
#include "src/scene/scene.h"

gameSceneManager::gameSceneManager(QObject* parent) : GameManager(parent) {
  Window = new MainWindow;
  Window->show();
}

void gameSceneManager::showScene(E_scene target) {
  Scene* e = nullptr;
  switch (target) {
  case E_scene::start:
    e = &gameStartScreen::GetInstance();
    break;
  default:
    qDebug() << "scene type wrong";
    return;
  }
  connect(e, &Scene::switcheScene, this,
          &gameSceneManager::showScene); // 绑定信号，切换scene
  switchScene(e);
}

void gameSceneManager::switchScene(Scene* target) {
  if (Window->currentWidget() == target) {
    qDebug() << "same scene!";
    return;
  }
  Window->addWidget(target);
  Window->setCurrentWidget(target);
}
