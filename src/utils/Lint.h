#ifndef LINT_H
#define LINT_H
#include <QRandomGenerator>
#include <limits>
static const int INT_MAX_VALUE = std::numeric_limits<int>::max();
static const int INT_MIN_VALUE = std::numeric_limits<int>::min();
// 当一个int值具有最大值与最小值并且需要getter和setter时，使用此类型
struct LSint {
  public:
    // Lint();
    LSint(int value   = 0,
          int minimum = INT_MIN_VALUE,
          int maximum = INT_MAX_VALUE);

  private:
    int value_;
    int minimum_;
    int maximum_;

  public:
    // inline int  value() { return value_; };
    inline void setValue(int e) {
      if (e < minimum_) {
        value_ = minimum_;
        return;
      }
      if (e > maximum_) {
        value_ = maximum_;
        return;
      }
      value_ = e;
    };
    inline int  minimum() const { return minimum_; };
    inline void setMinimum(int e) {
      if (e > maximum_) {
        minimum_ = maximum_;
        return;
      }
      minimum_ = e;
    };
    inline int  maximum() const { return maximum_; };
    inline void setMaximum_(int e) {
      if (e < minimum_) {
        maximum_ = minimum_;
        return;
      }
      maximum_ = e;
    };

  public:
    inline LSint& operator=(int e) {
      setValue(e);
      return *this;
    }
    inline LSint& operator+=(int e) {
      setValue(value_ + e);
      return *this;
    }
    inline LSint& operator-=(int e) {
      setValue(value_ - e);
      return *this;
    }

  public:
    inline operator int() const { return value_; }

  public:
    inline static int randomInt(int Min = 1, int Max = 100) {
      return QRandomGenerator::global()->bounded(
          Min, Max + 1); // 注意：第二个参数是不包含的上限
    }
};

// 生成一个1到100之间的随机整数

#endif // LINT_H