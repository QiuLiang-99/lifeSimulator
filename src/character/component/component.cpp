#include "component.h"

Component::Component(Character* parent) : QObject(parent), character(parent) {}
