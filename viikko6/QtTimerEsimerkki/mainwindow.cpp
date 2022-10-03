#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pmittari = new mittari(this);
    connect(this, SIGNAL(begin()), pmittari, SLOT(beginSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pmittari;
}


void MainWindow::on_start_clicked()
{
    qDebug()<<"Nappia painettu, lahetan begin signaalin";
    emit begin();
}

