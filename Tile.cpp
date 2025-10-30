#include "Tile.h"
#include "Portal.h"

std::pair<bool, Tile*> Tile::onEnter(Character* who){
  bool canEnter = true;
  Portal* destPortal = dynamic_cast<Portal*>(this);
  bool isPortal = destPortal != nullptr;
  if(isPortal) {
    if (destPortal->hasCharacter()) canEnter = false;
  }

  if (this->getTexture() == "#") canEnter = false;
  return {canEnter, (isPortal ? destPortal->getDestination() : nullptr)};
}

bool Tile::onLeave(Tile* destTile, Character* who){
  if (!hasCharacter() || character != who || destTile == nullptr || destTile->hasCharacter()) return false;
  return true;
}

bool Tile::moveTo(Tile* destTile, Character* who){
  if(onLeave(destTile, who) == false) return false;
  std::pair<bool, Tile*> tileEntered = onEnter(who);
  if(tileEntered.first == false) return false;
  Tile* destinationTile = tileEntered.second != nullptr ? tileEntered.second : destTile;

  this->character = nullptr;
  (destinationTile)->character = who;
  who->setTile(destinationTile);
  return true;
}
