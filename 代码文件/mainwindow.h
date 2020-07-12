#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    QString openFile_smj();

    void on_pushButton_new_clicked();

    void on_pushButton_old_clicked();

    void on_pushButton_check_clicked();

    void on_pushButton_sure_clicked();

    void start_mainwindow_sj();

    void setBackgroundImage(QString path);
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
