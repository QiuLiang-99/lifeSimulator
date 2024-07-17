#include "food.h"

Food::Food(QObject* parent) : Item(parent) {
  name_        = "Food";
  description_ = "This is food.";
  // owner      = nullptr;
  // stackCount = 1;
}