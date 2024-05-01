#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>

class Character : public QObject {
    Q_OBJECT

  public:
    explicit Character(QObject* parent = nullptr);

  signals:
};

#endif // CHARACTER_H
