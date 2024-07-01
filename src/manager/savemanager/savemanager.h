#ifndef SAVEMANAGER_H
#define SAVEMANAGER_H

#include "manager/gamemanager.h"
class SaveManager : public GameManager {
    Q_OBJECT

  public:
    explicit SaveManager(QObject* parent = nullptr);
    void save();
    void load();
};

#endif // SAVEMANAGER_H