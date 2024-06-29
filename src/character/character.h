#ifndef CHARACTER_H
#define CHARACTER_H

#include "Lint.h"
#include <QObject>
#include <qtmetamacros.h>

class Character : public QObject {
    Q_OBJECT

  public:
    explicit Character(QObject* parent = nullptr);

  public:
    LSint HP;
    LSint ATT;
    LSint DEF;
    LSint speed;
    LSint spirit;

  private:
    QString name_;

  public:
    inline void    setName(const QString& text) { name_ = text; };
    inline QString name() { return name_; };
  public slots:
    virtual void getDamage(LSint); // todo
    virtual void reduceHP(LSint);
    virtual int  causeDamage();

  protected:
    virtual void ATTskill(){};
    virtual void DEFskill(){};
  signals:
};

#endif // CHARACTER_H
