// Example2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


void swap(int& num1, int& num2)
{
	int tmp;
	tmp = num1;
	num1 = num2;
	num2 = tmp;
}

void init(int mas[], int size)
{
	for (int i = 0; i < size; i = i + 1)
		mas[i] = i + 100;

}
int main()
{
	int a = 5, b = 6;
	swap(a, b);

	const int N1 = 10;
	int mas1[10];
	init(mas1, N1);

	const int N2 = 100;
	int mas2[100];
	init(mas2, N2);

	return 0;
}


