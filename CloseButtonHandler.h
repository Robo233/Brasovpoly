#ifndef CLOSE_BUTTON_HANDLER_H
#define CLOSE_BUTTON_HANDLER_H

#include <SFML/Graphics.hpp>

class CloseButtonHandler
{
public:
    CloseButtonHandler();

    void createCloseButton();
    void closePlayerSetupMenu(sf::RenderWindow& window);
private:
    int closeButtonSize;
    int closeButtonPadding;

    sf::Texture closeButtonTexture;
};



#endif