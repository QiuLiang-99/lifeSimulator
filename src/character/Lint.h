#ifndef LINT_H
#define LINT_H

// 当一个int值具有最大值与最小值并且需要getter和setter时，使用此类型
struct Lint {
  public:
    Lint();
    Lint(int value, int minimum = 0, int maximum = 100);

  private:
    int value_;
    int minimum_;
    int maximum_;

  public:
    int  value() const;
    void setValue(int e);
    int  minimum() const;
    void setMinimum(int e);
    int  maximum() const;
    void setMaximum(int e);

  public:
    Lint  operator+(int e) const;
    Lint  operator-(int e) const;
    Lint& operator+=(int e);
    Lint& operator-=(int e);
    Lint& operator++();
    Lint  operator++(int);
    Lint& operator--();
    Lint  operator--(int);

  public:
    operator int() const;
};

#endif // LINT_H