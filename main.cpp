#include "src/scene/gamescenemanager.h"
#include "src/scene/mainwindow.h"
#include <QApplication>

int main(int argc, char* argv[]) {
  QApplication     a(argc, argv);
  gameSceneManager e;

  return a.exec();
}
