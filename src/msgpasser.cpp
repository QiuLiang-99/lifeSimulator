#include "msgpasser.h"
#include "src/scene/gamescenemanager.h"
MsgPasser::MsgPasser(QObject* parent) : QObject(parent) {
}

void MsgPasser::connect(GameManager* target) {
  QObject::connect(this, &MsgPasser::switcheScene,
                   static_cast<gameSceneManager*>(target),
                   &gameSceneManager::showScene);
}
