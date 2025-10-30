#ifndef WALL_H
#define WALL_H
#include "Tile.h"



class Wall : public Tile {
    public:
      Wall(int row, int column, std::string texture, Character* character = nullptr) : Tile(row, column, texture, character){};
};



#endif
