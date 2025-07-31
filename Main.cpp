

/*=== Testing Coin Flip 20 Times ===
Flip 1: Heads
Flip 2: Heads
Flip 3: Tails
Flip 4: Heads
Flip 5: Heads
Flip 6: Tails
Flip 7: Heads
Flip 8: Tails
Flip 9: Heads
Flip 10: Tails
Flip 11: Tails
Flip 12: Heads
Flip 13: Tails
Flip 14: Heads
Flip 15: Tails
Flip 16: Heads
Flip 17: Heads
Flip 18: Heads
Flip 19: Tails
Flip 20: Heads
Heads: 12
Tails: 8

=== Starting Coin Game ===
Starting Coin Game to reach $1
Coin results: 5c: Heads  10c: Heads  25c: Tails
Current score: $0.15 after 1 rounds
---------------------
Coin results: 5c: Heads  10c: Heads  25c: Tails
Current score: $0.3 after 2 rounds
---------------------
Coin results: 5c: Heads  10c: Tails  25c: Heads
Current score: $0.6 after 3 rounds
---------------------
Coin results: 5c: Tails  10c: Tails  25c: Heads
Current score: $0.85 after 4 rounds
---------------------
Coin results: 5c: Tails  10c: Heads  25c: Tails
Current score: $0.95 after 5 rounds
---------------------
Coin results: 5c: Heads  10c: Heads  25c: Heads
Current score: $1.35 after 6 rounds
---------------------
Congratulations! You reached $1 in 6 rounds!*/

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

