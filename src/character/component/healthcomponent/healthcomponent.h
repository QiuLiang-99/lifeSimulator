#ifndef HEALTH_COMPONENT_H
#define HEALTH_COMPONENT_H
#include "../component.h"
class HealthComponent : public Component {
    Q_OBJECT

  public:
    explicit HealthComponent(Character* parent = nullptr);

  private:
};

#endif // HEALTH_COMPONENT_H