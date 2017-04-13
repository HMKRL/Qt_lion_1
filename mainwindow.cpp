#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QString>

#include <iostream>
#include <unistd.h>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    testClass(new TestSignalSlot)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), testClass, SLOT(button_pressed()));

    connect(testClass, SIGNAL(full()), this, SLOT(testClassFull()));
    connect(testClass, SIGNAL(counter_changed(int)), this, SLOT(testClassChanged(int)));

    QString s("Balwisyall Nescell gungnir tron");
    //cout << s << endl; this will cause compile error!
    qDebug() << s;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete testClass;
}

void MainWindow::on_pushButton_clicked()
{
    sleep(1);
    ui->progressBar->setValue(ui->progressBar->value() + 10);
}

void MainWindow::testClassFull()
{
    cout << "Full" << endl;
}

void MainWindow::testClassChanged(int i)
{
    cout << "button pressed " << i << " times." << endl;
}
