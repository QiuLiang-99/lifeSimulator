#ifndef MANAGERMESSAGEPASSER_H
#define MANAGERMESSAGEPASSER_H

#include <QObject>

class ManagerMessagePasser : public QObject {
    Q_OBJECT

  public:
    explicit ManagerMessagePasser(QObject* parent = nullptr);

  signals:
};

#endif // MANAGERMESSAGEPASSER_H
