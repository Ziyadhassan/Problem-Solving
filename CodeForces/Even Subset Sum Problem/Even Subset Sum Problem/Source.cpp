#include<iostream>
using namespace std;
int main()
{
	int even = -1, odd[2] = { -1,-1 }, k = 0, n, t;
	long int* arr;

	cin >> t;
	while (t--)
	{
		cin >> n;
		arr = new long int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] % 2 == 0)
			{
				if (even == -1)
				{
					even = i;
				}
				else
				{
					continue;
				}
			}
			else
			{
				if (k < 2)
				{
					odd[k] = i;
					k++;
				}
				else
				{
					continue;
				}
			}
		}

		if (even != -1)
		{
			cout << 1 << endl;
			cout << even + 1 << endl;
		}
		else if ((odd[0] != -1) && (odd[1] != -1))
		{
			cout << 2 << endl;
			cout << odd[0] + 1 << " " << odd[1] + 1 << endl;
		}
		else
		{
			cout << "-1" << endl;
		}
		even = -1;
		odd[0] = -1;
		odd[1] = -1;
		k = 0;
		delete[] arr;
	}
	//system("pause");
}
