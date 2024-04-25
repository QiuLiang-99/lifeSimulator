#include "gamestartscreen.h"
#include "src/scene/scene.h"
#include <QButtonGroup>
#include <QPushButton>
#include <qframe.h>
#include <qpushbutton.h>

gameStartScreen::gameStartScreen(QWidget* parent) : Scene(parent) {
  mLayout       = new QGridLayout(this);
  QLabel* title = new QLabel("人生模拟器");
  mLayout->addWidget(title, 0, 1);
  title->setAlignment(Qt::AlignCenter);
  QButtonGroup* startmenu     = new QButtonGroup;
  QFrame*       btnlist       = new QFrame;
  QGridLayout*  btnlistLayout = new QGridLayout;
  btnlist->setLayout(btnlistLayout);
  QPushButton* startbtn = new QPushButton("开始游戏");
  btnlistLayout->addWidget(startbtn, 0, 0);
  mLayout->addWidget(btnlist, 1, 1);
  mLayout->addWidget(new QFrame, 0, 0);
  mLayout->addWidget(new QFrame, 1, 0);
  mLayout->addWidget(new QFrame, 2, 1);
  mLayout->addWidget(new QFrame, 1, 2);
}
