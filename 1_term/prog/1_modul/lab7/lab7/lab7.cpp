// lab7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	const int a = 92;
	
	int b = 159,
		e = 653,
		vurR,
		vurL,
		result;

	float c = 4.4,
		 *pc = &c;
	
	vurR = (51 - e) >> (sizeof(float));
	vurL = (a | (+b)) / (*pc);
	
	result = vurL >= vurR;
	
	return 0;
}