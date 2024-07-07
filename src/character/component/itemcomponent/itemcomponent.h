#ifndef ITEMCOMPONENT_H
#define ITEMCOMPONENT_H

#include "../component.h"
class ItemComponent : public Component {
    Q_OBJECT

  public:
    explicit ItemComponent(Character* parent = nullptr);

  private:
};

#endif // ITEMCOMPONENT_H