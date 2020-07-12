#ifndef NEW123_H
#define NEW123_H

#include <QDialog>

namespace Ui {
class new123;
}

class new123 : public QDialog
{
    Q_OBJECT

public:
    explicit new123(QWidget *parent = nullptr);
    ~new123();

private slots:

    QString newFile_smj_sj(QString name);

    void on_pushButton_clicked();

    void on_pushButton_end_clicked();

private:
    Ui::new123 *ui;
};

#endif // NEW123_H
