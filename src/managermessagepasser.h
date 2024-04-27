#ifndef MANAGERMESSAGEPASSER_H
#define MANAGERMESSAGEPASSER_H
#include "gamemanager.h"
#include <QObject>

class ManagerMessagePasser : public QObject {
    Q_OBJECT

  public:
    explicit ManagerMessagePasser(QObject* parent = nullptr);

    // test private:
    GameManager* target;
  signals:
};

#endif // MANAGERMESSAGEPASSER_H
