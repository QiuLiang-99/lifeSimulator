#include "mainscreen.h"
#include <QProgressBar>
#include <qframe.h>
#include <qlabel.h>
#include <qpushbutton.h>

MainScreen::MainScreen(QWidget* parent) : Scene(parent) {
  setupUI();
  // 文字居中 text-align:center;
  // 设置圆角 border-radius
  // 这里要注意如果设置的圆角大于或等进度条高度的一半，圆角设置无效，
  // 比如进度条的高度为10， 圆然设置为5px或以上就不会起作用
  /*setStyleSheet(
      "QProgressBar{	font:9pt;	border-radius:5px;	"
      "text-align:center;	border:1px solid #E8EDF2;	"
      "background-color: rgb(255, 255, 255);	border-color: rgb(180, 180, "
      "180);}QProgressBar:chunk{border-radius:5px;	"
      "background-color:#1ABC9C;}");*/
}
void MainScreen::setupUI() {
  // 初始化控件
  topLayout    = new QHBoxLayout();
  infoLabel    = new QLabel("省城.160天 ⚡600/760 🥖20/240", this);
  statusFrame  = new QFrame(this);
  statusLayout = new QVBoxLayout();
  status1      = new QLabel("健康 78/100   金钱 3.3   特性 25/27", this);
  status2      = new QLabel("攻击 4412   防御 1211   血量 3935", this);
  status3      = new QLabel("离家 300km   伤药 21   最大 12904", this);
  status4      = new QLabel("食物 77+21", this);
  centerLabel  = new QLabel("「市中心」", this);
  centerLabel->setAlignment(Qt::AlignCenter);
  buttonLayout      = new QGridLayout();
  shopButton        = new QPushButton("商店", this);
  challengeButton   = new QPushButton("挑战", this);
  bridgeButton      = new QPushButton("桥洞", this);
  exploreButton     = new QPushButton("探索", this);
  partnerButton     = new QPushButton("伙伴", this);
  manufactureButton = new QPushButton("制造", this);
  characterButton   = new QPushButton("特性", this);
  eatButton         = new QPushButton("进食", this);
  mainLayout        = new QVBoxLayout();

  // 设置布局
  topLayout->addWidget(infoLabel);

  statusLayout->addWidget(status1);
  statusLayout->addWidget(status2);
  statusLayout->addWidget(status3);
  statusLayout->addWidget(status4);
  statusFrame->setLayout(statusLayout);

  buttonLayout->addWidget(shopButton, 0, 0);
  buttonLayout->addWidget(challengeButton, 0, 1);
  buttonLayout->addWidget(bridgeButton, 0, 2);
  buttonLayout->addWidget(exploreButton, 1, 0);
  buttonLayout->addWidget(partnerButton, 1, 1);
  buttonLayout->addWidget(manufactureButton, 2, 0);
  buttonLayout->addWidget(characterButton, 2, 1);
  buttonLayout->addWidget(eatButton, 2, 2);

  mainLayout->addLayout(topLayout);
  mainLayout->addWidget(statusFrame);
  mainLayout->addWidget(centerLabel);
  mainLayout->addLayout(buttonLayout);

  setLayout(mainLayout);
}
