#include "myword.h"
#include <QFileDialog>
#include <QDebug>
#include <math.h>
#include <sstream>
#include <mainwindow.h>

MyWord::MyWord(QObject *parent) : QObject(parent)
{
    m_pWord = NULL;
    m_pDocuments = NULL;
    m_pDocument = NULL;
}

string MyWord::transChinese_toString_sj(QString trans)
{
    return string(trans.toLocal8Bit());
}

string readFileIntoString_sj(const char* filename)
{
    ifstream ifile(filename);//将文件读入到ostringstream对象buf中
    ostringstream buf;
    char ch;
    while(buf&&ifile.get(ch))
    buf.put(ch);//返回与流对象buf关联的字符串
    return buf.str();
}


double MyWord::getremainmoney_wsy_sj(string filename)
{
    string filep=readFileIntoString_sj(filename.data());
    int str_position=0,char_count=0,fuhao=1;
    while((str_position=filep.find(transChinese_toString_sj("现在金额："),str_position))!=string::npos)
    {
        char_count++;
        str_position+=3;
     }
    str_position=0;
    int now_count=0;
    while(now_count!=char_count)
    {
        str_position=filep.find(transChinese_toString_sj("现在金额："),str_position);
        now_count++;
        str_position+=10;
    }
    int pos_point=0;
    char point[100];
    for(int i=0;filep[i+str_position]!='\n';i++)
    {
        point[i]=filep[i+str_position];
        point[i+1]=0;
    }
    int len=strlen(point);
    char *point_num=new char[len];
    bool judge=false;
    for(int i=0;i<len;i++)
    {
        point_num[i]=point[i];
        if(point_num[i]=='.')
        {
            judge=true;
            pos_point=i;
        }
    }
    if(point_num[0]=='-')
    {
        fuhao=-1;
        for(int i=0;i<len;i++)
            point_num[i]=point_num[i+1];
        len--;
        pos_point--;
     }
    if(!judge)
        pos_point=len;
    double result_num=0;
    for(int i=0;i<len;i++)
    {
        if(i<pos_point)
            result_num=result_num*10+(point_num[i]-'0');
        if(i>pos_point)
            result_num=result_num+pow(0.1,1.0*(i-pos_point))*(point_num[i]-'0');
        }
    return result_num*fuhao;
}
void MyWord::insertBasic_zdt(QString dir,double sum, string date, double watering, string remark)
{
    fstream outfile(transChinese_toString_sj(dir),ios::app);
    double remain = sum + watering;
    if(watering<0)
        outfile<<transChinese_toString_sj("流水：")<< watering<<endl;
    else
        outfile<<transChinese_toString_sj("流水：+")<< watering<<endl;
    outfile<<transChinese_toString_sj("备注：")<< remark<<endl;
    outfile<<transChinese_toString_sj("建立日期：")<< date<<endl;
    outfile<<transChinese_toString_sj("现在金额：")<< remain<<endl<<endl;
    outfile.close();
}
