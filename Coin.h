#pragma once
#ifndef COIN_H
#define COIN_H

#include <string>

class Coin {
private:
    bool isHeads;
    const int centValue;

public:
    Coin();                    // default constructor (1 cent)
    Coin(int value);          // constructor with value
    void flip();              // randomly sets isHeads
    bool isItHeads() const;   // returns isHeads
    std::string getSideUp() const;  // returns "Heads" or "Tails"
    int getCentValue() const; // returns centValue
};

#endif
