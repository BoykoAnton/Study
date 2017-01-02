// lab5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	unsigned short us = 6692;
	int i = 1226;
	float f = -896.333333;
	double d = 6.9e-86;

	unsigned short *pus = &us;
	int *pi = &i;
	float *pf = &f;
	double *pd = &d;
	void *p1,
		 *p2,
		 *p3;
	int sizeUs,
		sizeI,
		sizeF,
		sizeD,
		sizePUs,
		sizePI,
		sizePF,
		sizePD,
		sizePV;
	
	*pus = 6692;
	*pi = 1226;
	*pf = -896.333333;
	*pd = 6.9e-86;
	p1 = &pus;
	p2 = &pi;
	p3 = &pd;
	int &us = i;

	sizeUs = sizeof(us);
	sizeI = sizeof(i);
	sizeF = sizeof(f);
	sizeD = sizeof(d);

	sizePUs = sizeof(pus);
	sizePI = sizeof(pi);
	sizePF = sizeof(pf);
	sizePD = sizeof(pd);
	sizePV = sizeof(p1);

	return 0;
}