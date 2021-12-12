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
		char choose;
		do
		{
			cout << "Подсказки:\n";
			cout << "A - ход влево\n";
			cout << "D - ход вправо\n";
			cout << "W - ход вперед\n";
			cout << "S - ход назад\n";
			cout << "L - защита\n";
			cout << "Enter - удар\n";
			cout << "Space - пауза\n";
			cout << "Esc - преждевременный выход\n";
			cout << "\nДанные об игроке:\n";
			player.Print();
			cout << "\nВыберите что хотите сделать: ";
			choose = _getch();
			switch (choose)
			{
				case char(65) : case char(97) :
					system("cls");
					cout << "Вы пошли влево!\n";
					system("pause");
					system("cls");
					break;
				case char(68): case char(100):
					system("cls");
					cout << "Вы пошли вправо!\n";
					system("pause");
					system("cls");
					break;
				case char(87) : case char(119) :
					system("cls");
					cout << "Вы пошли вперед!\n";
					system("pause");
					system("cls");
					break;
				case char(83) : case char(115) :
					system("cls");
					cout << "Вы пошли назад!\n";
					system("pause");
					system("cls");
					break;
				case char(76) : case char(108) :
					system("cls");
					cout << "Вы защищаетесь!\n";
					cout << "Здоровье = ";
					cout << player.getHealthMinus();
					cout << "\nСила = ";
					cout << player.getPowerMinus();
					cout << "\n";
					system("pause");
					system("cls");
					break;
				case char(13) :
					system("cls");
					cout << "Вы ударили!\n";
					if (player.getHealth() < 100)
					{
						cout << "Здоровье = ";
						player.setHealth(1);
						cout << player.getHealth();
						cout << "\n";
					}
					else
					{
						cout << "Уровень здоровья полон!\n";
					}
					if (player.getPower() < 96)
					{
						cout << "Сила = ";
						player.setPower(5);
						cout << player.getPower();
					}
					else
					{
						cout << "Уровень силы полон!\n";
					}
					cout << "\n";
					system("pause");
					system("cls");
					break;
				case char(32) :
					system("cls");
					cout << "Пауза....\n";
					system("pause");
					system("cls");
					break;
			}
		} while (player.getHealth() > 0);
		cout << "Игрок умер, так как закончилось здоровье!\n";
	}
	else
	{
		system("cls");
		cout << "Вы не захотели играть(((((\n";
	}
}

