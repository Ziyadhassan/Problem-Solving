#include<iostream>
using namespace std;
int main()
{
	int t, n, k;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		int x = n;
		if (n % 2 == 0)
		{
			cout << n + k * 2 << endl;
		}
		else
		{
			for (int i = 3; i <= n; i += 2)
			{
				if (n % i == 0)
				{
					x += i;
					cout << x + (k - 1) * 2 << endl;
					break;
				}
			}
		}
	}
}