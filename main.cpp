#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	int money = 0, a, x=1;

	cout << "�������� 1 ����� ��������� ���� ���� ����.\n�������� 2 ����� ������� �������.\n�������� 3 ����� ������ ���� ������.\n";

	while (true)
	{
		cin >> a;

		if (a == 1)
		{
			money+=x;
			
		}
		
		if (a == 3)
		{
			cout << "������:" << money << endl;
		}

		if (a == 2)
		{
			cout << "����� ���-�� ������ ��������  2(����� �����������)  \n1. +1 ����� (���� 30)\n" << endl;
		}
		
		if (a == 31 && money>=30)
		{
			money -= 30;
			x += 1;
		}
	}



}