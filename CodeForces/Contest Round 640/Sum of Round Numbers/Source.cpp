#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		string x;
		cin >> x;
		int min = x.length();
		for (int i = 1; i <= x.length(); i++)
		{
			if (x[i] == '0')
			{
				min--;
			}
		}

		cout << min << endl;
		cout << x[0] % 48 * pow(10, x.length() - 1);
		for (int i = 0; i < x.length(); i++)
		{
			if (x[i] != '0' && i != 0)
			{
				cout << " ";
				cout << x[i] % 48 * pow(10, x.length() - i - 1);
			}

		}
		cout << endl;
	}
}