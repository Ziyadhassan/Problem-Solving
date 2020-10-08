#include<iostream>
using namespace std;
int main()
{
	int t, x, count = 0;
	cin >> t;

	while (t--)
	{
		cin >> x;
		count = 0;
		while (x != 1)
		{
			if (x % 6 == 0)
			{
				x = x / 6;
				count++;
			}
			else
			{
				x = x * 2;
				count++;
				if (x % 6 != 0)
				{
					count = -1;
					break;
				}
			}
		}
		cout << count << endl;
	}
}