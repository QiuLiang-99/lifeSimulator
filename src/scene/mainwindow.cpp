#include "mainwindow.h"
#include <qsize.h>
MainWindow::MainWindow(QWidget *parent) : QWidget(parent) {
  QSize mphone(640, 960);
  resize(mphone);
  mainWindow = new QStackedWidget(this);
}
void MainWindow::addSence(Scene *target) { mainWindow->addWidget(target); }
