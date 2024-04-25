#include "mainwindow.h"
#include "gamestartscreen.h"
#include <qboxlayout.h>
#include <qlayout.h>
#include <qsize.h>

MainWindow::MainWindow(QWidget* parent) : QStackedWidget(parent) {
  setStyleSheet(QString::fromUtf8("border:3px solid blue")); // 标记窗口边缘
  QSize mphone(640, 960);
  resize(mphone);
  //addSence(new gameStartScreen);
  // QT禁用"最大化按钮"和"禁止调节窗口大小"
  setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);
  setFixedSize(this->width(), this->height());
}
/*void MainWindow::addSence(Scene* target) {
  addWidget(target);
}*/
