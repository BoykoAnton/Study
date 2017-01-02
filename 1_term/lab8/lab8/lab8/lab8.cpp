// lab8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

static int si = 9523;

int main()
{
	static int si1 = 493;

	float f1 = 34,
		  f2 = 566,
		  f3 = 99;

	{

		float f1 = 57;
		f2 = 78;

	}
	f3 = 8;
	{

		f2 = 89;

		{

			static int si2 = 93;
			float f4 = 7;
			
			{

				si2 = 87;
				si = 76;
				f3 = 5;
				float f4 = 4;
				si = 76;
			
			}

			si2 = 13;

		}

	si = 43;

	}
	
	for (int i = 0; i < 5; i = i + 1) 
	{ 
		static int iA = 0; 
		int iB = 0;
		iA = iA + 1;
		iB = iB + 1; 
	}
	
	int *pI; 
	pI = new int; 
	*pI = 25; 
	delete pI;

	{
		pI = new int; 
		*pI = 25; 
		delete pI;

	}

	for (int i = 0; i < 20; i++)
	{
		int *pi1;
		pi1 = new int;
	}

	return 0;
}