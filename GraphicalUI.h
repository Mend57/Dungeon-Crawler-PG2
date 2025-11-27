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
        std::map<std::string, QPixmap> textures;


};


#endif