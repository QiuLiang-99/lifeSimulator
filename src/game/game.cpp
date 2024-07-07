#include "game.h"
#include "manager/scenemanager/scenemanager.h"
Game::Game(QObject* parent) : QObject(parent), sceneManager(*new SceneManager) {
  date     = QDate::currentDate();
  time     = QTime::currentTime();
  location = "Home";
}