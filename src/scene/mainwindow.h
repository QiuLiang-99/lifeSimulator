#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QStackedWidget>
#include <QWidget>

class MainWindow : public QStackedWidget {
    Q_OBJECT

  public:
    explicit MainWindow(QWidget* parent = nullptr);

  public:
    // QStackedWidget* mainWindow;
  signals:
  public slots:
    //void addSence(Scene*);
};

#endif // MAINWINDOW_H
