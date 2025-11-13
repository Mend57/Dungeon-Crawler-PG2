#ifndef DUNGEONCRAWLER_RAMP_H
#define DUNGEONCRAWLER_RAMP_H
#include "Tile.h"

class Ramp : public Tile {
    public:
      Ramp(const int row, const int column) : Tile(row, column, "<"){}
};

#endif