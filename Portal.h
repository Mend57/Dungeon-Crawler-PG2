#ifndef PORTAL_H
#define PORTAL_H
#include "Tile.h"


class Portal : public Tile {
    private:
      Tile* destination;

    public:
      Portal(const int row, const int column, std::string texture, Tile* destination) : Tile(row, column, texture), destination(destination){}
      Tile* getDestination(){return destination;}
      void setDestination(Tile* destination){this->destination = destination;}
};



#endif
