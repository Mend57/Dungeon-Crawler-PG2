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

    return app.exec();
}

