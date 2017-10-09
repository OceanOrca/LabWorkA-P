// Lab2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "myLib.h"


int menu ()
{
	int drink = 0;

	
	std::cout << "Now you can choose what would you like to drink:\n"
		"1 - coffee, americano;\n"
		"2 - coffee, latte;\n"
		"3 - coffee, espresso;\n"
		"4 - tea, black;\n"
		"5 - tea, grean;\n ______________________________________________" << std::endl; 
		std::cin >> drink;
		

		return drink;
}

int main()
{
	int acseption = 3;
	std::string exit = "";
	std::string choose1; //Ввод выбора условного оператора
	int drink = 0; //Ввод напитка
	std::string chosedrink; //Вывод информационного сообщения о выбранном напитке
	int sugar = 0; //Ввод сахара
	std::string choosesugar; //Вывод информатционного сообщения о выборе сахара

	while (exit != "n" && exit != "N")
	{
		while (acseption != 0)
		{
			std::cout << "Please, choose the conditional operator, we will work with. Print \"switch\" or \"if\""
				"\n ______________________________________________" << std::endl;
			std::cin >> choose1;
			if (choose1 != "switch" && choose1 != "if")
			{
				std::cout << "Wrong symbol! Please, try again\n ______________________________________________" << std::endl;
				acseption = 1;
			}
			if (choose1 == "switch")
			{
				std::cout << "You chose \"switch\" variant\n ______________________________________________" << std::endl;
				while (acseption != 0)
				{
					drink = menu();
					switch (drink)
					{
					case 1:
						chosedrink = "You chose: coffee, americano";
						acseption = 0;
						break;
					case 2:
						chosedrink = "You chose: coffee, latte";
						acseption = 0;
						break;
					case 3:
						chosedrink = "You chose: coffee, espresso";
						acseption = 0;
						break;
					case 4:
						chosedrink = "You chose: tea, black";
						acseption = 0;
						break;
					case 5:
						chosedrink = "You chose: tea, grean";
						acseption = 0;
						break;
					default:
						std::cout << "Wrong symbol! Please, try again\n ______________________________________________" << std::endl;
						acseption = 1;
						break;
					}
				}
				acseption = 0;
			}

			if (choose1 == "if")
			{
				std::cout << "You chose \"if\" variant\n ______________________________________________" << std::endl;
				while (acseption != 0)
				{
					drink = menu();
					if (drink == 1)
					{
						chosedrink = "You chose: coffee, americano";
						acseption = 0;
					}
					else if (drink == 2)
					{
						chosedrink = "You chose: coffee, latte";
						acseption = 0;
					}
					else if (drink == 3)
					{
						chosedrink = "You chose: coffee, espresso";
						acseption = 0;
					}
					else if (drink == 4)
					{
						chosedrink = "You chose: tea, black";
						acseption = 0;
					}
					else if (drink == 5)
					{
						chosedrink = "You chose: tea, grean";
						acseption = 0;
					}
					else
					{
						std::cout << "Wrong symbol! Please, try again\n ______________________________________________" << std::endl;
						acseption = 1;
					}
				}
				acseption = 0;
			}
			
		}
		acseption = 3;
		while (acseption != 0)
		{
			std::cout << "Would you like to put some sugar? Print \'1\' if you want, and \'0\' if you don't"
				"\n ______________________________________________" << std::endl;
			std::cin >> sugar;

			if (sugar == 1)
			{
				choosesugar = " with sugar";
				acseption = 0;
			}
			else if (sugar == 0)
			{
				choosesugar = " without sugar";
				acseption = 0;
			}
			else
			{
				std::cout << "Wrong symbol! Please, try again\n ______________________________________________" << std::endl;
				acseption = 1;
			}
		}
		acseption = 3;

		std::cout << chosedrink << choosesugar << "\n ______________________________________________" << std::endl;
		while (acseption != 0)
		{
			std::cout << "Do you want to start new order for beverage? Print \'Y\' or \'y\' to continue and \'N\' or \'n\' to exit" <<
				"\n ______________________________________________" << std::endl;
			std::cin >> exit;
			if (exit == "y" || exit == "Y" || exit == "n" || exit == "N")
			{
				acseption = 0;
			}
			else
			{
				std::cout << "Wrong symbol! Please, try again\n ______________________________________________" << std::endl;
				acseption = 1;
			}
		}
		acseption = 3;
	}
	
    return 0;
}

