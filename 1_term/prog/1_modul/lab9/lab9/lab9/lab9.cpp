// lab9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

static int a = 3;

int main()
{
	a = 234;

	{
		static int b = 8;
	}

	{
		{
			{
				static int a;
				a = 97;
			}
		}
	}

    return 0;
}

