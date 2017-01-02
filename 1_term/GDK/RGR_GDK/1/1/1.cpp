#include "stdafx.h"
void Formating(char mas[], int size);
void main()
{
	const int size = 200;
	char str[size] = "sdfjhsdf.sdf. j";
	Formating(str, size);
}
void Formating(char str[], int size)
{
	int i = 0;
	while (str[i] != 0)
	{
		if (str[i] == '.' && str[i + 1] >= 'A' && str[i + 1] <= 'Z')
		{
			int j = i;
			while (str[j] != 0)
			{
				j++;
			}
			do
			{
				str[j + 1] = str[j];
			    j--;
			}
			while (j != i);
			str[i + 1] = ' ';
		}
		if (str[i] == '.' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] = str[i + 1] - 32;
			int j = i;
			while (str[j] != 0)
			{
				j++;
			}
			do			
{
				str[j + 1] = str[j];
			j--;
			}
			while (j != i);
			str[i + 1] = ' ';
		}
		if (str[i] == '.' && str[i + 1] == 0)
		{
			int j = i;
			while (str[j] != 0)
			{
				j++;
			}
			do
			{
				str[j + 1] = str[j];
			j--;
			}
			while (j != i);
			str[i + 1] = ' ';
		}
		switch (i)
		{
		case 0:
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			break;
		default:
			if (str[i] == '.')
			{
				bool flag = false;
				int j = i;
				while (j < size && flag == false)
				{
					if (str[j] >= 65 && str[j] <= 90)
					{
						flag = true;
					}
					if (str[j] >= 97 && str[j] <= 122)
					{
						str[j] = str[j] - 32;
						flag = true;
					}
					j++;
				}
			}
			break;
		}
		i++;
	}
}
