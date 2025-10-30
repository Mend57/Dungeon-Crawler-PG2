#ifndef DUNGEONCRAWLER_ABSTRACTUI_H
#define DUNGEONCRAWLER_ABSTRACTUI_H
#include "Level.h"
#include <iostream>

class AbstractUI {
    virtual void draw(Level* level) {
        for (int i = 0; i < level->getHeight(); i++) {
            std::cout << "\n";
            for (int j = 0; j < level->getWidth(); j++) {
                std::cout << level->getTile(i,j)->getTexture();
            }
        }
    }
};


#endif