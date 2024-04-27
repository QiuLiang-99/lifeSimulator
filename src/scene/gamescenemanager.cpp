#include "gamescenemanager.h"

gameSceneManager::gameSceneManager(QObject* parent) : QObject(parent) {
  mainWindow = new MainWindow;
  mainWindow->show();
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
  if (mainWindow->currentWidget() == target) {
    qDebug() << "same scene!";
    return;
  }
  mainWindow->addWidget(target);
  mainWindow->setCurrentWidget(target);
}
