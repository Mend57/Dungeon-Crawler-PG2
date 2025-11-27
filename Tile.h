#ifndef TILE_H
#define TILE_H
#include <iostream>
#include <utility>
#include "Character.h"

class Tile {
  private:
    Character* character;
    const int row;
    const int column;
    std::string texture;

  protected:
    Tile(const int row, const int column, std::string texture) : character(nullptr), row(row), column(column), texture(std::move(texture)){}

  public:
    virtual ~Tile() = default;
    std::string getTexture(){return texture;}
    Character* getCharacter(){return character;}
    int getRow() const{return row;}
    int getColumn() const{return column;}
    void setCharacter(Character* character){this->character = character;}
    void setTexture(std::string texture){this->texture = std::move(texture);}
    bool hasCharacter(){return character != nullptr;}

    virtual std::pair<bool, Tile*> onEnter(Character* who) = 0;
    virtual bool onLeave(Tile* destTile, Character* who);
    bool moveTo(Tile* destTile, Character* who);
};



#endif
