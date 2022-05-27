#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QString version, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , version(version)
{
    ui->setupUi(this);
    setWindowTitle(QString("QtGuitar " + version));
}

MainWindow::~MainWindow()
{
    delete ui;
}


