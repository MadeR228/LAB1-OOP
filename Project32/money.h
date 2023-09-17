#pragma once
#include <iostream>

struct money
{
    int first;
    int second;

    int summa();
    void Display();
    void DisplayIt();
    void Read(int nom);

    friend class MoneyIn;
};

