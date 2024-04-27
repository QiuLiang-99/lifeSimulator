#ifndef MsgPasser_H
#define MsgPasser_H
#include "gamemanager.h"
#include "src/scene/E_scene.h"
#include <QObject>

class MsgPasser : public QObject {
    Q_OBJECT

  public:
    explicit MsgPasser(QObject* parent = nullptr);

    // test private:
    GameManager* target;

  public:
    void connect(GameManager*);
  signals:
    void switcheScene(E_scene);
};

#endif // MsgPasser_H
