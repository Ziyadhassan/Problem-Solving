#include <iostream>
using namespace std;
int main()
{
	int n, *a, *b, count = 0;
	cin >> n;
	a = new int[n];
	b = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	for (int i = 0; i <= n; i++)
	{
		if (i == n)
		{
			break;
		}
		for (int j = i+1; j < n; j++)
		{
			if (a[i] + a[j] > b[i] +b[j])
			{
				count++;
			}
		}
	}
	cout << count;
	//system("pause");
}