// 2.2.cpp: определяет точку входа для консольного приложения.
//2.1 - 2.5 2.9 - 2.10

#include "stdafx.h"
#include <cstdlib>
#include <ctime>


int main()
{
	float f_mass_d[4][5],
		f_mass[4],
		summ = 0;
	/*int n_mass_d[5][4],
		n_mass[5],
		max = -15001;
		*/
	srand(time(0));

    for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			f_mass_d[i][j] = (rand() - 15000) / 273;
		}
	}
	/*
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			n_mass_d[i][j] = rand() - 15000;
		}
	}*/
	float max = -15000;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (f_mass_d[i][j] > max)
			{
				max = f_mass_d[i][j];
			}
		}
		f_mass[i] = max;
		max = -15000;
	}
	/*int summ = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			summ = n_mass_d[i][j];
		}
		n_mass[i] = summ;
		
	}*/

    return 0;
}

