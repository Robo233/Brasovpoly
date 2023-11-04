#ifndef GAMEOVER_HANDLER_H
#define GAMEOVER_HANDLER_H

class GameOverHandler
{
public:
    GameOverHandler();
    void gameOver();
private:
    int leaderBoardCharacterSize;
    int leaderBoardNameTextInitialPositionY;
    int distanceBetweenLeaderBoardNameTexts;

    int gameOverPlayingTimeTextPositionY;
};



#endif