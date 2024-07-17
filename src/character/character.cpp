#include "character.h"

Character::Character(QObject* parent) : QObject(parent) {}
void Character::takeDamage(LSint e) {
  reduceHP(e);
}

void Character::reduceHP(LSint e) {
  HP -= e;
}

int Character::causeDamage() {
  return ATT;
}
