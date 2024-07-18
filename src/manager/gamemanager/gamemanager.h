#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "../manager.h"
#include "game/E_game.h"

class Game;
class GameManager : public Manager {
    Q_OBJECT

  public:
    explicit GameManager(QObject* parent = nullptr);

  public:
    static GameManager& getSingleton();

  public slots:

    Game& openGame(const E_game& game);

  public:
    inline Game& currentGame() { return *currentGame_; }
    inline Game& game() { return *currentGame_; }

  private:
    // Scene* getScene(const E_scene&);
    // void   switchScene(Scene*);
  signals:

  protected:
    // void customEvent(QEvent* event);
    //  bool eventFilter(QObject *obj, QEvent *event);

  private:
    // MainWindow& mainWindow_;
    Game* currentGame_;
    using GameFactory = std::function<Game*()>;
    QHash<E_game, GameFactory> GameMap;
};
inline auto gm = GameManager::getSingleton;
// #define gm() GameManager::getSingleton()
#endif // GAMEMANAGER_H