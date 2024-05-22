#ifndef SCENE_H
#define SCENE_H

#include "E_scene.h"
#include "src/singleton.h"
#include <QGridLayout>
#include <QLabel>
#include <QWidget>
#include <qlayout.h>

class Scene : public QWidget {
    Q_OBJECT

  public:
    explicit Scene(QWidget* parent = nullptr);
    // test

    // private:
    // static MsgPasser* sceneMessenger;

  public:
  signals:
    void switcheScene(E_scene);
};

#endif // SCENE_H
