#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include "../scene.h"
#include <QFrame>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>

class MainScreen : public Scene {
    Q_OBJECT

  public:
    explicit MainScreen(QWidget* parent = nullptr);

  private:
    void setupUI();

    // 控件声明
    QWidget*     centralWidget;
    QHBoxLayout* topLayout;
    QLabel*      infoLabel;
    QFrame*      statusFrame;
    QVBoxLayout* statusLayout;
    QLabel*      status1;
    QLabel*      status2;
    QLabel*      status3;
    QLabel*      status4;
    QLabel*      centerLabel;
    QGridLayout* buttonLayout;
    QPushButton* shopButton;
    QPushButton* challengeButton;
    QPushButton* bridgeButton;
    QPushButton* exploreButton;
    QPushButton* partnerButton;
    QPushButton* manufactureButton;
    QPushButton* characterButton;
    QPushButton* eatButton;
    QVBoxLayout* mainLayout;
  signals:
};

#endif // MAINSCREEN_H
