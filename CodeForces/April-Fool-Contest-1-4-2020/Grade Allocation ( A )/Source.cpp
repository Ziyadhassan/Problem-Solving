#include<iostream>
using namespace std;
int main()
{
	/*Solution 1*/
	/*int t, n, max, req, *marks;

	cin >> t;
	while (t--)
	{
		cin >> n >> max;
		marks = new int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> marks[i];
		}
		req = max - marks[0];

		for (int i = 1; i < n; i++)
		{
			if (marks[i] <= req)
			{
				req -= marks[i];
				marks[0] += marks[i];
				marks[i] = 0;
			}
			else if (marks[i] > req)
			{
				marks[i] -= req;
				marks[0] = max;
				req = 0;
			}

			if (marks[1] == max || req == 0)
			{
				break;
			}
		}

		cout << marks[0] << endl;
		max = 0;
		req = 0;
		delete[] marks;
	}*/
	/*Solution 2*/
	/*int t, n, max, req, mymark, x=0;

	cin >> t;
	while (t--)
	{
		cin >> n >> max >> mymark;
		req = max - mymark;

		for (int i = 1; i < n; i++)
		{
			if (req == 0 || mymark == max)
			{
				break;
			}
			cin >> x;
			if (x <= req)
			{
				req -= x;
				mymark += x;
				x = 0;
			}
			else if (x > req)
			{
				x -= req;
				req = 0;
				mymark = max;
				break;
			}
		}
		cout << mymark << endl;
	}*/
	//system("pause");
}