#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QCamera>
#include <QCameraViewfinder>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , camera(nullptr)
{
    ui->setupUi(this);
    camera = new QCamera(this);
    camera->setViewfinder(ui->cameraViewfinder);
    ui->pushButton->setCheckable(true);
    ui->pushButton->setChecked(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked(bool checked)
{
    if(checked){
        ui->pushButton->setText("КАМЕРА ВЫКЛ");
        ui->cameraViewfinder->show();
        camera->start();
    }
    else{
        ui->pushButton->setText("КАМЕРА ВКЛ");
        ui->cameraViewfinder->hide();
        camera->stop();
    }
}

