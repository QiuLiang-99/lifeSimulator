#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QStackedWidget>
#include <QWidget>
#include <qglobalstatic.h>

class MainWindow : public QStackedWidget {
    Q_OBJECT

  public:
    explicit MainWindow(QWidget* parent = nullptr);

  public:
  signals:
  public slots:
    // void addSence(Scene*);
};
MainWindow& getMainWindow();
#endif // MAINWINDOW_H
