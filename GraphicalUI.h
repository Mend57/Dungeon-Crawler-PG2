#ifndef DUNGEONCRAWLER_GRAPHICALUI_H
#define DUNGEONCRAWLER_GRAPHICALUI_H
#include "AbstractView.h"
#include <map>
#include <QPixmap>
#include <QDir>
#include <QString>
#include <QLabel>
#include "StartScreen.h"
#include "MainWindow.h"

class MainWindow;
class StartScreen;

class GraphicalUI : public AbstractView, public AbstractController{
    private:
        std::map<std::string, QPixmap> characterTextures;
        std::map<std::string, QPixmap> floorTextures;
        std::map<std::string, QPixmap> textures;
        StartScreen* startScreen;
        MainWindow* mainWindow;

    public:
        GraphicalUI();
        void draw(Level *level) override{};
        Input move() override{};
        QPixmap getTexture(const std::string& texture) {return textures[texture];}
        QPixmap getFloorTexture(const std::string& texture) {return floorTextures[texture];}
        QPixmap getCharacterTexture(const std::string& texture) {return characterTextures[texture];}
        void addFilesToMap(std::map<std::string, QPixmap>& map, const QFileInfoList& fileList);
        void switchWindow();

};


#endif