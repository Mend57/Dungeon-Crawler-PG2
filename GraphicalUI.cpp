#include "GraphicalUI.h"

GraphicalUI::GraphicalUI() {
    QDir dirTextures("/home/mend/Documents/C++ Projects/PGII/DungeonCrawler/textures");
    QDir dirChar("/home/mend/Documents/C++ Projects/PGII/DungeonCrawler/textures/char");
    QDir dirFloor("/home/mend/Documents/C++ Projects/PGII/DungeonCrawler/textures/floor");
    QStringList filters;
    filters << "*.png";
    dirTextures.setNameFilters(filters);

    QFileInfoList fileList = dirTextures.entryInfoList();

    for (const QFileInfo &fileInfo : fileList) {
        QString name = fileInfo.baseName();
        QPixmap pixmap(fileInfo.filePath());
        if (!pixmap.isNull()) {
            textures[name.toStdString()] = pixmap;
        }
    }

}
