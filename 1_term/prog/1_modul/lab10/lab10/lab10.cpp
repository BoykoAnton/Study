// lab10.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	int a = 15,
		b = 17,
		c = 1;

	while (a<b)
	{
		a++;
	}

	if (a == b)
	{
		a = a - 15;
	}
	else
	{
		a = a + 15;
	}
	
	for (int i = 0; i < 5; i++)
	{
		a = 1 + b + a;
	}

	do
	{
		b = a - 1;
	} while (a = b);
	
	switch (a)
	{
		case 12: a = 10;
			break;
		case 18: a = 15;
			break;
		default: a = 0;
			break;
	}
	
	//++
	int num = -255,
		i = 0;

	while (num & (1 << i) == 1)
	{
		num = num ^ (1 << i);
		i++;
	}

	num = num ^ (1 << i);

	//sum of two numbers
	int num1 = 18,
		num2 = 32,
		result = 0,
		raz = 0;
	for (int i = 0; i < sizeof(int) * 8; i++)
	{
		int bitNum1 = (num1 >> i) & 1,
			bitNum2 = (num2 >> i) & 1;

		result = result | (((bitNum1 ^ bitNum2) ^ raz) << i);
		raz = (bitNum1 & bitNum2) | (bitNum1 & raz) | (bitNum2 & raz);
	}

    return 0;
}