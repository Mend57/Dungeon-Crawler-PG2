#ifndef DUNGEONCRAWLER_H
#define DUNGEONCRAWLER_H

#include "TerminalUI.h"

class DungeonCrawler {
  public:
    DungeonCrawler(AbstractView* abstractView, Level* level) : abstractView(abstractView), level(level) {}

    bool turn(){
      for(Character* character : level->getCharacters()){
        Input input = character->getController()->move();
        if(input.getExit() == true) return false;

        Tile* currentTile = character->getTile();
        Tile* destTile = level->getTile(currentTile->getRow()+input.getDy(), currentTile->getColumn()+input.getDx());
        currentTile->moveTo(destTile, character);

        abstractView->draw(level);
        return true;
      }
    }

  private:
    AbstractView* abstractView;
    Level* level;

};



#endif
