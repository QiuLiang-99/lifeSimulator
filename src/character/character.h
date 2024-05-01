#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include <qtmetamacros.h>
// 当一个int值具有最大值与最小值并且需要getter和setter时，使用此类型
struct Lint {
  public:
    Lint();
    Lint(int value, int minimum = 0, int maximum = 100);
    /* Lint();
     Lint();
     Lint();*/

  private:
    int value_;
    int minimum_;
    int maximum_;

  public:
    // inline int  value() { return value_; };
    inline void setValue(int e) { value_ = e; };
    inline int  minimum() { return minimum_; };
    inline void setMinimum(int e) { minimum_ = e; };
    inline int  maximum() { return maximum_; };
    inline void setMaximum_(int e) { maximum_ = e; };

  public:
    // inline int  operator()() { return value_; }
    inline void operator+(int e) { value_ += e; }
    inline void operator-(int e) { value_ -= e; } // todo 还没写完
    inline void operator++() { value_ += 1; }     // no return
    inline void operator++(int) { value_ += 1; }
    inline void operator--() { value_ -= 1; }
    inline void operator--(int) { value_ -= 1; }
    /*inline bool operator<(int e) const { return value_ < e; }
    inline bool operator<=(int e) const { return value_ <= e; }
    inline bool operator>(int e) const { return value_ > e; }
    inline bool operator>=(int e) const { return value_ >= e; }*/

  public:
    inline operator int() const { return value_; }
};
class Character : public QObject {
    Q_OBJECT

  public:
    explicit Character(QObject* parent = nullptr);

  public:
    Lint HP;
    Lint ATT;
    Lint DEF;
    Lint speed;
    Lint spirit;

  private:
    QString name_;

  public:
    inline void    setName(const QString& text) { name_ = text; };
    inline QString name() { return name_; };
  public slots:
    virtual void getDamage(Lint); // todo
    virtual void reduceHP(Lint);
    virtual int  causeDamage();

  protected:
    virtual void ATTskill(){};
    virtual void DEFskill(){};
  signals:
};

#endif // CHARACTER_H
