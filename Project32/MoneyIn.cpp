#include "MoneyIn.h"

// �������� ������� ����� (�� ������ �� ������ ������)
MoneyIn::MoneyIn()
{
    int m[S] = { 1, 2, 5, 10, 20, 50, 100 ,500 ,1000};
    for (int j = 0; j < S; j++)
        let[j] = m[j];
}


// ��������� ������� �����
void MoneyIn::ReadAll()  
{
    for (int j = 0; j < S; j++) 
    {
        std::cout << "������ ������ : " << let[j] << std::endl;
        a[j].Read(let[j]);
    }
}

// ��������� ��� ������� �� �� ������� ����� (�� ���� �����) 
void MoneyIn::DisplayAll()
{
    a->Display();
    for (int i = 0; i < S; i++)
        a[i].DisplayIt();
}

// ��������� ���� ����� ��� �������
int MoneyIn::TotalSum()
{
    int totalsum = 0;
    for (int i = 0; i < S; i++)
        totalsum += a[i].summa();
    return totalsum;
}
