#include <iostream>
#include "TutorialMenuHandler.h"
#include "../Globals.h"
#include "../UI/Button.h"
#include "../UI/UIText.h"

TutorialMenuHandler::TutorialMenuHandler()
{
    ruleTextCharacterSize = 25;
    ruleTextInitialPositionY = 200;
    distanceBetweenRuleTextsY = 40;

    tutorialTitlePositionY = 100;
    tutorialTextCharacterSize = 45;

    GameplayHandler gameplayHandler;

    rules =
    {
    "-Select the number of players",
    "-After selecting the number of players, choose a name and a color for each. A default color is already set for convenience",
    "-Each player must have a unique name and a unique color",
    "-A player's name cannot be empty",
    "-Once all players are set, press the 'Start Game' button",
    "-Each player can roll the dice when it's their turn",
    "-If a player lands on an unowned property, they can choose to buy it or not",
    "-If a player lands on a property that is already owned, they must pay " + std::to_string(gameplayHandler.getPercentOfPropertyPriceWhichHasToBePaidWhenPropertyIsVisited()) + "% of the property's initial value",
    "-A player who runs out of money is eliminated from the game",
    "-The game continues until only one player remains"
    
    };   
}


void TutorialMenuHandler::tutorialButtonEventHandler(sf::RenderWindow& window)
{
    if(globals.getTutorialButton()->isMouseOver(window))
    {
        globals.getPlayerCountSelectionMenu().hideAll();
        globals.getTutorialMenu().showAll();
        globals.setCurrentState(Globals::GameState::TutorialMenu);
    }
}

void TutorialMenuHandler::createTutorialMenu()
{
    for(int i=0;i<rules.size();i++)
    {
        UIText* ruleText = new UIText(globals.getTutorialMenu(), globals.getGlobalFont(), ruleTextCharacterSize, rules[i]);
        ruleText->setPosition(sf::Vector2f(Globals::windowWidth/2- ruleText->getLocalBounds().width/2, ruleTextInitialPositionY + i*distanceBetweenRuleTextsY));
    }
    UIText* tutorialText = new UIText(globals.getTutorialMenu(), globals.getGlobalFont(), tutorialTextCharacterSize, "Tutorial");
    tutorialText->setPosition(sf::Vector2f(Globals::windowWidth/2-tutorialText->getLocalBounds().width/2, tutorialTitlePositionY));
    globals.getTutorialMenu().hideAll();
}