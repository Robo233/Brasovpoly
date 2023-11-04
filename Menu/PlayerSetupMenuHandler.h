#ifndef PLAYER_SETUP_MENU_HANDLER_H
#define PLAYER_SETUP_MENU_HANDLER_H

#include "../Player.h"

class PlayerSetupMenuHandler
{
public:
    PlayerSetupMenuHandler();
    
    void createPlayerSetupMenu(int numberOfPlayers);
    void selectPlayerSetupMenuInput(sf::RenderWindow& window, sf::Event event);
    void handleEnteredTextSelectPlayerSetupMenu(sf::Event event);
    void activateStartGameButtonIfAllPlayersAreSet();
    void createStartGameButton();
private:
    int initialPositionX;
    int distanceBetweenElementsX;
    int textPositionY;
    int inputFieldPositionY;
    int colorButtonPositionY;
    int colorButtonWidth;
    int colorButtonHeight;
    int inputTextPosition;

    int inputFieldWidth;
    int inputFieldHeight;

    int startGameButtonWidth;
    int startGameButtonHeight;
    int startGameButtonDistanceFromBottom;

    std::string inputString;

    sf::Text inputText;
};


#endif