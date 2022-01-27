#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QFont>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>
#include <QTimer>
#include <QLCDNumber>

class mywindow : public QWidget
{
    Q_OBJECT
private:
    QTimer * timer;
    QPushButton * btnStart;
    QLCDNumber *lcd;
    QPushButton * btnre;
    int second;
public:
    mywindow();
public slots:
    void time();
    void start();
    void re();
};

#endif // MYWINDOW_H
