#ifndef INPUT_H
#define INPUT_H

class Input{
  private:
    int dx;
    int dy;
    int exit;

  public:
    Input(int dx, int dy) : dx(dx), dy(dy), exit(false){};
    Input(int exit) : dx(0), dy(0), exit(exit){};

    int getExit(){return exit;}
    int getDx(){return dx;}
    int getDy(){return dy;}

};

#endif
