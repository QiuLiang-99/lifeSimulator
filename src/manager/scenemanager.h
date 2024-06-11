#ifndef __SCENEMANAGER_H__
#define __SCENEMANAGER_H__
#include "src/factory/scenefactory.h"
#include "src/scene/E_scene.h"
#include "src/scene/scene.h"
#include <memory>
#include <unordered_map>

// SceneManager 类定义
class SceneManager {
  public:
    // 获取 SceneManager 的唯一实例
    static SceneManager& getInstance() {
      // instance 是一个静态变量，只会被初始化一次
      static SceneManager instance;
      return instance;
    }

    // 获取指定类型的 Scene 对象
    std::shared_ptr<Scene> getScene(E_scene type) {
      // 在 scenes 中查找指定类型
      auto it = scenes.find(type);
      // 如果找到了，就返回对应的 Scene 对象
      if (it != scenes.end()) {
        return it->second;
      }
      // 如果没有找到，就使用 SceneFactory 创建一个新的 Scene 对象
      auto scene = SceneFactory::create(type);
      if (scene) {
        // 将新创建的 Scene 对象添加到 scenes 中，并返回它
        scenes[type] = std::move(scene);
        return scenes[type];
      }
      // 如果创建失败，就返回 nullptr
      return nullptr;
    }

    // 切换到指定类型的 Scene
    void switchToScene(E_scene type) {
      // 如果当前有 Scene 正在显示，就隐藏它
      if (currentScene) {
        currentScene->hide();
      }
      // 获取新的 Scene 对象，并将其设置为当前 Scene
      currentScene = getScene(type);
      // 如果新的 Scene 对象存在，就显示它
      if (currentScene) {
        currentScene->show();
      }
    }

  private:
    // 构造函数是私有的，防止外部创建 SceneManager 的实例
    SceneManager() = default;
    // 存储所有的 Scene 对象
    std::unordered_map<E_scene, std::shared_ptr<Scene>> scenes;
    // 当前正在显示的 Scene 对象
    std::shared_ptr<Scene>                              currentScene;
};

#endif // __SCENEMANAGER_H__