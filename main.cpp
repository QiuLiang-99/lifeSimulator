#include "src/scene/gamescenemanager.h"
#include <QApplication>

int main(int argc, char* argv[]) {
  QApplication     a(argc, argv);
  gameSceneManager e;
  e.showScene(E_scene::start);
  e.showScene(E_scene::start);
  e.showScene(E_scene::start);
  e.showScene(E_scene::start);
  return a.exec();
}
