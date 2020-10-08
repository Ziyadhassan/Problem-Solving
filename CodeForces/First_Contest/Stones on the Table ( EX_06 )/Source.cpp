#include<iostream>
using namespace std;
int main()
{
	int Num_Of_Stones, Num_Of_Removes = 0;
	char* Thier_Colors = new char[50];
	char Last_Colors;

	cin >> Num_Of_Stones;
	cin >> Thier_Colors;

	Last_Colors = Thier_Colors[0];

	for (int i = 0; i < Num_Of_Stones; i++)
	{
		if (Thier_Colors[i] != Last_Colors)
		{
			Last_Colors = Thier_Colors[i];
		}
		else
		{
			Num_Of_Removes++;
		}
	}
	delete[] Thier_Colors;
	cout << Num_Of_Removes - 1;
}