#ifndef MANAGERMESSAGEPASSER_H
#define MANAGERMESSAGEPASSER_H
#include "gamemanager.h"
#include "src/scene/E_scene.h"
#include <QObject>

class ManagerMessagePasser : public QObject {
    Q_OBJECT

  public:
    explicit ManagerMessagePasser(QObject* parent = nullptr);

    // test private:
    GameManager* target;
  signals:
    void switcheScene(E_scene);
};

#endif // MANAGERMESSAGEPASSER_H
