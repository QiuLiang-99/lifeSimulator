#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <QDebug>
#include <QObject>
#include <qtmetamacros.h>


class GameManager : public QObject {
    Q_OBJECT

  public:
    explicit GameManager(QObject* parent = nullptr);
  public slots:
    void test();
  signals:
};

#endif // GAMEMANAGER_H
