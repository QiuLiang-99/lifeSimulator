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

  private:
    SceneManager& sceneManager_;

  public:
    inline SceneManager& sceneManager() { return sceneManager_; };

  private:
    QDate        date;
    QTime        time;
    QString      location;
    Protagonist* protagonist;

  public:
    inline void  setDate(const QDate& _date) { date = _date; };
    inline QDate getDate() { return date; };
    inline void  setTime(const QTime& _time) { time = _time; };
    inline QTime getTime() { return time; };
    inline void setLocation(const QString& _location) { location = _location; };
    inline QString getLocation() { return location; };
    inline void    setProtagonist(Protagonist* _protagonist) {
      protagonist = _protagonist;
    };
    inline Protagonist* getProtagonist() { return protagonist; };
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