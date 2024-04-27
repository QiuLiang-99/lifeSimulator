#ifndef SCENE_H
#define SCENE_H

#include "E_scene.h"
#include "src/managermessagepasser.h"
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
    static ManagerMessagePasser* sceneManageMessagePasser;

  public:
    // virtual Scene* getInstance();
};

#endif // SCENE_H
