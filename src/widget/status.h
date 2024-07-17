#ifndef __STATUS_H__
#define __STATUS_H__
#include <QWidget>
class statusUI : public QWidget {
    Q_OBJECT

  public:
    explicit statusUI(QWidget* parent = nullptr);
    void mouseReleaseEvent(QMouseEvent* event) override;

  private:
};
#endif // __STATUS_H__