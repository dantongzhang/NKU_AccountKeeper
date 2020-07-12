#include "new123.h"
#include "ui_new123.h"
#include "sure.h"
#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include <iostream>
new123::new123(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::new123)
{
    ui->setupUi(this);
}

QString new123::newFile_smj_sj(QString name)
 {
    QString filename="d:\\textbook";
    QDir qdir(filename);
    if(!qdir.exists())
    {
        bool ok=qdir.mkpath(filename);
        ok=ok&&true;
        }
    filename=filename+"\\";
    name=filename+name+".docx";
    QFile file(name);
    file.open(QIODevice::ReadWrite);//文件创建在d盘textbook文件夹内。若无该文件夹，系统自行创立。
    QFileInfo info(file);
    QString path=info.filePath();
    return path;
 }

new123::~new123()
{
    delete ui;
}

void new123::on_pushButton_clicked()
{
    QString Filename=ui->plainTextEdit->toPlainText();
    QString path_new=new123::newFile_smj_sj(Filename);
    Sure *su=new Sure();
    su->show();
    this->close();
}

void new123::on_pushButton_end_clicked()
{
    this->close();
}
