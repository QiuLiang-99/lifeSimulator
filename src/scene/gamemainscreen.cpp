#include "gamemainscreen.h"
#include <QProgressBar>
#include <qframe.h>
#include <qlabel.h>
#include <qpushbutton.h>

GameMainScreen::GameMainScreen(QWidget* parent) : Scene(parent) {
  layout = new QGridLayout;
  setLayout(layout);
  QPushButton* forwardBtn = new QPushButton("前进");
  QFrame*      btnArea    = new QFrame;
  layout->addWidget(btnArea);
  QGridLayout* btnLayout = new QGridLayout;
  btnArea->setLayout(btnLayout);
  btnLayout->addWidget(forwardBtn, 2, 2);
  QLabel* ATTlabel = new QLabel("攻击力：？");
  btnLayout->addWidget(ATTlabel, 1, 1);
  QProgressBar* hpBar = new QProgressBar;
  btnLayout->addWidget(hpBar, 0, 1);
  QString hpText = QString("生命值%1/%2(%p%)").arg(50).arg(100);
  hpBar->setFormat(hpText);
  hpBar->setMinimum(0);
  hpBar->setMaximum(100);
  hpBar->setValue(50);
}
