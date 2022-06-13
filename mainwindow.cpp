#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPushButton>
#include <QMessageBox>
#include <QtCore>
#include <QtGui>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Przelicznik składników");

QVBoxLayout *lay = new QVBoxLayout(this);

//można też zrobić pętlą if
   QPushButton *boton = new QPushButton("Wymiar blachy: 36x24");
   QPushButton *boton1 = new QPushButton("Wymiar blachy: 12x24");
   QPushButton *boton2 = new QPushButton("Wymiar blachy: średnica 22");
   QPushButton *boton3 = new QPushButton("Wymiar blachy: keksówka, 31x11");
   QPushButton *boton4 = new QPushButton("Wymiar blachy: 12 babeczek ");
   lay -> addWidget(boton);
   lay -> addWidget(boton1);
   lay -> addWidget(boton2);
   lay -> addWidget(boton3);
   lay -> addWidget(boton4);

   ui->scrollAreaWidgetContents->setLayout(lay);

}




MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
  QMessageBox::StandardButton reply = QMessageBox::question(this, "Zamknij", "Czy na pewno chcesz zamknąć program?", QMessageBox::Yes | QMessageBox::No );
  if(reply ==QMessageBox::Yes)
  {
      QApplication::quit();
  }

}


void MainWindow::on_pushButton_7_clicked()
{

}

