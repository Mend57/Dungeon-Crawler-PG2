#ifndef CHARACTER_H
#define CHARACTER_H
class Tile;

class Character {
    private:
      Tile* tile;

    public:
      Character(Tile* tile) : tile(tile) {}
      Tile* getTile(){return tile;}
      void setTile(Tile* tile){this->tile = tile;}
};



#endif
