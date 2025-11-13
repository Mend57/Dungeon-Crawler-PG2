#ifndef DUNGEONCRAWLER_PIT_H
#define DUNGEONCRAWLER_PIT_H
#include "Tile.h"

class Pit : public Tile {
    public:
        Pit(const int row, const int column) : Tile(row, column, "_"){}
        bool onLeave(Tile* destTile, Character* who) override{
            if (!hasCharacter() || getCharacter() != who || destTile == nullptr || destTile->hasCharacter()) return false;
            if (destTile->getTexture() == "<") return true;
            return false;
        }

};

#endif