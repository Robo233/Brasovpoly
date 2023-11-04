#ifndef PLAYER_COLOR_SELECTOR_H
#define PLAYER_COLOR_SELECTOR_H

#include <SFML/Graphics.hpp>
#include "../UI/Button.h"
#include "../UI/UIText.h"
#include "../Player.h"

class PlayerColorSelector
{
public:
    PlayerColorSelector();

    void createColorSelectorMenu();
    void colorButtonEventHandler(sf::RenderWindow& window);
    void colorSelectorButtonEventHandler(sf::RenderWindow& window);
private:
    int numberOfColumns;
    int distanceBetweenElements;
    int colorSelectorButtonWidth;
    int colorSelectorButtonHeight;
    int colorSelectorButtonPositionX;
    int colorSelectorButtonInitialPositionY;
    int colorSelectorButtonPositionY;

    int playerColorSelectorTextPositionY;
    int playerColorSelectorTextCharacterSize;

    std::vector<Button*> colorSelectorButtons;

    UIText* playerColorSelectorText;

    Player* currentPlayer;

    Button* previousColorSelectorButton = nullptr;
};

#endif