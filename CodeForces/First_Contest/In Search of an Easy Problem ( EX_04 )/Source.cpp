#include<iostream>
using namespace std;
int main()
{
	int Num_Of_People;
	bool Thier_Opinin, Indecator = 1;


	cin >> Num_Of_People;
	for (int i = 0; i < Num_Of_People; i++)
	{
		cin >> Thier_Opinin;
		if (Thier_Opinin)
		{
			Indecator = 0;
		}
	}

	if (Indecator)
	{
		cout << "EASY";
	}
	else
	{
		cout << "HARD";
	}
}