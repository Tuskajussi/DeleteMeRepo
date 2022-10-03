#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    h=0;
    m=0;
    s=0;
    pQTimer = new QTimer;

    connect(pQTimer, SIGNAL(timeout()),this, SLOT(handleTimeout()));
    //lähde eli timerin osote, signaali ja mitä tarkkaillaan, kohde mihin lähetetään eli vastaanottaja ja sit lopulta funktio jota käytetään tai vastaanottava funktio

    pQTimer->start(100);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
    delete pQTimer;
    pQTimer = nullptr;
}

void MainWindow::handleTimeout()
{
    s++;
    if(s==60){
        s=0;
        m++;
        if(m==60){
            m=0;
            h++;
            if(h==24){
                h=0;;
            }
        }
    }
    ui->seconds->setText(QString::number(s));
    ui->minutes->setText(QString::number(m));
    ui->hours->setText(QString::number(h));
}

void MainWindow::reset(){
    s=0;
    m=0;
    h=0;
}

void MainWindow::on_reset_clicked()
{
    reset();
}


void MainWindow::on_pushButton_clicked()
{
    emit stopProgram();
    //connect(&w, SIGNAL(), &a, SLOT(quit));
}

