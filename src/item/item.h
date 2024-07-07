#ifndef ITEM_H
#define ITEM_H
#include "character/character.h"
#include <QObject>
class Item : public QObject {
    Q_OBJECT

    friend class ItemComponent;

  public:
    explicit Item(QObject* parent = nullptr);

  private:
    QString name;
    QString description;

  private:
    Character* owner;
    int        stackCount;
};

#endif // ITEM_H