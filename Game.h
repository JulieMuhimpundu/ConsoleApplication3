#pragma once
#ifndef GAME_H
#define GAME_H

#include "Coin.h"

class Game {
private:
    Coin* coins;
    int numberOfCoins;
    double targetBalance;
    int totalScore;  // in cents
    int rounds;

public:
    Game();
    Game(double target);
    ~Game();

    void playGame();
    void flipCoins();
    void printFlipResults();
    void printScore();
    int getRounds() const;
    int getScore() const;
};

#endif
