// Example1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <math.h>

const float LEFT = 0,
            RIGHT = 4,
            TABUL = 0.1;

float fun1(float farg)
{
	float ftemp = 0;
	int ni;
	
	for (ni = 1; ni <= 5; ni = ni + 1)
		ftemp = ftemp + sqrt((farg + ni) / ni);
	
	return ftemp;
}

float fun2(float farg)
{
	float ftemp = log(2 * farg * farg) + 3 * sin(farg);
	
	return ftemp;
}

void main()
{
	float fx = LEFT;
	float fy;
	
	while (fx <= RIGHT)
	{
		if (fx <= 2)
			fy = fun1(fx);
		else fy = fun2(fx);
		
		fx = fx + TABUL;
	}
}