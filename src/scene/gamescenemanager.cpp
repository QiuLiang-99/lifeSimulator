#include "gamescenemanager.h"

gameSceneManager::gameSceneManager(QObject* parent) : QObject(parent) {
  mainWindow = new MainWindow;
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

void gameSceneManager::switchScene(Scene*) {
}