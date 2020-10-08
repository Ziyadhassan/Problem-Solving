#include<iostream>
using namespace std;
int main()
{
	int t, x, y, n;
	cin >> t;

	while (t--)
	{
		cin >> x >> y >> n;
		if (y == 0)
		{
			while (n % x != 0)
			{
				n--;
			}
			cout << n << endl;
		}
		else if (n%x == y)
		{
			cout << n << endl;
		}
		else if (n % x < y)
		{
			cout << n - ((n % x) + 2) << endl;
		}
		else
		{
			cout << n - ((n % x) - (x - y)) << endl;
		}
	}
}