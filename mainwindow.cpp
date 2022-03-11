#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/home/ahmadkybora/App/qt_projects/img/1.jpeg");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    ui->statusbar->addPermanentWidget(ui->label_3, 1);
    ui->statusbar->addPermanentWidget(ui->progressBar, 3);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "ahmad" && password == "123456"){
//        QMessageBox::information(this, "Login", "ok");
//        dialog = new Dialog(this);
//        dialog->show();
        ui->statusbar->showMessage("Username and Password is Correct", 5000);
        ui->label_3->setText("Username and Password is Correct");

    } else {
//        QMessageBox::information(this, "cant", "no");
        ui->statusbar->showMessage("Username and Password is Correct", 5000);
        ui->label_3->setText("Username and Password is Correct");
    }
}
