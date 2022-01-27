#include "mywindow.h"

mywindow::mywindow()
{

    this->setGeometry(100,100,800,600);

    QFont *font = new QFont("Times", 22, true);


    label =new QLabel(this);
    label -> setText("Боль");
    label ->setGeometry(20,100,100,200);
    label ->setFont(*font);


    edit = new QLineEdit(this);
    edit->setGeometry(150, 200, 500, 20);

    ok = new QPushButton(this);
    ok->setGeometry(150, 250, 50, 20);
    ok->setText("Я хочу умереть");

    btnClose = new QPushButton(this);
    btnClose->setGeometry(400,100,100,30);
    btnClose->setText("Close");

    connect(this->ok, SIGNAL(clicked(bool)), this, SLOT(say()));
}

void mywindow :: say (){
    QString name = this->edit->text();
    QMessageBox * mes = new QMessageBox(this);
    mes->setText("Привет " + name +" !");
    mes->show();

}

void mywindow::close(){
    exit(0);
    show();
}






