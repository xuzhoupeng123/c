#include "widget.h"
#include<QPushButton>
#include"mypushbutton.h"
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton * btn = new QPushButton;
    btn->show();
    btn->setParent(this);

    MyPushButton *mybtn = new MyPushButton ;
    mybtn->setText("我的按钮");
    mybtn->show();
    mybtn->setParent(this);
    mybtn->move(200,0);

    //需求点击我的按钮   关闭窗口
    //参数1  信号发送者  参数2  发送的信号（函数地址）  参数3 接受信号者   参数4  处理的槽函数
    //connect(mybtn,&QPushButton::clicked,this,&Widget::close);
    connect(mybtn,&MyPushButton::clicked,this,&QWidget::close);
 }

Widget::~Widget()
{
    qDebug()<<"my析构";
}
