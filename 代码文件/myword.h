#ifndef MYWORD_H
#define MYWORD_H

/********************************************
*提供一个操作word的类
*该类具有以下功能：
*1.指定标签插入文字
*
*
*********************************************/


#include <QObject>
#include <QAxObject>
#include <QAxWidget>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class MyWord : public QObject
{
    Q_OBJECT
public:
    explicit MyWord(QObject *parent = 0);

private:
    QString m_fileName;//存入位置
    QAxWidget *m_pWord;
    QAxObject *m_pDocuments;
    QAxObject *m_pDocument;//

public:
    void createWordDocument_zdt();//创建word文档
    bool insertText_zdt(QString Tag, QString text);//往标签处插入文字
    void insertPic_zdt(QString Tag, QString PicPath);//往标签处插入图片
    void saveAndQuit_zdt(const QString &text);//保存文档并退出
    void insertBasic_zdt(QString dir,double sum,string date,double watering, string remark);
    string transChinese_toString_sj(QString trans);
    double getremainmoney_wsy_sj(string filep);


signals:

public slots:
};


#endif // MYWORD_H
