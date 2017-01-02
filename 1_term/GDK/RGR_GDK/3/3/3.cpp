#include "stdafx.h"
#include <ctype.h>
using namespace std;

void Word_Processing(char mas[], int size);

void main()
{
	const int size = 200;
	char str[size] = "sdfsdfAAAAAAAAAAAA";
	Word_Processing(str, size);
}
void Word_Processing(char mas[], int size)
{
	int capital = 0;
	int lower = 0;
	for (int i = 0; i < size - 1; i++)
	{
		if (mas[i] >= 65 && mas[i] <= 90)
		{
			capital++;
		}
		else if (mas[i] >= 97 && mas[i] <= 122)
		{
			lower++;
		}
	}
	if (capital > lower)
	{
		for (int i = 0; i < size - 1; i++)
		{
			mas[i] = toupper(mas[i]);
		}
	}
	else
	{
		for (int i = 0; i < size - 1; i++)
		{
			mas[i] = tolower(mas[i]);
		}
	}
}