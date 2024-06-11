#include "scenefactory.h"
void registerScenes() {
  registerScene<gameStartScreen>(E_scene::start);
  registerScene<GameMainScreen>(E_scene::gameMain);
}