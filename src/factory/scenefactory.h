#ifndef __SCENEFACTORY_H__
#define __SCENEFACTORY_H__
#include "src/scene/E_scene.h"
#include "src/scene/gamemainscreen.h"
#include "src/scene/gamestartscreen.h"
#include "src/scene/scene.h"
#include <QObject>
#include <memory>
#include <unordered_map>

class SceneFactory {
  public:
    using CreateFunc = std::unique_ptr<Scene> (*)();

    static std::unique_ptr<Scene> create(E_scene type) {
      auto it = getRegistry().find(type);
      if (it != getRegistry().end()) {
        return it->second();
      }
      return nullptr;
    }

    static void registerType(E_scene type, CreateFunc func) {
      getRegistry()[type] = func;
    }

  private:
    static std::unordered_map<E_scene, CreateFunc>& getRegistry() {
      static std::unordered_map<E_scene, CreateFunc> registry;
      return registry;
    }
};

template <class targetSence>
void registerScene(E_scene type) {
  SceneFactory::registerType(type, []() -> std::unique_ptr<Scene> {
    return std::make_unique<targetSence>();
  });
}

void registerScenes() {
  registerScene<gameStartScreen>(E_scene::start);
  registerScene<GameMainScreen>(E_scene::gameMain);
}

#endif // __SCENEFACTORY_H__