#include "stdafx.h"

const int M = 4,
		  N = 5,
	      Q = 10;

void func1(float mass[M][N]);
void func2(char str[]);

int main()
{
	float mass[M][N] = { { 1.2, 5.2, 8.76, 4.234, 34.6 },
					{ 45.1, 13.87, 8.8, 3.2, 5.2 },
					{ 3.7, 5.0, 34.3, 6.56, 13.34 },
					{ 34.2, 56.2, 6.0, 79.23, 23.234 }};
	
	char C[Q] = "ASDFGHJKL";
	
	func1(mass);
	func2(C);

	return 0;
}

void func1(float mass[M][N])	
{
	float max;
	int b;
	max = mass[0][0];
	
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (mass[i][j] > max)
			{
				max = mass[i][j];
				b = j;
			}
		}
	}

	for (int j = 0; j < M; j++)
		mass[j][b] = 0;
}

void func2(char str[])
{
	char tmp;
	for (int i = 0, j = Q - 1; i < j; ++i, --j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}