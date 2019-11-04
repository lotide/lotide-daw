#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->createProjectButton, SIGNAL (released()), this, SLOT (createProject()));
    connect(ui->openProjectButton, SIGNAL (released()), this, SLOT (openProject()));
}

void MainWindow::openProject() {
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Project"), "", tr("Project Files (*.tide)"));

    //TODO: uncompress, initialize project from file

    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::createProject() {
    //TODO: create blank project

    ui->stackedWidget->setCurrentIndex(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

