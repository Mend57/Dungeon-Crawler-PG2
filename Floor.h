#ifndef FLOOR_H
#define FLOOR_H
#include "Tile.h"


class Floor : public Tile {
    public:
      Floor(const int row, const int column, std::string texture) : Tile(row, column, texture){}
};



#endif
