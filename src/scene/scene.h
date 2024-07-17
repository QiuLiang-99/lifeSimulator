#ifndef SCENE_H
#define SCENE_H

#include "E_scene.h"
#include "manager/manager.h"
#include <QGridLayout>
#include <QLabel>
#include <QWidget>
#include <qlayout.h>

class Scene : public QWidget {
    Q_OBJECT

  public:
    explicit Scene(QWidget* parent = nullptr);

  public:
};

#endif // SCENE_H
