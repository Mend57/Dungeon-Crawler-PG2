#ifndef DUNGEONCRAWLER_DOOR_H
#define DUNGEONCRAWLER_DOOR_H
#include "Active.h"
#include "Tile.h"

class Door : public Tile, public Passive {
  private:
    bool isDoorOpen;

  public:
    Door(const int row, const int column) : Tile(row, column, "X"), isDoorOpen(false){}
    void notify() override {
      isDoorOpen = !isDoorOpen;
      setTexture(isDoorOpen ? "/" : "X");
    }
    bool isOpen() {return isDoorOpen;}
    std::pair<bool, Tile*> onEnter(Character* who) override {
      if (getTexture() == "X") return {false, nullptr};
      return {true, nullptr};
    }


};

#endif