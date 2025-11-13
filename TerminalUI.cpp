#include "TerminalUI.h"

void TerminalUI::draw(Level* level) {
    for (int i = 0; i < level->getHeight(); i++) {
        for (int j = 0; j < level->getWidth(); j++) {
            Tile* tile = level->getTile(i, j);
            std::cout << (tile->hasCharacter() ? "X" : tile->getTexture());
        }
        std::cout << "\n";
    }
}

Input TerminalUI::move() {
    char input;
    bool valid;
    const std::set<char> validInputs = {'w', 'a', 's', 'd', '0'};

    std::cout << "Press (w, a, s, d) to move or 0 to exit:" << std::endl;
    do{
        std::cin >> input;
        input = tolower(input);
        valid = validInputs.find(input) != validInputs.end();
        if (!valid) std::cerr << "Invalid input." << std::endl;
    }while (!valid);

    switch (input) {
    case 'w':
        return Input(0, -1);
    case 'a':
        return Input(-1, 0);
    case 's':
        return Input(0, 1);
    case 'd':
        return Input(1, 0);
    case '0':
        return Input(true);
    default: return Input(false);
    }
}