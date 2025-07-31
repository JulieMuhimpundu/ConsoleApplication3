#include "Game.h"
#include <iostream>

Game::Game() : numberOfCoins(3), targetBalance(1.00), totalScore(0), rounds(0) {
    coins = new Coin[3]{ Coin(5), Coin(10), Coin(25) }; // nickel, dime, quarter
}

Game::Game(double target) : numberOfCoins(3), targetBalance(target), totalScore(0), rounds(0) {
    coins = new Coin[3]{ Coin(5), Coin(10), Coin(25) };
}

Game::~Game() {
    delete[] coins;
}

void Game::flipCoins() {
    for (int i = 0; i < numberOfCoins; ++i) {
        coins[i].flip();
    }
}

void Game::printFlipResults() {
    std::cout << "Coin results: ";
    for (int i = 0; i < numberOfCoins; ++i) {
        std::cout << coins[i].getCentValue() << "c: " << coins[i].getSideUp() << "  ";
    }
    std::cout << std::endl;
}

void Game::printScore() {
    std::cout << "Current score: $" << totalScore / 100.0 << " after " << rounds << " rounds\n";
}

void Game::playGame() {
    std::cout << "Starting Coin Game to reach $" << targetBalance << std::endl;

    while (totalScore < static_cast<int>(targetBalance * 100)) {
        flipCoins();
        printFlipResults();

        for (int i = 0; i < numberOfCoins; ++i) {
            if (coins[i].isItHeads()) {
                totalScore += coins[i].getCentValue();
            }
        }
        ++rounds;
        printScore();
        std::cout << "---------------------\n";
    }

    std::cout << "Congratulations! You reached $" << targetBalance << " in " << rounds << " rounds!\n";
}

int Game::getRounds() const {
    return rounds;
}

int Game::getScore() const {
    return totalScore;
}
