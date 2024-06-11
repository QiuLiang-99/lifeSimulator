#ifndef __SCENEFACTORY_H__
#define __SCENEFACTORY_H__
#include "src/scene/E_scene.h"
#include "src/scene/gamemainscreen.h"
#include "src/scene/gamestartscreen.h"
#include "src/scene/scene.h"
#include <QObject>
#include <memory>
#include <unordered_map>

// SceneFactory 类定义
class SceneFactory {
  public:
    // 使用函数指针类型定义创建函数，该函数返回一个指向 Scene 对象的 unique_ptr
    using CreateFunc = std::unique_ptr<Scene> (*)();

    // 创建指定类型的 Scene 对象
    static std::unique_ptr<Scene> create(E_scene type) {
      // 在注册表中查找指定类型
      auto it = getRegistry().find(type);
      // 如果找到了，就调用相应的创建函数
      if (it != getRegistry().end()) {
        return it->second();
      }
      // 如果没有找到，就返回 nullptr
      return nullptr;
    }

    // 注册一个新的 Scene 类型
    static void registerType(E_scene type, CreateFunc func) {
      // 在注册表中添加新的类型和对应的创建函数
      getRegistry()[type] = func;
    }

  private:
    // 获取注册表
    static std::unordered_map<E_scene, CreateFunc>& getRegistry() {
      // 注册表是一个静态变量，只会被初始化一次
      static std::unordered_map<E_scene, CreateFunc> registry;
      return registry;
    }
};

// 注册一个新的 Scene 类型
template <class targetSence>
void registerScene(E_scene type) {
  // 调用 SceneFactory 的 registerType 方法，传入一个 lambda 函数作为创建函数
  SceneFactory::registerType(type, []() -> std::unique_ptr<Scene> {
    // 这个 lambda 函数使用 make_unique 创建一个新的 targetSence 对象
    return std::make_unique<targetSence>();
  });
}

// 注册所有的 Scene 类型
void registerScenes();
#endif // __SCENEFACTORY_H__