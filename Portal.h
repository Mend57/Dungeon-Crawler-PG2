#ifndef PORTAL_H
#define PORTAL_H
#include "Tile.h"


class Portal : public Tile {
    private:
      Tile* destination;

    public:
      Portal(int row, int column, std::string texture, Tile* destination, Character* character = nullptr) : Tile(row, column, texture, character), destination(destination){};
      Tile* getDestination(){return destination;};

      Tile* onEnter(Tile* fromTile, Character* who) override{
        if (hasCharacter()) return nullptr;
        return destination;
      }
};



#endif
