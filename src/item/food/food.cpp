#include "food.h"

Food::Food(QObject* parent) : Item(parent) {
  name        = "Food";
  description = "This is food.";
  // owner      = nullptr;
  // stackCount = 1;
}