#include "gamemanager.h"

GameManager::GameManager(QObject* parent) : QObject(parent) {
}
void GameManager::test() {
  qDebug() << "槽触发";
}
