#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		int last = 0;
		int moves = 0;
		bool ind = true;
		int a = 0, b = 0;
		for (int i = 0; i < n; i++)
		{
			if (ind)
			{
				int sum = 0;
				int dummy = i;
				for (int j = i; j < n; j++)
				{
					if (sum <= last)
					{
						sum += arr[j];
					}
					else
					{
						i = j;
						break;
					}
				}
				last = sum;
				moves++;
				a += sum;
				if (i != dummy)
					i--;
				else
					break;
			}
			else
			{
				int sum = 0;
				for (int j = n - 1; j >= i; j--)
				{
					if (sum <= last)
					{
						sum += arr[j];
						n--;
					}
					else
					{
						break;
					}
				}
				last = sum;
				moves++;
				b += sum;
				i--;
			}
			ind = !ind;
		}
		cout << moves << " " << a << " " << b << endl;
	}

}
