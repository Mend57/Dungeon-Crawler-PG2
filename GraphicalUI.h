#ifndef DUNGEONCRAWLER_GRAPHICALUI_H
#define DUNGEONCRAWLER_GRAPHICALUI_H
#include "AbstractView.h"
#include <map>
#include <QPixmap>

class GraphicalUI : public AbstractView, public AbstractController{
    public:
        GraphicalUI();
        virtual void draw(Level *level) override;
        virtual Input move() override;
    private:
        std::map<std::string, QPixmap> arrows;
        std::map<std::string, QPixmap> character;
        std::map<std::string, QPixmap> doors;
        std::map<std::string, QPixmap> floor;
        std::map<std::string, QPixmap> portal;
        std::map<std::string, QPixmap> zombie;


};


#endif