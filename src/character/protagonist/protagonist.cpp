#include "protagonist.h"
#include "src/character/character.h"

Protagonist::Protagonist(QObject* parent) : Character(parent) {
  HP = Lint(30);
  HP = 60;
  HP > 50;
}
