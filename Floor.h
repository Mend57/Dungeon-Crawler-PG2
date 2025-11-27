#ifndef FLOOR_H
#define FLOOR_H
#include "Tile.h"


class Floor : public virtual Tile{
public:
    Floor(const int row, const int column) : Tile(row, column, "."){}
    std::pair<bool, Tile*> onEnter(Character* who) override{return {true, nullptr};}
};


#endif
