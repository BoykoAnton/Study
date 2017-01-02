#include "stdafx.h"


void Subprogram2(char str[], int size, float &lower_percent, float &upper_percent)
{
	int total = 0;
	int lowercase = 0;
	int uppercase = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			total++;
		i++;
	}

	for (int i = 0; i < size; i++)
		if (int(str[i]) >= 65 && int(str[i]) <= 90)
			uppercase++;

	for (int i = 0; i < size; i++)
		if (int(str[i]) >= 97 && int(str[i]) <= 122)
			lowercase++;
	lower_percent = (float(lowercase) / float(total)) * 100;
	upper_percent = (float(uppercase) / float(total)) * 100;
}


void main()
{
	const int SIZE = 128;
	char str[SIZE] = "dfg HJKJ449gHBUIJ ij";

	float lower_percent;
	float upper_percent;

	Subprogram2(str, SIZE, lower_percent, upper_percent);

}
