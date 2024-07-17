#include "status.h"
#include <qgridlayout.h>
#include <qlabel.h>

statusUI::statusUI(QWidget* parent) : QWidget(parent) {
  // setGeometry(parent->geometry());
  setFixedSize(parent->size());
  qDebug() << parent->geometry();
  qDebug() << parent->size();
  setWindowFlags(Qt::WindowStaysOnTopHint);
  setAttribute(Qt::WA_TranslucentBackground);
  setStyleSheet("background-color: rgba(255, 0, 0, 1);");
  QGridLayout* layout = new QGridLayout(this);
  setLayout(layout);
  QLabel* label = new QLabel("这是一个测试窗口", this);
  layout->addWidget(label, 0, 0);
  layout->addWidget(label, 0, 1);
}
// 点击此窗口自动销毁这个窗口
void statusUI::mouseReleaseEvent(QMouseEvent* event) {
  qDebug() << "点击了窗口";
  this->hide();
}