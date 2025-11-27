#include <iostream>
#include <QApplication>
#include <QLabel>
#include "DungeonCrawler.h"
#include "GraphicalUI.h"
#include <QScreen>

int main(int argc, char* argv[])
{
    auto* terminalUI = new TerminalUI();

    auto* level = new Level(10, 10);

    auto* game = new DungeonCrawler(terminalUI, level);


    terminalUI->draw(level);

    while (game->turn());
}

