#include "mywindow.h"

mywindow::mywindow()
{

    this->setGeometry(100,100,800,600);

    lcd = new QLCDNumber(this);
    lcd->setGeometry(50,20, 200, 30);
    lcd->display(0);

    btnStart = new QPushButton(this);
    btnStart->setGeometry(50,50, 150,50);
    btnStart->setText("Start");

    timer = new QTimer(this);
    timer->setInterval(1000);

    btnre = new QPushButton(this);
    btnre->setGeometry(50,100, 150,50);
    btnre->setText("0");

    second = 0;

    connect(this->timer, SIGNAL(timeout()), this, SLOT(time()));
    connect(this->btnStart, SIGNAL(clicked(bool)), this, SLOT(start()));
    connect(this->btnre, SIGNAL(clicked(bool)), this, SLOT(re()));
}

void mywindow::time(){
    second++;
    lcd->display(second);
}
void mywindow::start(){
    if(timer->isActive()){
        timer->stop();
        btnStart->setText("Start");

    }
    else{
        timer->start();
        btnStart->setText("Stop");
    }
}

void mywindow::re(){

    second = second -second;
    timer->stop();
}






