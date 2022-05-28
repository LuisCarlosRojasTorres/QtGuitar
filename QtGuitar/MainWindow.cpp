#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QString version, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , version(version)
{
    ui->setupUi(this);
    setWindowTitle(QString("QtGuitar " + version));

    ui->comboBox_notes->addItem(QString("C"));
    ui->comboBox_notes->addItem(QString("D"));
    ui->comboBox_notes->addItem(QString("E"));
    ui->comboBox_notes->addItem(QString("F"));
    ui->comboBox_notes->addItem(QString("G"));
    ui->comboBox_notes->addItem(QString("A"));
    ui->comboBox_notes->addItem(QString("B"));

    ui->comboBox_scales->addItem(QString("Major"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


