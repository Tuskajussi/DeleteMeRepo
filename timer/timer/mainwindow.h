#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void handleTimeout();
private slots:
    void on_reset_clicked();

    void on_pushButton_clicked();

signals:
    void stopProgram();

private:
    Ui::MainWindow *ui;
    QTimer * pQTimer;
    short h,m,s;
    void reset();
};
#endif // MAINWINDOW_H
