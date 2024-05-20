#include "widget.h"
#include "ui_widget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Music Player");
    connect(ui->play_button, SIGNAL(clicked()), this, SLOT(homepage_playButton()));

}

void MainWindow::homepage_playButton() {
    ui->song_image->setStyleSheet("font-size: 20px;");
    ui->song_image->setText("Tininiw Tininiw");
}

MainWindow::~MainWindow()
{
    delete ui;
}


