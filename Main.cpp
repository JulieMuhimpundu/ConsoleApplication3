#include "Coin.h"
#include "Game.h"
#include <iostream>

void testCoinFlipping() {
    Coin coin;
    int heads = 0, tails = 0;

    for (int i = 0; i < 20; ++i) {
        coin.flip();
        std::cout << "Flip " << (i + 1) << ": " << coin.getSideUp() << std::endl;
        if (coin.isItHeads())
            heads++;
        else
            tails++;
    }

    std::cout << "Heads: " << heads << "\nTails: " << tails << "\n";
}

int main() {
    std::cout << "=== Testing Coin Flip 20 Times ===\n";
    testCoinFlipping();

    std::cout << "\n=== Starting Coin Game ===\n";
    Game coinGame(1.00);  // can use other amounts too
    coinGame.playGame();

    return 0;
}

