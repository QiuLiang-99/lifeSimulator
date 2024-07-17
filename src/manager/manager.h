#ifndef MANAGER_H
#define MANAGER_H

#include <QDebug>
#include <QObject>
#include <qtmetamacros.h>

class Manager : public QObject {
    Q_OBJECT

  public:
    explicit Manager(QObject* parent = nullptr);
  public slots:
    void test();
  signals:
};

#endif // MANAGER_H
