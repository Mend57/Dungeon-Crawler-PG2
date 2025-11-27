#ifndef DUNGEONCRAWLER_GRAPHICALUI_H
#define DUNGEONCRAWLER_GRAPHICALUI_H
#include "AbstractView.h"
#include <map>
#include <QPixmap>
#include <QDir>
#include <QString>

class GraphicalUI : public AbstractView, public AbstractController{
    public:
        GraphicalUI();
        virtual void draw(Level *level) override{};
        virtual Input move() override{};
        QPixmap getTexture(std::string texture) {return textures[texture];}
        void addFilesToMap(std::map<std::string, QPixmap> map, QFileInfoList fileList);

    private:
        std::map<std::string, QPixmap> characterTextures;
        std::map<std::string, QPixmap> floorTextures;
        std::map<std::string, QPixmap> textures;


};


#endif