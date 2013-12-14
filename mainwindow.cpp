#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList number;  //
    number << "nika"<< "gia";
   for(int i=0; i<number.size(); i++){


       ui->comboBox->addItem(number.at(i));

    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "ინფომრაცია" , ui->comboBox->currentText());
}
