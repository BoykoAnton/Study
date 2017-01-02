// lab 2.1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	//1
	float f_arr[5],
		  tmp;

	for (int i = 0; i < 5; i++)
	{
		if ((i % 2) == 0)
		{
			f_arr[i] = i + 1;
		}
		else
		{
			f_arr[i] = 10 / i + 2;
		}
	}
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (f_arr[i] > f_arr[i + 1])
			{
				tmp = f_arr[i];
				f_arr[i] = f_arr[i + 1];
				f_arr[i + 1] = tmp;
			}
		}
	}
	//2
	char c_arr1[10],
		 c_arr2[10],
		 c_arr3[10];
	
	for (int i = 0; i < 10; i++)
	{
		c_arr1[i] = 73 - i;
		c_arr2[i] = 66 + 2 * i;
	}

	int counter = 0;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (c_arr1[i] == c_arr2[j])
			{
				c_arr3[counter] = c_arr1[i];
				counter++;
			}
		}
	}
	char max1 = 0,
		 max2 = 0;
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		if (c_arr3[i] > max1)
		{
			max1 = c_arr3[i];
		}
		else if (c_arr3[i] > max2)
		{
			max2 = c_arr3[i];
		}
	}
	sum = max1 + max2;

    return 0;
}