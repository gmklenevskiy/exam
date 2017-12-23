#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "holes.h"
#include "holes.h"
#include "groove.h"
#include "round_holes.h"
#include "square_holes.h"
#include "QList"
#include "machine.h"
#include "QTimer"
#include "QList"


#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void create_notch();
    void show_notches();
    void delete_list_n();
    void run_process();
    void check();
    void delete_notches();

    
private:
    Ui::MainWindow *ui;
    QList<Holes*> list_for_notches;
    Machine the_machine;
    QTimer *timer;
};

#endif // MAINWINDOW_H
