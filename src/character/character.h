#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include <qtmetamacros.h>
// 当一个int值具有最大值与最小值并且需要getter和setter时，使用此类型
struct Lint {
  private:
    int value_;
    int minimum_;
    int maximum_;

  public:
    inline int  minimum() { return minimum_; };
    inline void setMinimum(int e) { minimum_ = e; };
    inline int  maximum() { return maximum_; };
    inline void setMaximum_(int e) { maximum_ = e; };
    inline int  operator()() { return value_; }
    inline void operator+(int e) { value_ += e; }
    inline void operator-(int e) { value_ -= e; } // todo 还没写完
};
class Character : public QObject {
    Q_OBJECT

  public:
    explicit Character(QObject* parent = nullptr);

  private:
    QString name_;
    Lint    HP;
    Lint    maxHP;
    Lint    ATT;
    Lint    DEF;
    Lint    speed;
    Lint    spirit;

  public:
    void           setName(const QString& text) { name_ = text; };
    inline QString name() { return name_; };
  public slots:
    void getDamage(Lint); // todo
    void reduceHP();
    void causeDamage();

  protected:
    virtual void ATTskill(){};
    virtual void DEFskill(){};
  signals:
};

#endif // CHARACTER_H
