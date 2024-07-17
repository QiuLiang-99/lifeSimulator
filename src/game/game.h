#ifndef GAME_H
#define GAME_H

#include "character/protagonist/protagonist.h"
#include "manager/scenemanager/scenemanager.h"
#include <QDatetime>
#include <QObject>

class Game : public QObject {
    Q_OBJECT

  public:
    explicit Game(QObject* parent = nullptr);

  public:
    inline SceneManager& sceneManager() { return sceneManager_; };

  private:
    SceneManager& sceneManager_ = *new SceneManager(this);

  private:
    QDate        date_;
    QTime        time_;
    QString      location_;
    Protagonist* protagonist_;

  public:
    inline void  setDate(const QDate& _date) { date_ = _date; };
    inline QDate date() { return date_; };
    inline void  setTime(const QTime& _time) { time_ = _time; };
    inline QTime time() { return time_; };
    inline void  setLocation(const QString& _location) {
      location_ = _location;
    };
    inline QString location() { return location_; };
    inline void    setProtagonist(Protagonist* _protagonist) {
      protagonist_ = _protagonist;
    };
    inline Protagonist* protagonist() { return protagonist_; };
    /*public slots:
      virtual void startGame();
      virtual void endGame();
      virtual void saveGame();
      virtual void loadGame();
      virtual void pauseGame();
      virtual void resumeGame();
      virtual void changeLocation(const QString& location);
      virtual void changeDate(const QDate& date);
      virtual void changeTime(const QTime& time);
      virtual void changeProtagonist(Protagonist& protagonist);*/
  signals:
};

#endif // GAME_H