// labs_2_3_4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	/*// lab 1.2
	// ex 1

	const short varS1 = 0x5d;
	short varS2 = -0100;
	short varS3;
	varS3 = 398;

	const int varI1 = 89;
	//int varI2 = 23.7; // дійсний тип
	int varI3;
	varI3 = -45621;

	long varL1 = 9876543210;
	//const long varL2 = 5.5; // дійсний тип
	long varL3;
	varL3 = -42764;

	const unsigned short varUS1 = 7532;
	//unsigned short varUS2 = -10; // тільки дод значення
	unsigned short varUS3;
	varUS3 = 68909;
	//ex 2
	
	float varF1 = 0.02000405434;
	//const float varF2 = -374.12 * 10 ^ 43;//тип вичислення без області видимості
	float varF3;
	varF3 = 98765432753.76;

	double varD1;
	//varD1 = -0.321 * 10 ^ 1097;//тип вичислення без області видимості
	//const double varD2 = 98.76 * 10 ^ (-86);//тип вичислення без області видимості
									  
	//ex 3

	int a,
		b,
		c;
	double e;

	a = -23;
	b = +a;
	b = -a;
	
	a = 231;
	b = -57;
	c = a + b;

	a = 48;
	b = 207;
	c = a - b;

	a = 12;
	b = 9;
	c = a * b;

	a = 10;
	b = 2;
	c = a / b;

	a = 10;
	b = 4;
	c = (int)a / b;

	a = 24;
	b = 5;
	c = a % b;

	a = 45;
	b = 9;
	e = a / b;


	//lab 1.3
	//ex 1
	*/
	int value1,
		value2,
		value3,
		value4,
		value5,
		value6;
	
	// операція інверсії
	value1 = ~ 24;
	
	// побітове "і"
	value2 = 95 & 128;
	
	// побітове "або" 
	value3 = 140 | 71;
	
	// побітове "або що виключає" 
	value4 = 40 ^ 84;
	
	// зміщення вліво
	value5 = 1003 << 7;
	
	// зміщення вправо
	value6 = -89 >> 7;

	//lab 1.4
	//ex 1

	int lb = 22, 
		lc = 34, 
		ld = 7, 
		la1 = 67, 
		lb1 = 67, 
		ld1 = 44;

	double la = 23.5,
		   lc1 = 27.4;
	
	bool condition1,
		 condition2;
	
	// перевірка умови з першою 4 чисел
	condition1 = !((la || lb) <= (lc == ld));
	
	// перевірка умови з другою 4 чисел
	condition2 = !((la1 || lb1) <= (lc1 == ld1));

	return 0;
}