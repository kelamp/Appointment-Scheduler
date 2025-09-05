#ifndef CHANGETIME2_H
#define CHANGETIME2_H

#include <QDialog>

namespace Ui {
class changetime2;
}

class changetime2 : public QDialog
{
    Q_OBJECT

public:
    explicit changetime2(QWidget *parent = nullptr);
    ~changetime2();

private:
    Ui::changetime2 *ui;
};

#endif // CHANGETIME2_H
