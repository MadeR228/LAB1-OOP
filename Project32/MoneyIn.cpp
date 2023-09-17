#include "MoneyIn.h"

// Введення номінала купюр (які можливі за умовою задачі)
MoneyIn::MoneyIn()
{
    int m[S] = { 1, 2, 5, 10, 20, 50, 100 ,500 ,1000};
    for (int j = 0; j < S; j++)
        let[j] = m[j];
}


// Виведення номінала купюр
void MoneyIn::ReadAll()  
{
    for (int j = 0; j < S; j++) 
    {
        std::cout << "Номінал купюри : " << let[j] << std::endl;
        a[j].Read(let[j]);
    }
}

// Виведення всіх номіналів та їх кількість купюр (які були обрані) 
void MoneyIn::DisplayAll()
{
    a->Display();
    for (int i = 0; i < S; i++)
        a[i].DisplayIt();
}

// Виведення суми купюр всіх номіналів
int MoneyIn::TotalSum()
{
    int totalsum = 0;
    for (int i = 0; i < S; i++)
        totalsum += a[i].summa();
    return totalsum;
}
