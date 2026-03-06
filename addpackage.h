#ifndef ADDPACKAGE_H
#define ADDPACKAGE_H

#include <QDialog>

namespace Ui {
class AddPackage;
}

class AddPackage : public QDialog
{
    Q_OBJECT

public:
    explicit AddPackage(QWidget *parent = nullptr);
    ~AddPackage();

private:
    Ui::AddPackage *ui;
};

#endif // ADDPACKAGE_H
