#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "outputwindow.h"
#include "youtubedl.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    YoutubeDL *ytdl = new YoutubeDL();
    QString output = ytdl->getUrl(this->ui->videoUrlEdit->text());
    OutputWindow *outputWindow = new OutputWindow();
    outputWindow->setText(output);
    outputWindow->show();
}