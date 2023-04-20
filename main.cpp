#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	int money = 0, a, x=1;

	cout << "Напишите 1 чтобы прибавить себе одно очко.\nНапишите 2 чтобы открыть магазин.\nНапишите 3 чтобы узнать свой баланс.\n";

	while (true)
	{
		cin >> a;

		if (a == 1)
		{
			money+=x;
			
		}
		
		if (a == 3)
		{
			cout << "Деньги:" << money << endl;
		}

		if (a == 2)
		{
			cout << "Чтобы что-то купить напишите  2(номер предложения)  \n1. +1 доход (цена 30)\n" << endl;
		}
		
		if (a == 31 && money>=30)
		{
			money -= 30;
			x += 1;
		}
	}



}