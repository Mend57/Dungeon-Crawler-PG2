#include "StartScreen.h"
#include "ui_StartScreen.h"


StartScreen::StartScreen(QWidget *parent) : QDialog(parent), ui(new Ui::StartScreen) {
    ui->setupUi(this);
}

StartScreen::~StartScreen() {
    delete ui;
}