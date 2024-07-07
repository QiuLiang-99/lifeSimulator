#ifndef COMPONENT_H
#define COMPONENT_H

#include "character/character.h"
#include <QObject>
class Component : public QObject {
    Q_OBJECT

  public:
    explicit Component(Character* parent = nullptr);
    virtual void update() = 0;

  private:
    Character* character;
};
#endif // COMPONENT_H