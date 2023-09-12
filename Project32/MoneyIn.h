#pragma once
#include "money.h"

using namespace std;

struct MoneyIn
{
    static const int S = 9;
    int let[S];
    money a[S];

    MoneyIn();
    void ReadAll();
    void DisplayAll();
    int TotalSum();
};

