#ifndef DUNGEONCRAWLER_H
#define DUNGEONCRAWLER_H

#include "TerminalUI.h"

class DungeonCrawler {
  private:
    TerminalUI* terminalUI;
    Level* level;

  public:
    DungeonCrawler(TerminalUI* terminalUI, Level* level) : terminalUI(terminalUI), level(level) {};

    bool turn(){
      for(Character* character : level->getCharacters()){
        Input input = character->getController()->move();
        if(input.getExit() == true) return false;

        Tile* currentTile = character->getTile();
        Tile* destTile = level->getTile(currentTile->getRow()+input.getDy(), currentTile->getColumn()+input.getDx());
        currentTile->moveTo(destTile, character);

        terminalUI->draw(level);
        return true;
      }
    }

};



#endif
