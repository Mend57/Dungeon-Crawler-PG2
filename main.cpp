#include <iostream>
#include <QApplication>
#include <QLabel>
#include "DungeonCrawler.h"
#include "GraphicalUI.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Level* level = new Level(10, 10);
    GraphicalUI* gui = new GraphicalUI();
    DungeonCrawler* game = new DungeonCrawler(gui, level);

    QLabel label;
    label.setWindowTitle("QPixmap Example");
    QPixmap pixmap = gui->getTexture("startscreen");
    if(pixmap.isNull()) {
        pixmap = QPixmap(400, 300);
        pixmap.fill(Qt::red);

        QLabel *errorLabel = new QLabel("Imagem não encontrada!", &label);
        errorLabel->setAlignment(Qt::AlignCenter);
        errorLabel->setStyleSheet("color: white; font-size: 16px;");
    }
    label.setPixmap(pixmap);
    label.show();

    return app.exec();
}

