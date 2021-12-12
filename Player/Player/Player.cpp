#include <iostream>
#include<conio.h>
using namespace std;
#include"c_player.h"
int main()
{
	setlocale(0, "");
	c_player player;
	char ch;
	cout << "Хотите начать игру? Y - да, N - нет\nВведите: ";
	ch = _getch();
	if (ch == 'Y' || ch == 'y')
	{
		system("cls");
		cout << "\t\t\t\t\t\t\tВЫ НАЧАЛИ ИГРУ!!!\n";
		cout << "Подсказки:\n";
		cout << "A - ход влево\n";
		cout << "D - ход вправо\n";
		cout << "W - ход вперед\n";
		cout << "S - ход назад\n";
		cout << "L - защита\n";
		cout << "Enter - удар\n";
		cout << "\nИзначальные данные:\n";
		player.Print();
		char choose;
		do
		{
			cout << "\nВыберите что хотите сделать: ";
			choose = _getch();
			switch (choose)
			{
				case char(65):case char(97):
					cout << "\nВы пошли влево!\n";
					break;
				case char(68): case char(100):
					cout << "\nВы пошли вправо!\n";
					break;
				case char(87) : case char(119) :
					cout << "\nВы пошли вперед!\n";
					break;
				case char(83) : case char(115) :
					cout << "\nВы пошли назад!\n";
					break;
				case char(76) : case char(108) :
					cout << "\nВы защищаетесь!\n";
					cout << "Здоровье = ";
					cout << player.getHealth();
					cout << "\nСила = ";
					cout << player.getPower();
					cout << "\n";
					break;
				default:
					break;
			}
		} while (player.getHealth() != 0);
	}
	else
	{
		system("cls");
		cout << "Вы не захотели играть(((((\n";
		//system("pause");
	}
}

