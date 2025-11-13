#ifndef DUNGEONCRAWLER_SWITCH_H
#define DUNGEONCRAWLER_SWITCH_H
#include "Active.h"
#include "Tile.h"

class Switch : public Tile, public Active {
  public:
    Switch(const int row, const int column) : Tile(row, column, "?"){}
    std::pair<bool, Tile*> onEnter(Character* who) override {
        activate();
        return {true, nullptr};
    }

};
#endif