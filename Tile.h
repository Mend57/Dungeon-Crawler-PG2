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


  protected:
    Tile(const int row, const int column, std::string texture) : row(row), column(column), texture(texture), character(nullptr){}

  public:
    virtual ~Tile() = default;
    std::string getTexture(){return texture;};
    Character* getCharacter(){return character;};
    int getRow(){return row;};
    int getColumn(){return column;};
    void setCharacter(Character* character){this->character = character;};
    bool hasCharacter(){return character != nullptr;};

    std::pair<bool, Tile*> onEnter(Character* who);
    bool onLeave(Tile* destTile, Character* who);
    bool moveTo(Tile* destTile, Character* who);
};



#endif
