// 2.3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

enum name_student
{
	Maxim,
	Vasya,
	Dima,
	Vlad,
	Roma,
	Sasha,
	Vova
};

struct dStudent
{
	name_student name;
	int height,
		course;
	float weight;
	double srbal;
	char* city;
};

int main()
{
	dStudent mass_dStudent[7];
	
	///////////////////////////////////////////////////////////////////////
	mass_dStudent[0].name = Vova;
	mass_dStudent[0].height = 180;
	mass_dStudent[0].weight = 70;
	mass_dStudent[0].course = 4;
	mass_dStudent[0].city = "Kiev";
	mass_dStudent[0].srbal = 4.5;

	mass_dStudent[1].name = Sasha;
	mass_dStudent[1].height = 182;
	mass_dStudent[1].weight = 71;
	mass_dStudent[1].course = 3;
	mass_dStudent[1].city = "London";
	mass_dStudent[1].srbal = 4.0;

	mass_dStudent[2].name = Maxim;
	mass_dStudent[2].height = 176;
	mass_dStudent[2].weight = 75;
	mass_dStudent[2].course = 3;
	mass_dStudent[2].city = "Kiev";
	mass_dStudent[2].srbal = 4.9;

	mass_dStudent[3].name = Vasya;
	mass_dStudent[3].height = 190;
	mass_dStudent[3].weight = 70;
	mass_dStudent[3].course = 5;
	mass_dStudent[3].city = "Kiev";
	mass_dStudent[3].srbal = 4.8;

	mass_dStudent[4].name = Dima;
	mass_dStudent[4].height = 189;
	mass_dStudent[4].weight = 90;
	mass_dStudent[4].course = 1;
	mass_dStudent[4].city = "Moscow";
	mass_dStudent[4].srbal = 3.6;

	mass_dStudent[5].name = Vlad;
	mass_dStudent[5].height = 181;
	mass_dStudent[5].weight = 80;
	mass_dStudent[5].course = 2;
	mass_dStudent[5].city = "Kiev";
	mass_dStudent[5].srbal = 5.0;

	mass_dStudent[6].name = Sasha;
	mass_dStudent[6].height = 180;
	mass_dStudent[6].weight = 70;
	mass_dStudent[6].course = 3;
	mass_dStudent[6].city = "Kiev";
	mass_dStudent[6].srbal = 4.4;

	int counter = 0;
	for (int i = 0; i < 7; i++)
	{
		if ((mass_dStudent[i].height-mass_dStudent[i].weight) == 110)
		{
			counter++;
		}
	}
	int counterKiev = 0;
	float persent = 0;
	for (int i = 0; i < 7; i++)
	{
		if (mass_dStudent[i].course == 3 && mass_dStudent[i].city == "Kiev")
		{
			counterKiev++;
			persent = (100 / 7)*counterKiev;
		}
	}

	int counter_sr_bal = 0;

	for (int i = 0; i < 7; i++)
	{
		if (mass_dStudent[i].srbal > 4.4)
		{
			counter_sr_bal++;
		}
	}

	return 0;
}