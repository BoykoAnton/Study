// lab9.cpp: ���������� ����� ����� ��� ����������� ����������.
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

