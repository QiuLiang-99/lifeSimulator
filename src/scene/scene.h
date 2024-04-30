#ifndef SCENE_H
#define SCENE_H

#include "E_scene.h"
#include "src/msgpasser.h"
#include <QGridLayout>
#include <QLabel>
#include <QWidget>
#include <qlayout.h>
// 单例模板
template <typename T>
class Singleton {
  public:
    static T& GetInstance() {
      static T instance;
      return instance;
    }

    Singleton(T&&)           = delete;
    Singleton(const T&)      = delete;
    void operator=(const T&) = delete;

  protected:
    Singleton()          = default;
    virtual ~Singleton() = default;
};
class Scene : public QWidget, public Singleton<Scene> {
    Q_OBJECT

  public:
    explicit Scene(QWidget* parent = nullptr);
    // test

    // private:
    static MsgPasser* sceneMessenger;

  public:
};

#endif // SCENE_H
