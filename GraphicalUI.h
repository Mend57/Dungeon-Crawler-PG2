#ifndef DUNGEONCRAWLER_GRAPHICALUI_H
#define DUNGEONCRAWLER_GRAPHICALUI_H
#include "AbstractView.h"
#include <map>
#include <QPixmap>
#include <QDir>
#include <QString>

class GraphicalUI : public AbstractView, public AbstractController{
    private:
        std::map<std::string, QPixmap> characterTextures;
        std::map<std::string, QPixmap> floorTextures;
        std::map<std::string, QPixmap> textures;

    public:
        GraphicalUI();
        void draw(Level *level) override{};
        Input move() override{};
        QPixmap getTexture(const std::string& texture) {return textures[texture];}
        void addFilesToMap(std::map<std::string, QPixmap>& map, const QFileInfoList& fileList);
};


#endif