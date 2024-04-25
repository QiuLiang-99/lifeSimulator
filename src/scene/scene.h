#ifndef SCENE_H
#define SCENE_H

#include <QGridLayout>
#include <QLabel>
#include <QWidget>
#include <qlayout.h>
class Scene : public QWidget {
    Q_OBJECT

  public:
    explicit Scene(QWidget* parent = nullptr);

  public:
    // virtual Scene* getInstance();
};

#endif // SCENE_H
