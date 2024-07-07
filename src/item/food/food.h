#ifndef FOOD_H
#define FOOD_H

#include "../item.h"
class Food : public Item {
    Q_OBJECT

  public:
    explicit Food(QObject* parent = nullptr);

  private:
    virtual void eat() = 0;
};

#endif // FOOD_H