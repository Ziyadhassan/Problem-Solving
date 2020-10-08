#include<iostream>
using namespace std;
int main()
{
	int Wight_Of_Watermelon;

	cin >> Wight_Of_Watermelon;

	/*if (Wight_Of_Watermelon % 2 == 0 && (Wight_Of_Watermelon % 2) % 2 == 0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}*/
	int remender = Wight_Of_Watermelon - 2;

	if ((remender) % 2 == 0 && remender !=0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}