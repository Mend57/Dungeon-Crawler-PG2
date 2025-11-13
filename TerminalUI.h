#ifndef TERMINALUI_H
#define TERMINALUI_H
#include "AbstractController.h"
#include "AbstractView.h"

class TerminalUI: public AbstractView, public AbstractController {

  public:
    virtual void draw(Level* level) override;
    virtual Input move() override;
};
#endif
