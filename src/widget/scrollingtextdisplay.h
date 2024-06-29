#ifndef SCROLLINGTEXTDISPLAY_H
#define SCROLLINGTEXTDISPLAY_H

#include <QLabel>
#include <QList>
#include <QTimer>
#include <QVBoxLayout>
#include <QWidget>


class ScrollingTextDisplay : public QWidget {
    Q_OBJECT

  public:
    explicit ScrollingTextDisplay(QWidget* parent = nullptr);
    void addLabel(QLabel* label);

  private slots:
    void scrollText();

  private:
    QVBoxLayout*   layout;
    QList<QLabel*> labels;
    QTimer*        timer;
};

#endif // SCROLLINGTEXTDISPLAY_H