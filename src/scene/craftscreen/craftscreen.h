#ifndef CRAFTSCREEN_H
#define CRAFTSCREEN_H

#include "item/item.h"
#include "scene/scene.h"
#include <QScrollArea>
#include <QVBoxLayout>
#include <QWidget>
#include <qboxlayout.h>
#include <qwidget.h>

class CraftItemWidget : public QWidget {
    Q_OBJECT

  public:
    CraftItemWidget(QWidget* parent = nullptr);
    CraftItemWidget(Item* item, QWidget* parent = nullptr);
    void  setItem(Item* item);
    Item* getItem();

  private:
    Item*        data;
    QVBoxLayout* layout;
};
class CraftScreen : public SceneWidget {
    Q_OBJECT

  public:
    explicit CraftScreen(QWidget* parent = nullptr);

    void addCraft(Item* item);

  private:
    QVBoxLayout* layout;
    QScrollArea* scrollArea;
    QWidget*     scrollAreaWidgetContents;
    QHBoxLayout* scrollArealayout;
};

#endif // CRAFTSCREEN_H