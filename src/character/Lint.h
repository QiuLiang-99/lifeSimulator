#ifndef LINT_H
#define LINT_H
#include <limits>

static const int INT_MAX_VALUE = std::numeric_limits<int>::max();
static const int INT_MIN_VALUE = std::numeric_limits<int>::min();
// 当一个int值具有最大值与最小值并且需要getter和setter时，使用此类型
struct Lint {
  public:
    // Lint();
    Lint(int value   = 0,
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
      } else if (e > maximum_) {
        value_ = maximum_;
      } else {
        value_ = e;
      }
    };
    inline int  minimum() const { return minimum_; };
    inline void setMinimum(int e) {
      if (e > maximum_) {
        minimum_ = maximum_;
      } else {
        minimum_ = e;
      }
    };
    inline int  maximum() const { return maximum_; };
    inline void setMaximum_(int e) {
      if (e < minimum_) {
        maximum_ = minimum_;
      } else {
        maximum_ = e;
      }
    };

  public:
    // inline int  operator()() { return value_; }
    inline Lint& operator=(int e) {
      setValue(e);
      return *this;
    }
    inline Lint& operator+=(int e) {
      value_ += e;
      return *this;
    }
    inline Lint& operator-=(int e) {
      value_ -= e;
      return *this;
    }
    /*inline Lint& operator++() {
      ++value_;
      return *this;
    }
    inline Lint operator++(int) {
      Lint temp(*this);
      ++value_;
      return temp;
    }
    inline Lint& operator--() {
      --value_;
      return *this;
    }
    inline Lint operator--(int) {
      Lint temp(*this);
      --value_;
      return temp;
    }
*/

  public:
    inline operator int() const { return value_; }
};

#endif // LINT_H