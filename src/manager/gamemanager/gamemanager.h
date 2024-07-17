#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "game/game.h"
class Game;
class GameManager : public Manager {
    Q_OBJECT

  public:
    explicit GameManager(QObject* parent = nullptr);

  public slots:

    // void showScene(const E_scene&);

  private:
    // Scene* getScene(const E_scene&);
    // void   switchScene(Scene*);
  signals:

  protected:
    // void customEvent(QEvent* event);
    //  bool eventFilter(QObject *obj, QEvent *event);

  private:
    // MainWindow& mainWindow_;
    //  currentScene
    // using SceneFactory = std::function<Scene*()>;
    // QHash<E_scene, SceneFactory> SceneMap;
};

#endif // GAMEMANAGER_H