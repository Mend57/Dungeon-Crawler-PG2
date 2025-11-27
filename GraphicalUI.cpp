#include "GraphicalUI.h"

#include <map>
#include <QLabel>

GraphicalUI::GraphicalUI() {
    QDir dirTextures("/home/mend/Documents/C++ Projects/PGII/DungeonCrawler/textures");
    QDir dirChar("/home/mend/Documents/C++ Projects/PGII/DungeonCrawler/textures/char");
    QDir dirFloor("/home/mend/Documents/C++ Projects/PGII/DungeonCrawler/textures/floor");
    QStringList filters;
    filters << "*.png";

    dirTextures.setNameFilters(filters);
    dirChar.setNameFilters(filters);
    dirFloor.setNameFilters(filters);

    addFilesToMap(textures, dirTextures.entryInfoList());
    addFilesToMap(textures, dirChar.entryInfoList());
    addFilesToMap(textures, dirFloor.entryInfoList());
}

void GraphicalUI::addFilesToMap(std::map<std::string, QPixmap> map, QFileInfoList fileList) {
    for (const QFileInfo &fileInfo : fileList) {
        QString name = fileInfo.baseName();
        QPixmap pixmap(fileInfo.filePath());
        if (!pixmap.isNull()) {
            map[name.toStdString()] = pixmap;
        }
    }
}

