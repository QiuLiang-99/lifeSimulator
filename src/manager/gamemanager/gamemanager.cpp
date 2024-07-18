#include "gamemanager.h"
#include "game/E_game.h"
#include "game/game.h"
#include "game/straydiarygame/straydiarygame.h"

Q_GLOBAL_STATIC(GameManager, gameManager)
GameManager& GameManager::getSingleton() {
  return *gameManager;
}
template <typename T>
concept isGame = std::is_base_of<Game, T>::value;

template <isGame T>
Game* createGame() {
  static T e;
  return &e;
}
GameManager::GameManager(QObject* parent) : Manager(parent) {
  GameMap = {
      {straydiary, createGame<StraydiaryGame>},
  };
}

Game& GameManager::openGame(const E_game& target) {
  currentGame_ = GameMap.value(target)();
  return *currentGame_;
  // todo 考虑只能存在一个game，切换game时要不要销毁
}