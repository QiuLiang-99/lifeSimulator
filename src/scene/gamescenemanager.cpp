#include "gamescenemanager.h"

gameSceneManager::gameSceneManager(QObject* parent) : GameManager(parent) {
  Window = new MainWindow;
  Window->show();
}

void gameSceneManager::showScene(E_scene target) {
  Scene* e = nullptr;
  switch (target) {
  case E_scene::start:
    switchScene(getInstance<gameStartScreen>());
    break;
  default:
    qDebug() << "scene type wrong";
  }
}

void gameSceneManager::switchScene(Scene* target) {
  if (Window->currentWidget() == target) {
    qDebug() << "same scene!";
    return;
  }
  Window->addWidget(target);
  Window->setCurrentWidget(target);
}
