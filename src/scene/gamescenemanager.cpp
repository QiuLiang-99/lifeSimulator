#include "gamescenemanager.h"
#include "src/scene/gamemainscreen.h"
#include "src/scene/gamestartscreen.h"
#include "src/scene/scene.h"

gameSceneManager::gameSceneManager(QObject* parent) : GameManager(parent) {
  Window = new MainWindow;
  Window->show();
}

void gameSceneManager::showScene(E_scene target) {
  Scene* e = nullptr;
  switch (target) {
  case start:
    e = &gameStartScreen::GetInstance();
    break;
  case gameMain:
    e = &GameMainScreen::GetInstance();
    break;
  default:
    qDebug() << "scene type wrong";
    return;
  }
  connect(e, &Scene::switcheScene, this, &gameSceneManager::showScene,
          Qt::UniqueConnection); // 绑定信号，切换scene
                                 // Qt::UniqueConnection防止重复连接信号槽
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
