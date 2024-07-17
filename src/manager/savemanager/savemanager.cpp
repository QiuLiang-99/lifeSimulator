#include "savemanager.h"

SaveManager::SaveManager(QObject* parent) : Manager(parent) {}

void SaveManager::save() {
  qDebug() << "保存";
}

void SaveManager::load() {
  qDebug() << "加载";
}