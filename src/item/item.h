#ifndef ITEM_H
#define ITEM_H
#include "character/character.h"
#include <QObject>
class Item : public QObject {
    Q_OBJECT

    friend class ItemComponent;

  public:
    explicit Item(QObject* parent = nullptr);

    QString name() const { return name_; }
    void    setName(const QString& name) { name_ = name; }

  protected:
    QString name_;
    QString description_;

  private:
    Character* owner;
    int        stackCount;
};

#endif // ITEM_H