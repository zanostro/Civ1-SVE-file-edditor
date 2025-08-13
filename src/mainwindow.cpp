#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListWidget>
#include <QStackedWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Wire left nav -> stacked pages (navigation switching in C++)
    connect(ui->navList, &QListWidget::currentRowChanged,
            ui->stack,   &QStackedWidget::setCurrentIndex);

    ui->navList->setCurrentRow(0);  // default page
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::onNavChanged(int row) {
    // If you prefer a manual slot, you can connect to this instead.
    if (row >= 0 && row < ui->stack->count())
        ui->stack->setCurrentIndex(row);
}
