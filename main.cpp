#include "scene/E_scene.h"
#include "src/manager/scenemanager/scenemanager.h"

#include <QAction>
#include <QApplication>
#include <QFile>
#include <QTableWidgetItem>
#include <qobject.h>
void loadQSS() {
  QFile file(":/style.qss");
  if (file.open(QFile::ReadOnly)) {
    QString style = file.readAll();
    qApp->setStyleSheet(style);
    file.close();
  } else {
    qWarning("Could not open QSS file");
  }
}
int main(int argc, char* argv[]) {
  QApplication a(argc, argv);
  loadQSS();

  SceneManager::getInstance().showScene(E_scene::start);

  QWidgetList list = QApplication::allWidgets();
  qDebug() << "窗口个数" << list.count();
  return a.exec();
}