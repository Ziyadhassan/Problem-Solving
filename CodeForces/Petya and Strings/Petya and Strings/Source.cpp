//https://codeforces.com/contest/112/problem/A
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string S1, S2;
	char C1, C2;
	bool indicator = false;
	cin >> S1 >> S2;

	for (int i = 0; i < S1.length(); i++)
	{
		C1 = S1[i];
		C2 = S2[i];

		if (C1 > 96)
		{
			C1 = C1 - 32;
		}
		if (C2 > 96)
		{
			C2 = C2 - 32;
		}

		if (C1 > C2)
		{
			cout << 1;
			indicator = true;
			break;
		}
		else if (C2 > C1)
		{
			cout << -1;
			indicator = true;
			break;
		}
	}
	if (!indicator)
		cout << 0;
	return 0;
}