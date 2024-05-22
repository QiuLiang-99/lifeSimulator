#include "gamemainscreen.h"
#include <QProgressBar>
#include <qframe.h>
#include <qlabel.h>
#include <qpushbutton.h>

GameMainScreen::GameMainScreen(QWidget* parent) : Scene(parent) {
  layout = new QGridLayout;
  setLayout(layout);

  QFrame*      labelArea   = new QFrame;
  QGridLayout* labelLayout = new QGridLayout;

  QLabel* ATTLabel         = new QLabel("攻击力：？");
  QLabel* DEFLabel         = new QLabel("防御力：？");
  QLabel* timeLabel        = new QLabel("时间：？");
  QLabel* dateLabel        = new QLabel("天数：？");
  layout->addWidget(labelArea);
  labelArea->setLayout(labelLayout);

  QFrame*      btnArea    = new QFrame;
  QGridLayout* btnLayout  = new QGridLayout;
  QPushButton* forwardBtn = new QPushButton("前进");
  QPushButton* restBtn    = new QPushButton("前进");
  QPushButton* homeBtn    = new QPushButton("前进");
  QPushButton* talkBtn    = new QPushButton("前进");

  layout->addWidget(btnArea);
  btnArea->setLayout(btnLayout);

  QProgressBar* hpBar     = new QProgressBar;
  QProgressBar* energyBar = new QProgressBar;
  QProgressBar* hungerBar = new QProgressBar;

  btnLayout->addWidget(forwardBtn, 2, 2);
  btnLayout->addWidget(ATTLabel, 1, 1);
  btnLayout->addWidget(hpBar, 0, 1);

  QString hpText = QString("生命值%1/%2(%p%)").arg(50).arg(100);
  hpBar->setFormat(hpText);
  hpBar->setMinimum(0);
  hpBar->setMaximum(100);
  hpBar->setValue(50);
  // 文字居中 text-align:center;
  // 设置圆角 border-radius
  // 这里要注意如果设置的圆角大于或等进度条高度的一半，圆角设置无效，
  // 比如进度条的高度为10， 圆然设置为5px或以上就不会起作用
  hpBar->setStyleSheet(
      "QProgressBar{	font:9pt;	border-radius:5px;	"
      "text-align:center;	border:1px solid #E8EDF2;	"
      "background-color: rgb(255, 255, 255);	border-color: rgb(180, 180, "
      "180);}QProgressBar:chunk{border-radius:5px;	"
      "background-color:#1ABC9C;}");
}
