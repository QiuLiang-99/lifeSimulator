#include "gamestartscreen.h"
#include "src/scene/scene.h"
#include <QButtonGroup>
#include <QPushButton>
#include <qframe.h>
#include <qpushbutton.h>

gameStartScreen::gameStartScreen(QWidget* parent) : Scene(parent) {
  mLayout       = new QGridLayout(this);
  QLabel* title = new QLabel("人生模拟器", this);
  mLayout->addWidget(title, 0, 1);
  title->setAlignment(Qt::AlignCenter);
  QButtonGroup* startmenu     = new QButtonGroup(this);
  QFrame*       btnlist       = new QFrame(this);
  QGridLayout*  btnlistLayout = new QGridLayout;
  btnlist->setLayout(btnlistLayout);
  QPushButton* startbtn = new QPushButton("开始游戏", this);
  btnlistLayout->addWidget(startbtn, 0, 0);
  mLayout->addWidget(btnlist, 1, 1);
  mLayout->addWidget(new QFrame(this), 0, 0);
  mLayout->addWidget(new QFrame(this), 1, 0);
  mLayout->addWidget(new QFrame(this), 2, 1);
  mLayout->addWidget(new QFrame(this), 1, 2);
  connect(startbtn, &QPushButton::clicked, this, [] {
    Scene::sceneManageMessagePasser->target->test();
  });
}
