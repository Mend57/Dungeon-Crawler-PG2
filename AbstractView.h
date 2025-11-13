#ifndef DUNGEONCRAWLER_ABSTRACTUI_H
#define DUNGEONCRAWLER_ABSTRACTUI_H
#include "Level.h"
#include <iostream>
#include <set>

class AbstractView {
  protected:
    virtual void draw(Level* level) = 0;
    virtual ~AbstractView() = default;
};

#endif