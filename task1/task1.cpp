#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a1, a2, a3, a4;
	for (int i = 1000; i < 10000; i++)
	{
		a1 = i / 1000;
		a2 = (i / 100) % 10;
		if (a1 == a)
		{
			continue;
		}
		a3 = (i / 10) % 10;
		if (a3 == a1 || a3 == a2)
		{
			continue;
		}
		a4 = i % 10;
		if (a4 == a1 || a4 == a2 || a4 == a3)
		{
			continue;
		}
		cout << "\n" << i;
	}
	system("Pause");
	return 1;

}
