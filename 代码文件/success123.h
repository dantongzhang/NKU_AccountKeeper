#ifndef SUCCESS123_H
#define SUCCESS123_H

#include <QDialog>

namespace Ui {
class success123;
}

class success123 : public QDialog
{
    Q_OBJECT
public:
    explicit success123(QWidget *parent = nullptr);

//  void get_File_name_sj(QString filename);

    ~success123();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_check_clicked();



private:
    Ui::success123 *ui;
};

#endif // SUCCESS123_H
