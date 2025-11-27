#include "GraphicalUI.h"

GraphicalUI::GraphicalUI() {
    QDir dir(":/textures");
    QStringList filters;
    filters << "*.png";
    dir.setNameFilters(filters);

    QFileInfoList fileList = dir.entryInfoList();

    for (const QFileInfo &fileInfo : fileList) {
        QString name = fileInfo.baseName();
        QPixmap pixmap(fileInfo.filePath());
        if (!pixmap.isNull()) {
            textures[name.toStdString()] = pixmap;
        }
    }
    std::cout << "Total textures loaded: " << textures.size() << std::endl;
}
