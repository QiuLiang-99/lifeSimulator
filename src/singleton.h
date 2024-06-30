#ifndef SINGLETON_H
#define SINGLETON_H

// 单例模板
template <typename T>
class Singleton {
  public:
    static T* getInstance() {
      static T instance;
      return &instance;
    }
    Singleton(T&&)           = delete;
    Singleton(const T&)      = delete;
    void operator=(const T&) = delete;

  protected:
    Singleton()          = default;
    virtual ~Singleton() = default;

  public:
    static bool isFirstCreate;
};

#endif // SINGLETON_H
