#include "item.h"

Item::Item(QObject* parent) : QObject(parent) {
  name        = "Item";
  description = "This is an item.";
  owner       = nullptr;
  stackCount  = 1;
}