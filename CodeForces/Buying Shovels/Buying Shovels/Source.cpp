#include<iostream>
using namespace std;
int main()
{
	int t, n, k;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		if (k >= n)
			cout << 1 << endl;
		else if (k == 1)
			cout << n << endl;
		else if (n % 2 == 0)
		{
			if (k >= n / 2)
			{
				cout << 2 << endl;
			}
			else if (n % k == 0)
			{
				cout << n / k << endl;
			}
			else
			{
				cout << (n / k) + 1 << endl;
			}
		}
		else
		{
			if (k > n / 2)
			{
				cout << 2 << endl;
			}
			else
			{
				cout << (n / k) + 1 << endl;
			}
		}
	}
}