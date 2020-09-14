#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Board.h"
#include "pve.h"
#include<QtWidgets>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("登录界面");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_PVP_clicked()
{
    Board * board=new Board();
    QPushButton *renshu=new QPushButton(board);
    QPushButton *qiuhe=new QPushButton(board);
    renshu->setText(tr("认输"));
    qiuhe->setText("求和");
    renshu->resize(300,100);
    qiuhe->resize(300,100);
    qiuhe->move(1100,200);
    renshu->move(1100,800);
    board->show();


}

void MainWindow::on_PVE_clicked()
{
    pve *board=new pve();
    QPushButton *renshu=new QPushButton(board);
    renshu->setText(tr("认输"));
    renshu->resize(300,100);
    renshu->move(1100,800);
    board->show();
}

void MainWindow::on_EVE_clicked()
{

}

void MainWindow::on_Internet_clicked()
{

}

void MainWindow::on_quitGame_clicked()
{
    QApplication::quit();
}

