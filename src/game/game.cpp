#include "game.h"
#include "manager/scenemanager/scenemanager.h"
Game::Game(QObject* parent) : QObject(parent) {
  date_     = QDate::currentDate();
  time_     = QTime::currentTime();
  location_ = "Home";
}