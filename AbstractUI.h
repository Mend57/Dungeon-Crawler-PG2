#ifndef DUNGEONCRAWLER_ABSTRACTUI_H
#define DUNGEONCRAWLER_ABSTRACTUI_H
#include "Level.h"
#include "Input.h"
#include <iostream>
#include <set>

class AbstractUI {
  protected:
    virtual void draw(Level* level) = 0;
    virtual Input move() = 0;
    virtual ~AbstractUI() = default;
};

#endif