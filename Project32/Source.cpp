#include <iostream>
#include <windows.h>
#include "MoneyIn.h"

using namespace std; 

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    MoneyIn a;

    a.ReadAll();
    a.DisplayAll();

    std::cout << std::endl;
    std::cout << "\tÑóìà âñ³õ êóïþð = " << a.TotalSum() << std::endl;
    system("pause");

    return 0;
}