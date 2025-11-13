#ifndef PORTAL_H
#define PORTAL_H
#include "Tile.h"


class Portal : public Tile {
    private:
      Tile* destination;

    public:
      Portal(const int row, const int column, Tile* destination) : Tile(row, column, "O"), destination(destination){}
      Tile* getDestination(){return destination;}
      void setDestination(Tile* destination){this->destination = destination;}
      std::pair<bool, Tile*> onEnter(Character* who) override {
          return {!(destination->hasCharacter()), destination};
      }
};



#endif
