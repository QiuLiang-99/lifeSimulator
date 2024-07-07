#ifndef GAME_H
#define GAME_H

#include "manager/scenemanager/scenemanager.h"
#include <QDatetime>
#include <QObject>

class Game : public QObject {
    Q_OBJECT

  public:
    explicit Game(QObject* parent = nullptr);

    // private:
    SceneManager& sceneManager;

  private:
    QDate   date;
    QTime   time;
    QString location;
};

#endif // GAME_H