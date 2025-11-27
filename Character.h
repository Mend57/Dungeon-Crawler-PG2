#ifndef CHARACTER_H
#define CHARACTER_H
#include "AbstractController.h"
class Tile;

class Character {
    public:
      Character(Tile* tile, AbstractController* controller) : tile(tile), controller(controller) {}
      virtual ~Character() = default;
      Tile* getTile(){return tile;}
      void setTile(Tile* tile){this->tile = tile;}
      AbstractController* getController(){return controller;}

    private:
        Tile* tile;
        AbstractController* controller;
};



#endif
