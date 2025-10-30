#ifndef FLOOR_H
#define FLOOR_H
#include "Tile.h"


class Floor : public Tile {
    public:
      Floor(int row, int column, std::string texture, Character* character = nullptr) : Tile(row, column, texture, character){};
};



#endif
