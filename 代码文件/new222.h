#ifndef NEW222_H
#define NEW222_H

#include <QDialog>
namespace Ui {
class new222;
}

class new222 : public QDialog
{
    Q_OBJECT

public:
    explicit new222(QWidget *parent = 0);

    ~new222();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::new222 *ui;
};
#endif // NEW222_H
