// Lab1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "math.h"
#include "iomanip"
#include"windows.h"
#include "float.h"
#pragma fenv_access (on)
using namespace std;


int main()
{

    char go = 0;
	double x = 0;
	double y = 0;
	double tangensResult = 0;
	double result = 0;

	
	while (go != 'e')
	{
		std::cout << "If you want to continue working with the application, press \"g\". If no, - press \"e\" \n";
		std::cin >> go;
		if (go != 'g' && go != 'e')
		{
			std::cout << "Error! Wrong Symbol. \n"
				"Try again: if you want to continue working with the application, press \"g\". If no, - press \"e\" \n";
			std::cin >> go;
		}
		
		if (go == 'g')
		{
			std::cout << "Please, enter the value of the variable \"X\"\n";
			std::cin >> x;
			std::cout << "Please, enter the value of the variable \"Y\"\n";
			std::cin >> y;	
			try 
			{
				tangensResult = tan(x*y);
				if (tangensResult == 0)
				{
					throw "Division by zero\n";
				}
				result = (sqrt(abs(log(x) + x))) - ((2 * y) / (tangensResult));
				std::cout << "The result is " << fixed << setprecision(5) << result << "\n";
			}
			catch (const char* msg)
			{
				std::cout << msg;
			}
			
				
		}
	}
	
	
    return 0;
}

