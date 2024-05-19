#include "Lint.h"
Lint::Lint() : value_(0), minimum_(0), maximum_(100) {}

Lint::Lint(int value, int minimum, int maximum) :
    value_(value), minimum_(minimum), maximum_(maximum) {}

void Lint::setValue(int e) {
  if (e < minimum_) {
    e = minimum_;
  } else if (e > maximum_) {
    e = maximum_;
  }
  value_ = e;
}
int Lint::value() const {
  return value_;
}
int Lint::minimum() const {
  return minimum_;
}

void Lint::setMinimum(int e) {
  minimum_ = e;
}

int Lint::maximum() const {
  return maximum_;
}

void Lint::setMaximum(int e) {
  maximum_ = e;
}

Lint Lint::operator+(int e) const {
  return Lint(value_ + e, minimum_, maximum_);
}

Lint& Lint::operator+=(int e) {
  value_ += e;
  return *this;
}

Lint& Lint::operator-=(int e) {
  value_ -= e;
  return *this;
}

Lint Lint::operator-(int e) const {
  return Lint(value_ - e, minimum_, maximum_);
}

Lint& Lint::operator++() {
  value_++;
  return *this;
}

Lint Lint::operator++(int) {
  Lint temp = *this;
  value_++;
  return temp;
}

Lint& Lint::operator--() {
  value_--;
  return *this;
}

Lint Lint::operator--(int) {
  Lint temp = *this;
  value_--;
  return temp;
}

Lint::operator int() const {
  return value_;
}