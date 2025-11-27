#include "GraphicalUI.h"



GraphicalUI::GraphicalUI() {
    QDir dirTextures("../textures");
    QDir dirChar("../textures/char");
    QDir dirFloor("../textures/floor");
    QStringList filters;
    filters << "*.png";

    dirTextures.setNameFilters(filters);
    dirChar.setNameFilters(filters);
    dirFloor.setNameFilters(filters);

    addFilesToMap(textures, dirTextures.entryInfoList());
    addFilesToMap(characterTextures, dirChar.entryInfoList());
    addFilesToMap(floorTextures, dirFloor.entryInfoList());

    startScreen = new StartScreen(this);
    mainWindow = new MainWindow(this);

    startScreen->show();
}

void GraphicalUI::addFilesToMap(std::map<std::string, QPixmap>& map, const QFileInfoList& fileList) {
    for (const QFileInfo &fileInfo : fileList) {
        QString name = fileInfo.baseName();
        QPixmap pixmap(fileInfo.filePath());
        if (!pixmap.isNull()) {
            map[name.toStdString()] = pixmap;
        }
    }
}

void GraphicalUI::switchWindow()
{
    startScreen->hide();
    mainWindow->show();
}

