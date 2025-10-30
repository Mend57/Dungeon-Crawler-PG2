#ifndef LEVEL_H
#define LEVEL_H
#include <vector>
#include "Tile.h"
#include "Character.h"

class Level {
    private:
      std::vector<std::vector<Tile*>> tileMap;
      std::vector<Character*> characters;
      const int height;
      const int width;
      const std::string l = {
          "##########"
          "#O.......#"
          "#........#"
          "#........#"
          "#........#"
          "#........#"
          "##########"
          "#O.......#"
          "#........#"
          "##########"
      };

    public:
      Level(const int height, const int width);
      ~Level();

      int getHeight(){return height;}
      int getWidth(){return width;}
      std::vector<std::vector<Tile*>> getTileMap(){return tileMap;}
      std::vector<Character*> getCharacters(){return characters;}
      Tile* getTile(int row, int column);
      const Tile* getTile(int row, int col) const;
      void placeCharacter(Character *c, int row, int col);

      void addCharacter(Character* character){characters.push_back(character);}
      void removeCharacter(Character* character){std::erase(characters, character);}
};



#endif
