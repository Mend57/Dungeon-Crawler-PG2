#ifndef WALL_H
#define WALL_H
#include "Tile.h"



class Wall : public Tile {
    public:
      Wall(const int row, const int column, std::string texture) : Tile(row, column, texture){};
};



#endif
