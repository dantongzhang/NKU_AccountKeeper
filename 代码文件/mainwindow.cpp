#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "new123.h"
#include "success123.h"
#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include <myword.h>
#include <QDateTime>
#include <warning.h>
MyWord *m=new MyWord();
QString path_old=nullptr;
double now_num=2;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    start_mainwindow_sj();
    setWindowTitle("记账小帮手");
    setBackgroundImage("d://bg.jpg");
}

QString MainWindow::openFile_smj()
{
     QString path = QFileDialog::getOpenFileName(this,"打开文件","d:\\textbook");//用户选择文件打开，默认在d盘textbook打开

     //返回值为文件路径，通过该路径可得到文件信息
     return path;
}

void MainWindow::setBackgroundImage(QString path)
{
    QPixmap pixmap=QPixmap(path).scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background,QBrush(pixmap));
    this->setPalette(palette);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::start_mainwindow_sj()
{
    path_old=nullptr;
    now_num=0;
    ui->textBrowser_less->clear();
    ui->textBrowser_text->clear();
    ui->lineEdit_getmoney->clear();
    ui->plainTextEdit_Reason->clear();
}
void MainWindow::on_pushButton_new_clicked()
{
    new123 *n=new new123();
    n->show();
}

void MainWindow::on_pushButton_old_clicked()
{
    ui->textBrowser_text->clear();
    path_old=MainWindow::openFile_smj();
    ui->textBrowser_text->insertPlainText(path_old);
}

void MainWindow::on_pushButton_check_clicked()
{
    ui->textBrowser_less->clear();
    if(path_old!=nullptr)
    {
        now_num=m->getremainmoney_wsy_sj(m->transChinese_toString_sj(path_old));
        QString str=QString::number(now_num,'f',2);//保留两位小数
        ui->textBrowser_less->insertPlainText(str);
    }
    else
    {
        warning *w=new warning;
        w->show();
    }
}

void MainWindow::on_pushButton_sure_clicked()
{
    if(path_old!=nullptr)
    {
        success123 *s=new success123();
        double watering_money=ui->lineEdit_getmoney->text().toDouble();//
        m->insertBasic_zdt(path_old,now_num,m->transChinese_toString_sj(ui->dateEdit_time->dateTime().toString("yyyy-MM-d")),watering_money,m->transChinese_toString_sj(ui->plainTextEdit_Reason->toPlainText()));
        s->show();
    }
    else
    {
        warning *w=new warning;
        w->show();
    }
    start_mainwindow_sj();
}
