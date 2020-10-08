#include<iostream>
using namespace std;
int main()
{
	int Num_of_participants, Allowed_Score, Passed_Participants = 0;

	cin >> Num_of_participants >> Allowed_Score;

	int Participants_Score[100];

	for (int i = 0; i < Num_of_participants; i++)
	{
		cin >> Participants_Score[i];
	}

	for (int i = 0; i < Num_of_participants; i++)
	{

		if (Participants_Score[i] >= Participants_Score[Allowed_Score] && Participants_Score[i] > 0)
		{
			Passed_Participants++;
		}
		else
		{
			break;
		}
	}

	cout << Passed_Participants;
	system("pause");
}