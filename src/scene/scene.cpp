#include "scene.h"

Scene::Scene(QWidget* parent) : QWidget(parent) {
  QSize mphone(640, 960);
  resize(mphone);
  setStyleSheet(QString::fromUtf8("border:3px solid blue")); // 标记窗口边缘
  qDebug() << "new scene created";
}
