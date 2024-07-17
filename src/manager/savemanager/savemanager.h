#ifndef SAVEMANAGER_H
#define SAVEMANAGER_H

#include "manager/manager.h"
class SaveManager : public Manager {
    Q_OBJECT

  public:
    explicit SaveManager(QObject* parent = nullptr);
    void save();
    void load();
};

#endif // SAVEMANAGER_H