#include "ScrollingTextDisplay.h"

ScrollingTextDisplay::ScrollingTextDisplay(QWidget* parent) : QWidget(parent) {
  layout = new QVBoxLayout(this);
  this->setLayout(layout);
  layout->setSpacing(0);
  // layout->setMargin(0);

  timer = new QTimer(this);
  connect(timer, &QTimer::timeout, this, &ScrollingTextDisplay::scrollText);
  timer->start(100); // 每100毫秒滚动一次
}

void ScrollingTextDisplay::addLabel(QLabel* label) {
  layout->addWidget(label);
  labels.append(label);
}

void ScrollingTextDisplay::scrollText() {
  for (int i = 0; i < labels.size(); ++i) {
    QLabel* label = labels[i];
    int     newY  = label->y() - 1; // 向上移动1像素
    if (newY + label->height() < 0) {
      // 如果label完全移出了widget的上边界，则删除之
      layout->removeWidget(label);
      labels.removeAt(i);
      delete label;
      --i; // 因为删除了一个元素，所以索引要回退一步
    } else {
      label->move(label->x(), newY);
    }
  }
}