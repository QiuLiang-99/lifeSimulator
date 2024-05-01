#ifndef PROTAGONIST_H
#define PROTAGONIST_H

#include "src/character/character.h"
#include <QObject>

class Protagonist : public Character {
    Q_OBJECT

  public:
    explicit Protagonist(QObject* parent = nullptr);

  signals:
};

#endif // PROTAGONIST_H
