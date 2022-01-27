#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QFont>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>

class mywindow : public QWidget
{
    Q_OBJECT
private:
    QLabel * label;
    QLineEdit * edit;
    QPushButton * ok;
    QPushButton * btnClose;
public:
    mywindow();
public slots:
    void say();
    void close();
};

#endif // MYWINDOW_H
