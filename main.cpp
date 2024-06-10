#include "src/scene/gamescenemanager.h"
#include <QApplication>
#include <QFile>
#include <QTableWidgetItem>
#include <qobject.h>


int main(int argc, char* argv[]) {
  QApplication a(argc, argv);

  // 加载QSS文件
  QFile file(":/style.qss");
  if (file.open(QFile::ReadOnly)) {
    QString style = file.readAll();
    a.setStyleSheet(style);
    file.close();
  } else {
    qWarning("Could not open QSS file");
  }
  gameSceneManager e;
  e.showScene(E_scene::start);
  QWidgetList list = QApplication::allWidgets();
  qDebug() << "窗口个数" << list.count();
  return a.exec();
}