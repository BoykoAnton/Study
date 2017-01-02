using namespace std;

void btask(string str)
{
	int counterUpp = 0,
		counterLow = 0,
		persentUpp = 0,
		persentLow = 0;

	for (int j = 0; str[j] != '/0'; j++)
		{
			if ((str[j] >= 65) && (str[j] <= 90))
			{
				counterUpp++;
			}
			else if ((str[j] >= 97) && (str[j] <= 122))
			{
				counterLow++;
			}
		}
	

	persentLow = 100 / (counterLow + counterUpp) * counterLow;
	persentUpp = 100 - persentLow;

	cout << "Persent lowercase letters = " << persentLow << "%" << endl;
	cout << "Persent uppercase letters = " << persentUpp << "%" << endl;
	cin >> persentLow;
}