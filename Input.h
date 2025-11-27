#ifndef INPUT_H
#define INPUT_H

class Input{
  public:
    Input(int dx, int dy) : dx(dx), dy(dy), exit(false){};
    Input(int exit) : dx(0), dy(0), exit(exit){};

    int getExit() const{return exit;}
    int getDx() const{return dx;}
    int getDy() const{return dy;}

    private:
        int dx;
        int dy;
        int exit;
};

#endif
