// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int firstnum;
	int secondnum;
	string operation;


	while (operation != "9")
	{

		cout << "Input first num ";
		cin >> firstnum;
		cout << "Input second num ";
		cin >> secondnum;
		cout << "Input operation ";
		cin >> operation;
		if (operation == "1") {
			cout << "\n";
			cout << firstnum + secondnum;
		}
		else if (operation == "2") {
			cout << "\n";
			cout << firstnum - secondnum;
		}
		else if (operation == "3") {
			cout << "\n";
			cout << firstnum * secondnum;
		}
		else if (operation == "4") {
			cout << firstnum / secondnum;
		}
		else if (operation == "5") {
			int a = firstnum;
			for (int i = 1; i < secondnum; i++)
			{
				firstnum = firstnum * a;

			}
			cout << "\n";
			cout << firstnum;
		}

		else if (operation == "6") {
			cout << "\n";
			cout << sqrt(firstnum);

		}
		else if (operation == "7") {
			cout << "\n";

			cout << firstnum / 100 * 1;

		}
		else if (operation == "8") {
			int leng = firstnum;
			int num = 1;
			for (int i = 1; i < leng + 1; i++)
			{
				num = i * num;
			}
			cout << num;
			cout << "\n";
		}







	}

}
