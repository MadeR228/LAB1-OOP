#include "money.h"

// Повертає номінал в залежності від обраної кількості купюр
int money::summa()
{
    return first * second;
}

// Виведення таблиці номіналів та купюр
void money::Display()
{
    std::cout << " Номінал купюри " << "    " << "\tКількість купюр ";
}

// Виведення самих номіналів та кількість їх купюр (щоб було гарно)
void money::DisplayIt()
{
    cout << endl;
    cout << "\t" << first;
    cout << "\t\t\t" << second << endl;
}

// Введення кількость купюр (nom - скорочено номінал)
void money::Read(int nom)
{
    first = nom;
    cout << "Введіть кількість купюр : ";
    cin >> second;
    cout << endl;
}
