#ifndef PLAYER_COUNT_SELECTION_MENU_HANDLER_H
#define PLAYER_COUNT_SELECTION_MENU_HANDLER_H

#include <SFML/Graphics.hpp>
#include "../UI/Button.h"



class PlayerCountSelectionMenuHandler
{
public:
    PlayerCountSelectionMenuHandler();

    void createPlayerCountSelectionMenu();
    void playerCountSelectionButtonsEventHandler(sf::RenderWindow& window);
private:
    int maximumNumberOfPlayers;
    int playerCountSelectionButtonInitialPositionY;
    int playerCountSelectionButtonDistanceBetweenButtonsY;
    int playerCountSelectionTextPositionY;
    int playerCountSelectionTextCharacterSize;

    int tutorialButtonPadding;
    int tutorialButtonSize;

    std::vector<Button*> playerCountSelectionButtons;

    sf::Texture tutorialButtonTexture;
};

#endif