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
    cout << endl;
    cout << "\t" << first;
    cout << "\t\t\t" << second << endl;
}

// �������� �������� ����� (nom - ��������� ������)
void money::Read(int nom)
{
    first = nom;
    cout << "������ ������� ����� : ";
    cin >> second;
    cout << endl;
}
