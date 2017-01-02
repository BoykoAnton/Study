#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "b.hpp"

using namespace std;

int main() {
	string line;
	ifstream myfile("text.txt");
	
	int i = 0;

	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
			i++;
		}
		btask(line);
	}

	else cout << "Unable to open file";

	myfile.close();

	btask(line);

	return 0;
}