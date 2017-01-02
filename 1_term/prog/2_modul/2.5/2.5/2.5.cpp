#include "stdafx.h"

float func(float);

int main()
{
	int k = 0;
	float masx[24], 
		  masy[24],
		  h = 0.3,
		  a = -1,
		  b = 6;

	for (float i = a; i <= b; i = i + h)
	{
		masx[k] = i;
		masy[k] = func(masx[k]);
		k++;
	}

	return 0;
}


float func(float x)
{
	float y = 0;
	int k = 7;
	
	if (x < 3)
	{
		y = 1;
	
		for (int i = 0; i <= k; i++)
		{
			y = y*(x*x + i);
		}
	}
	else
	{
		y = (x+2)*(x-2);
	}

	return y;
}