#include "gamestartscreen.h"
#include "src/scene/scene.h"

gameStartScreen::gameStartScreen(QWidget* parent) : Scene(parent) {
  QGridLayout* Layout = new QGridLayout(this);
  Layout->addWidget(new QLabel("人生模拟器"), 0, 1);
}
