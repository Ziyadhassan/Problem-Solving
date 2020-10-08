#include<iostream>
using namespace std;
int main()
{
	int t, n, k;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		if (k > n)
		{
			cout << "NO" << endl;
		}
		else if (n % k == 0)
		{
			cout << "YES" << endl;
			for (int i = 0; i < k - 1; i++)
			{
				cout << n / k << " ";
			}
			cout << n / k << endl;
		}
		else
		{
			if (n % 2 == 0)
			{
				if (k > n / 2.0)
				{
					cout << "NO" << endl;
				}
				else
				{
					cout << "YES" << endl;
					for (int i = 0; i < k - 1; i++)
					{
						cout << "2 ";
					}
					cout << n - (k - 1) * 2 << endl;
				}

			}
			else
			{
				if (n % 2 == 1 && k % 2 == 0)
				{
					cout << "NO" << endl;
				}

				if (n % 2 == 1 && k % 2 == 1)
				{
					cout << "YES" << endl;
					for (int i = 0; i < k - 1; i++)
					{
						cout << "1 ";
					}
					cout << n - (k - 1) << endl;
				}
			}
		}
	}
}