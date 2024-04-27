#include "src/msgpasser.h"
#include "src/scene/gamescenemanager.h"
#include "src/scene/scene.h"
#include <QApplication> //todo 考虑继承重写app，通过最高实例来进行通讯
#include <qobject.h>

int main(int argc, char* argv[]) {
  QApplication a(argc, argv);

  gameSceneManager e;
  // Scene::sceneMessenger->target = &e;
  Scene::sceneMessenger->connect(&e);
  e.showScene(E_scene::start);
  QWidgetList list = QApplication::allWidgets();
  qDebug() << "窗口个数" << list.count();
  return a.exec();
}
