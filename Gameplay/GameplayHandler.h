#ifndef GAMEPLAY_HANDLER_H
#define GAMEPLAY_HANDLER_H

#include <SFML/Graphics.hpp>
#include "RealEstate.h"
#include "../UI/UIRectangleShape.h"
#include "../UI/Button.h"
#include "../UI/UIText.h"
#include "../UI/UISprite.h"

class GameplayHandler
{
    int percentOfPropertyPriceWhichHasToBePaidWhenPropertyIsVisited;
    int uiRectangleShapePlayerSize;
    int initialPlayerPositionX;
    int initialPlayerPositionY;
    int distanceBetweenPlayersX;
    int distanceBetweenPlayersY;
    int numberOfColumnsPlayerRectangles;

    int numberOfColumnsPlayerInfoTexts;
    int playerNameTextCharacterSize;
    int currentPlayerNameTextCharacterSize;
    int playerNameTextPositionX;
    int playerNameTextIntialPositionY;
    int distanceBetweenPlayerNameTextsX;
    int distanceBetweenPlayerNameTextsY;
    int playerProfitAmountTextPositionY;

    int initialMoneyAmount;
    int playerMoneyAmountTextPositionY;

    int currentPlayerIndex;

    int rollDiceResultMin;
    int rollDiceResultMax;

    float delayAfterWhichNextButtonBecomesPressableAfterBuyPropertyButtonWasPressed;

    int percentOfRealEstatePriceWhichHasToBePaidToBuyAHouse;
    int percentOfRealEstatePriceWhichHasToBePaidPerHouseWhenRealEstateIsVisited;
    int numberOfHousesAfterWhichItsConsideredHotel;
    int numberOfHousesPerRow;
    int houseSpriteSize;
    int hotelSpriteSize;
    int houseSpritePositionY;
    int hotelSpritePositionY;

    int numberOfSkippedTurnsWhenPlayerisInJail;

    int colorOfPlayerInJailAlphaValue;

    int taxLocationAmount;

    int minimumGamblingAmountProfit;
    int maximumGamblingAmountProfit;

    int amountOfMoneyGotByAPlayerAfterItGoesTroughStart;

    Player* currentPlayerWhichHasToThrow;
    Player* previousPlayer;
    Player* previousPlayerWhoGotMoneyFromOwningProperty;

    Property* currentProperty;
    RealEstate* currentRealEstate;

    sf::Clock nextButtonActivatorClock;

    sf::Texture houseTexture;
    sf::Texture hotelTexture;

public:
    GameplayHandler();

    int getPercentOfPropertyPriceWhichHasToBePaidWhenPropertyIsVisited();
    void createPlayerRectangles();
    void createPlayerInfoTexts();
    void resizeCurrentPlayerInfoTexts();
    void moveToNextPlayer();
    void removeCurrentPlayer();
    bool hasPlayerLost(Player* player, int amountToPay);
    void startGameButtonEventHandler(sf::RenderWindow& window);
    void rollDiceButtonEventHandler(sf::RenderWindow& window);
    void buyPropertyButtonEventHandler(sf::RenderWindow& window);
    void nextButtonEventHandler(sf::RenderWindow& window);
    void buyHouseButtonEventHandler(sf::RenderWindow& window);
    void activateBuyHouseButtonIfPlayerCanBuyIt();
    
};

#endif