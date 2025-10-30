#ifndef CHARACTER_H
#define CHARACTER_H
class Tile;

class Character {
    private:
      Tile* tile;

    public:
      Tile* getTile(){return tile;}
      void setTile(Tile* tile){this->tile = tile;}
};



#endif
