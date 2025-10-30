#ifndef TILE_H
#define TILE_H
#include <iostream>
#include "Character.h"

class Tile {
  private:
    Character* character;
    std::string texture;
    const int row;
    const int column;

  public:
    Tile(int row, int column, std::string texture, Character* character = nullptr) : row(row), column(column), texture(texture), character(character){};

    std::string getTexture(){return texture;};
    Character* getCharacter(){return character;};
    int getRow(){return row;};
    int getColumn(){return column;};
    void setCharacter(Character* character){this->character = character;};
    bool hasCharacter(){return character != nullptr;};

    virtual Tile* onEnter(Tile* fromTile, Character* who);
    Tile* onLeave(Tile* destTile, Character* who);

    bool moveTo(Tile* destTile, Character* who);
};



#endif
