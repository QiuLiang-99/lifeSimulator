#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QStackedWidget>
#include <QWidget>
#include <qglobalstatic.h>
#include <qwidget.h>

class MainWindow : public QStackedWidget {
    Q_OBJECT

  public:
    explicit MainWindow(QWidget* parent = nullptr);

  public:
  signals:
  public slots:
    void showWidget(QWidget*);
};
MainWindow& getMainWindow();
#endif // MAINWINDOW_H
