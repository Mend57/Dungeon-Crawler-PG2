#include <iostream>
#include "DungeonCrawler.h"


int main()
{
    TerminalUI* terminalUI = new TerminalUI();
    Level* level = new Level(10,10);
    DungeonCrawler* game = new DungeonCrawler(terminalUI, level);

    terminalUI->draw(level);
    while (game->turn());
}