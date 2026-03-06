#ifndef REGISTERTOURIST_H
#define REGISTERTOURIST_H

#include <QDialog>

namespace Ui {
class Registertourist;
}

class Registertourist : public QDialog
{
    Q_OBJECT

public:
    explicit Registertourist(QWidget *parent = nullptr);
    ~Registertourist();

private:
    Ui::Registertourist *ui;
};

#endif // REGISTERTOURIST_H
