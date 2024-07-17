#include "scene/mainwindow.h"
#include "scene/startscreen/startscreen.h"
#include <QApplication>
#include <QFile>
void loadQSS() {
  QFile file(
      "style.qss"); // 在Qt中，以冒号(:)开头的路径指的是资源文件（Qt Resource
                    // System），这意味着style.qss应该被添加到Qt资源文件中。检查.qrc文件确保资源被正确引用。
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
  MainWindow& w = MainWindow::getSingleton();
  StartScreen e;
  w.showWidget(&e);
  w.show();
  QWidgetList list = QApplication::allWidgets();
  qDebug() << "窗口个数" << list.count();

  return a.exec();
}