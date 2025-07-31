#include "Coin.h"
#include <cstdlib>
#include <ctime>

Coin::Coin() : centValue(1), isHeads(true) {
    std::srand(static_cast<unsigned>(std::time(0)));
}

Coin::Coin(int value) : centValue(value), isHeads(true) {
    std::srand(static_cast<unsigned>(std::time(0)));
}

void Coin::flip() {
    isHeads = std::rand() % 2;
}

bool Coin::isItHeads() const {
    return isHeads;
}

std::string Coin::getSideUp() const {
    return isHeads ? "Heads" : "Tails";
}

int Coin::getCentValue() const {
    return centValue;
}
