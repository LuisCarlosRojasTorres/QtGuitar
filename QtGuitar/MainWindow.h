#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "Scale.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QString version,QWidget *parent = nullptr);
    ~MainWindow();

    void setComboBoxNotes();
    void setComboBoxScales();

private:
    Ui::MainWindow *ui;
    QString version;

    std::vector<int> majorArray = {0,2,4,5,7,9,11};
    Scale scale = Scale("F", majorArray);

};
#endif // MAINWINDOW_H
