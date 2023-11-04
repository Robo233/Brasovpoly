#ifndef IN_GAME_SCENE_CREATOR_H
#define IN_GAME_SCENE_CREATOR_H

#include "../UI/UIRectangleShape.h"

class InGameSceneCreator
{
public:
    InGameSceneCreator();

    void createInGameScene();
    void createLocationsHorizontalUp();
    void createLocationsVerticalRight();
    void createLocationsHorizontalDown();
    void createLocationsVerticalLeft();
    void createStart();
    void createGoToJailLocation();
    void createJailLocation();
    void createTaxLocation();
    void createGamblingLocation();
    void createInGameSceneButtons();
    void createInGameClockText();
    void createGameOverScreen();
    UIRectangleShape* createPropertySquare(Property* property, sf::Vector2f position);

private:
    int propertyIndex;
    int locationsPadding;
    int locationBorderSize;
    int numberOfRowsAndColumnsStart;
    int playerIndexTextCharacterSize;
    int propertyColorSquareHeight;

    int numberOfPropertiesHorizontalUp;
    int numberOfPropertiesVerticalLeft;
    int numberOfPropertiesHorizontalDown;
    int numberOfPropertiesVerticalRight; 

    int propertyNameTextPaddingY;
    int propertyPriceTextPaddingY;

    int rollDiceResultTextPositionX;
    int rollDiceResultTextPositionY;

    int rollDiceResultTextCharacterSize;

    int gameOverTextCharacterSize;
    int gameOverTextPositionY;

    int gameOverPlayingTimeTextCharacterSize;

    int transportPropertyTextureSize;

    int goToJailLocationSize;
    int goToJailLocationPositionY;

    float taxLocationSpriteWidth;
    float taxLocationSpriteHeight;

    float gamblingLocationSpriteSize;

    float rollDiceButtonPositionX;
    float rollDiceButtonPositionY;

    float buyPropertyButtonPositionX;
    float buyPropertyButtonPositionY;

    float buyHouseButtonPositionX;
    float buyHouseButtonPositionY;

    sf::Texture goToJailLocationTexture;
    sf::Texture jailLocationTexture;
    sf::Texture taxLocationTexture;
    sf::Texture gamblingLocationTexture;

    std::vector<std::unique_ptr<sf::Texture>> transportPropertyTextures; 

};

#endif