#include "money.h"

// ������� ������ � ��������� �� ������ ������� �����
int money::summa()
{
    return first * second;
}

// ��������� ������� ������� �� �����
void money::Display()
{
    std::cout << " ������ ������ " << "    " << "\tʳ������ ����� ";
}

// ��������� ����� ������� �� ������� �� ����� (��� ���� �����)
void money::DisplayIt()
{
    std::cout << std::endl;
    std::cout << "\t" << first;
    std::cout << "\t\t\t" << second << std::endl;
}

// �������� �������� ����� (nom - ��������� ������)
void money::Read(int nom)
{
    first = nom;
    std::cout << "������ ������� ����� : ";
    std::cin >> second;
    std::cout << std::endl;
}
