//
// Created by mend on 27.11.25.
//

// You may need to build the project (run Qt uic code generator) to get "ui_StartScreen.h" resolved

#include "StartScreen.h"
#include "ui_StartScreen.h"


StartScreen::StartScreen(QWidget *parent) : QDialog(parent), ui(new Ui::StartScreen) {
    ui->setupUi(this);
}

StartScreen::~StartScreen() {
    delete ui;
}