#ifndef SCENE_H
#define SCENE_H

#include <QWidget>

class Scene : public QWidget {
  Q_OBJECT
public:
  explicit Scene(QWidget *parent = nullptr);
};

#endif // SCENE_H
