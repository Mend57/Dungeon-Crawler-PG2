#ifndef DUNGEONCRAWLER_ACTIVE_H
#define DUNGEONCRAWLER_ACTIVE_H
#include <vector>

#include "Passive.h"

class Active {
  private:
    std::vector<Passive*> passiveObjects;

  public:
    std::vector<Passive*> getPassiveObject(){return passiveObjects;}
    void attach(Passive* passiveObject) {
      for (Passive* passiveObj : passiveObjects) if (passiveObj == passiveObject) return;
      passiveObjects.push_back(passiveObject);
    }
    void detach(Passive* passiveObject){std::erase(passiveObjects, passiveObject);}
    void activate(){for (Passive* passiveObject : passiveObjects) passiveObject->notify();
 }
};

#endif
