#include "success123.h"
#include "ui_success123.h"
#include "QFileDialog"
#include "QDesktopServices"
using namespace std;
success123::success123(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::success123)
{
    ui->setupUi(this);
}

success123::~success123()
{
    delete ui;
}

void success123::on_pushButton_clicked()
{
    this->close();
}

void success123::on_pushButton_check_clicked()
{
    QString path = QFileDialog::getOpenFileName(this,"打开文件","d:\\textbook");//用户选择文件打开，默认在d盘textbook打开
    QDesktopServices::openUrl(QUrl::fromLocalFile(QFileInfo(path).absoluteFilePath()));
}
