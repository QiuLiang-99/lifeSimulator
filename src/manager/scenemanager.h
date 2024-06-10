#ifndef __SCENEMANAGER_H__
#define __SCENEMANAGER_H__
#include "src/scene/E_scene.h"
#include <unordered_map>

/*class SceneManager {
  public:
    static SceneManager& getInstance() {
      static SceneManager instance;
      return instance;
    }

    std::shared_ptr<Scene> getScene(E_scene type) {
      auto it = scenes.find(type);
      if (it != scenes.end()) {
        return it->second;
      }
      auto scene = SceneFactory::create(type);
      if (scene) {
        scenes[type] = std::move(scene);
        return scenes[type];
      }
      return nullptr;
    }

    void switchToScene(E_scene type) {
      if (currentScene) {
        currentScene->hide();
      }
      currentScene = getScene(type);
      if (currentScene) {
        currentScene->show();
      }
    }

  private:
    SceneManager() = default;
    std::unordered_map<E_scene, std::shared_ptr<Scene>> scenes;
    std::shared_ptr<Scene>                              currentScene;
};*/

#endif // __SCENEMANAGER_H__