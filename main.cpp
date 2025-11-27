#include <iostream>
#include <QApplication>
#include <QLabel>
#include "DungeonCrawler.h"
#include "GraphicalUI.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv); // <-- precisa estar antes de criar QPixmap

    TerminalUI* terminalUI = new TerminalUI();
    Level* level = new Level(10,10);
    DungeonCrawler* game = new DungeonCrawler(terminalUI, level);

    terminalUI->draw(level);
    while (game->turn());

}
