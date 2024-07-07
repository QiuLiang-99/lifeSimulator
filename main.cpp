#include "game/straydiarygame/straydiarygame.h"
#include "scene/mainwindow.h"
#include "scene/startscreen/startscreen.h"
#include <QApplication>
#include <QFile>
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
  MainWindow  w;
  StartScreen e;
  w.show();
  QWidgetList list = QApplication::allWidgets();
  qDebug() << "窗口个数" << list.count();
  return a.exec();
}