#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer;
    timer->start(100);
    QObject::connect(ui->Create_notch_button,SIGNAL(clicked()),this,SLOT(create_notch()));
    QObject::connect(ui->Delete_list1_button,SIGNAL(clicked()),this,SLOT(delete_list_n()));
    QObject::connect(ui->Run_button,SIGNAL(clicked()),this,SLOT(run_process()));
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(check()));
    QObject::connect(ui->delete_b,SIGNAL(clicked()),this,SLOT(delete_notches()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::create_notch()
{
    if(ui->Round_but_R->isChecked())
        list_for_notches.append(new Round_holes(ui->Size_text->text()));
    if(ui->Square_button_R->isChecked())
        list_for_notches.append(new Square_holes(ui->Size_text->text()));
    if(ui->Groove_but_R->isChecked())
        list_for_notches.append(new groove(ui->Size_text->text()));
    show_notches();
}

void MainWindow::show_notches()
{
    ui->Notch_list->clear();
    for(int i=0;i<list_for_notches.size();i++)
    {
        if(list_for_notches[i]->get_type()==1)
            ui->Notch_list->append("You need to drill a round hole, R = "+QString::number(list_for_notches[i]->get_size())+"\n");
        if(list_for_notches[i]->get_type()==2)
            ui->Notch_list->append("You need to chisel a square hole,R = "+QString::number(list_for_notches[i]->get_size())+"\n");
        if(list_for_notches[i]->get_type()==3)
            ui->Notch_list->append("You nedd to mill a groove, R = "+QString::number(list_for_notches[i]->get_size())+"\n");
    }
}

void MainWindow::delete_list_n()
{
    list_for_notches.clear();
    ui->Action_list->clear();
    ui->Notch_list->clear();
}

void MainWindow::run_process()
{
    ui->Action_list->clear();
    for(int i=0;i<list_for_notches.size();i++)
    {
        if(list_for_notches[i]->get_type()==1)
            ui->Action_list->append(the_machine.drill()+"\n");
        if(list_for_notches[i]->get_type()==2)
            ui->Action_list->append(the_machine.chisel()+"\n");
        if(list_for_notches[i]->get_type()==3)
            ui->Action_list->append(the_machine.mill()+"\n");
    }

}

void MainWindow::check()
{
    if(ui->Size_text->text()=="")
        ui->Create_notch_button->setDisabled(true);
    else
        ui->Create_notch_button->setEnabled(true);
    QRegExp check_delete("\\d*");
    if(ui->delete_number->text()==""||!check_delete.exactMatch(ui->delete_number->text())||list_for_notches.size()==0||list_for_notches.size()<ui->delete_number->text().toInt())
        ui->delete_b->setDisabled(true);
    else
        ui->delete_b->setEnabled(true);
}

void MainWindow::delete_notches()
{
    list_for_notches.removeAt(ui->delete_number->text().toInt()-1);
    show_notches();
}
