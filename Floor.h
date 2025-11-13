#ifndef FLOOR_H
#define FLOOR_H
#include "Tile.h"


class Floor : public Tile {
    public:
      Floor(const int row, const int column) : Tile(row, column, "."){}
};



#endif
