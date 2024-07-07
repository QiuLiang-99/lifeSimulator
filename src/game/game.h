#ifndef GAME_H
#define GAME_H

#include <QDatetime>
#include <QObject>

class Game : public QObject {
    Q_OBJECT

  public:
    explicit Game(QObject* parent = nullptr);

  private:
    QDate date;
    QTime time;
};

#endif // GAME_H