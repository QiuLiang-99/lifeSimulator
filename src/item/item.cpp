#include "item.h"

Item::Item(QObject* parent) : QObject(parent) {
  name_        = "Item";
  description_ = "This is an item.";
  owner        = nullptr;
  stackCount   = 1;
}