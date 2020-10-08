#include<iostream>
using namespace std;
int main()
{
	int Num_Of_Students, Students_in_Team, Marks[100];

	cin >> Num_Of_Students >> Students_in_Team;

	int Num_Of_Distinct_Marks = 0, Their_Position[100];
	int k = 0;
	bool indicator;

	for (int i = 0; i < Num_Of_Students; i++)
	{
		cin >> Marks[i];
		indicator = 1;
		for (int j = 0; j < i; j++)
		{
			if (Marks[j] == Marks[i])
			{
				indicator = 0;
				break;
			}
		}
		if (indicator)
		{
			Num_Of_Distinct_Marks++;
			Their_Position[k] = i;
			k++;
		}
	}

	if (Num_Of_Distinct_Marks >= Students_in_Team)
	{
		cout << "YES" << endl;
		for (int i = 0; i < Students_in_Team; i++)
		{
			cout << Their_Position[i] + 1<<" ";
		}
	}
	else
	{
		cout << "NO";
	}
}