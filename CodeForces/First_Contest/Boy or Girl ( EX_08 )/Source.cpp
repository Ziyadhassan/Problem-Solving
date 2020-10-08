#include<iostream>
using namespace std;
int main()
{
	char* User_Name = new char[100];
	int Distinct_Letters = 0;
	bool indecator = 0;

	cin >> User_Name;


	for (int i = 0; i < strlen(User_Name); i++)
	{
		for (int j = i; j < strlen(User_Name); j++)
		{
			indecator = 0;
			if (i == j)
			{
				continue;
			}
			if (User_Name[i] == User_Name[j])
			{
				indecator = 1;
				break;
			}
		}
		if (!indecator)
		{
			Distinct_Letters++;
		}
	}

	indecator = Distinct_Letters % 2;

	if (indecator)
	{
		cout << "IGNORE HIM!";
	}
	else
	{
		cout << "CHAT WITH HER!";
	}
	delete[] User_Name;
}