#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Sender *data_sender=new Sender();

    Receiver data_receiver(data_sender);

    emit data_sender->signalDataEvent("Hello World.");
}

MainWindow::~MainWindow()
{
    delete ui;
}
