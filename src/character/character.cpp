#include "character.h"

Character::Character(QObject* parent) : QObject(parent) {}
void Character::getDamage(Lint e) {
  reduceHP(e);
}

void Character::reduceHP(Lint e) {
  HP -= e;
}

int Character::causeDamage() {
  return ATT;
}
