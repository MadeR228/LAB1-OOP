#pragma once
#include <iostream>

using namespace std;

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

