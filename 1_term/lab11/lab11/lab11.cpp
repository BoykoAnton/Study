// lab11.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	int * pIntSq,
		sum = 0,
		ser = 0;

	pIntSq = new int[10];

	for (int i = 0; i < 10; i++)
	{
		if ((i % 2) == 0)
		{
			*(pIntSq + i) = i + 5;
		}
		else
		{
			*(pIntSq + i) = i - 5;
		}
		sum = sum + *(pIntSq + i);
		ser = sum / (i + 1);
	}
	delete[] pIntSq;

	char * pChar1,
		*pChar2,
		*pChar3;
	int k = 0,
		counter = 0;

	pChar1 = new char[10];
	pChar2 = new char[10];
	pChar3 = new char[10];

	for (int i = 0; i < 10; i++)
	{
		*(pChar1 + i) = 120 - i;
	}

	for (int i = 0; i < 10; i++)
	{
		*(pChar2 + i) = 110 + i;
	}

	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			if (*(pChar1 + j) == *(pChar2 + i))
			{
				*(pChar3 + k) = *(pChar1 + j);
				k++;
			}
		}
	}

	while (k < 10)
	{
		if (*(pChar3 + k) > 115)
		{
			counter++;
		}
		k++;
	}
	delete[]pChar1;
	delete[]pChar2;
	delete[]pChar3;
	return 0;
}