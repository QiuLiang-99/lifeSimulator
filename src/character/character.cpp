#include "character.h"
Lint::Lint() {}
Lint::Lint(int value, int minimum, int maximum) {
  value_   = value;
  minimum_ = minimum;
  maximum_ = maximum;
}
/*Lint::Lint(int value) {}
Lint::Lint(int value) {}
Lint::Lint(int value) {}*/

Character::Character(QObject* parent) : QObject(parent) {}
void Character::getDamage(Lint e) {
  reduceHP(e);
}

void Character::reduceHP(Lint e) {
  HP - e;
}

int Character::causeDamage() {
  return ATT;
}
