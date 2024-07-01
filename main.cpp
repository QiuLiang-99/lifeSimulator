#include "manager/scenemanager/scenemanager.h"

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

  gm::sceneManager->showScene(E_scene::start);

  QWidgetList list = QApplication::allWidgets();
  qDebug() << "窗口个数" << list.count();
  return a.exec();
}