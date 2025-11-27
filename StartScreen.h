#ifndef DUNGEONCRAWLER_STARTSCREEN_H
#define DUNGEONCRAWLER_STARTSCREEN_H

#include <QDialog>


QT_BEGIN_NAMESPACE

namespace Ui {
    class StartScreen;
}

QT_END_NAMESPACE

class StartScreen : public QDialog {
    Q_OBJECT

public:
    explicit StartScreen(QWidget *parent = nullptr);

    ~StartScreen() override;

private:
    Ui::StartScreen *ui;
};


#endif //DUNGEONCRAWLER_STARTSCREEN_H