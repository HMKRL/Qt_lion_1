#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "testsignalslot.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void testClassFull();
    void testClassChanged(int i);

private:
    Ui::MainWindow *ui;
    TestSignalSlot *testClass;
};

#endif // MAINWINDOW_H
