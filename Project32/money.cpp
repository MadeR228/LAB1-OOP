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
    std::cout << std::endl;
    std::cout << "\t" << first;
    std::cout << "\t\t\t" << second << std::endl;
}

// Введення кількость купюр (nom - скорочено номінал)
void money::Read(int nom)
{
    first = nom;
    std::cout << "Введіть кількість купюр : ";
    std::cin >> second;
    std::cout << std::endl;
}
