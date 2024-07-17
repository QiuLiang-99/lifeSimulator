#include "manager.h"

Manager::Manager(QObject* parent) : QObject(parent) {}
void Manager::test() {
  qDebug() << "槽触发";
}
