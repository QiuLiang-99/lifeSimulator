#include "craftscreen.h"
#include <qlabel.h>

CraftScreen::CraftScreen(QWidget* parent) : Scene(parent) {
  layout = new QVBoxLayout;
  setLayout(layout);
  scrollArea = new QScrollArea;
  layout->addWidget(scrollArea);
  scrollAreaWidgetContents = new QWidget;
  scrollArea->setWidget(scrollAreaWidgetContents);
  scrollArealayout = new QHBoxLayout;
  scrollAreaWidgetContents->setLayout(scrollArealayout);
  // scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);  //
  // 启用水平滚动条
  scrollArea->setVerticalScrollBarPolicy(
      Qt::ScrollBarAlwaysOff); // 禁用垂直滚动条
}

void CraftScreen::addCraft(Item* item) {
  CraftItemWidget* e = new CraftItemWidget(item, this);
  // todo 在scrollArealayout再创建新的widget包CraftItemWidget
  scrollArealayout->addWidget(e);
}
CraftItemWidget::CraftItemWidget(QWidget* parent) : QWidget(parent) {
  setFixedSize(100, 100);
  layout = new QVBoxLayout;
}

CraftItemWidget::CraftItemWidget(Item* item, QWidget* parent) :
    CraftItemWidget(parent) {
  data          = item;
  QLabel* label = new QLabel(data->name(), this);
}

void CraftItemWidget::setItem(Item* item) {
  data = item;
}

Item* CraftItemWidget::getItem() {
  return data;
}
