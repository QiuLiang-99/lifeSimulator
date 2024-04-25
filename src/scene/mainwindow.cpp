#include "mainwindow.h"
#include "gamestartscreen.h"
#include <qsize.h>

MainWindow::MainWindow(QWidget* parent) : QWidget(parent) {
  QSize mphone(640, 960);
  resize(mphone);
  mainWindow = new QStackedWidget(this);
  addSence(new gameStartScreen);
}
void MainWindow::addSence(Scene* target) {
  mainWindow->addWidget(target);
}
