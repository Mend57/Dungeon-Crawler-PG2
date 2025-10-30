#include "Tile.h"
#include "Portal.h"

Tile* Tile::onEnter(Tile* fromTile, Character* who){
  if (hasCharacter() || this->getTexture() == "#") return nullptr;
  return this;
}

Tile* Tile::onLeave(Tile* destTile, Character* who){
  if (!hasCharacter() || character != who || destTile == nullptr) return nullptr;
  return this;
}

bool Tile::moveTo(Tile* destTile, Character* who){
  Portal* destPortal = dynamic_cast<Portal*>(destTile);

  Tile* tileLeaved = onLeave(destTile, who);
  if(tileLeaved == nullptr) return false;

  Tile* tileEntered = onEnter(tileLeaved, who);
  if(tileEntered == nullptr) return false;

  this->character = nullptr;
  destTile->character = who;
  who->setTile(destPortal != nullptr ? destPortal->getDestination() : destTile);
  return true;
}
