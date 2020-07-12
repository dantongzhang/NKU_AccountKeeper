#include "new222.h"
#include "ui_new222.h"
new222::new222(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::new222)
{
    ui->setupUi(this);
}

new222::~new222()
{
    delete ui;}

