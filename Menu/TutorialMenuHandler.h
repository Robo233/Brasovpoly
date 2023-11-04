#ifndef TUTORIAL_MENU_HANDLER_H
#define TUTORIAL_MENU_HANDLER_H

#include <SFML/Graphics.hpp>
#include "../Gameplay/GameplayHandler.h"

class TutorialMenuHandler
{
    int ruleTextCharacterSize;
    int ruleTextInitialPositionY;
    int distanceBetweenRuleTextsY;

    int tutorialTitlePositionY;
    int tutorialTextCharacterSize;

    GameplayHandler gameplayHandler;

    std::vector<std::string> rules;
public:
    TutorialMenuHandler();

    void tutorialButtonEventHandler(sf::RenderWindow& window);
    void createTutorialMenu();
};



#endif