#include<iostream>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		if (sum + 5 * i > 240 - k)
		{
			cout << i - 1;
		}
		else
		{
			sum += 5 * i;
		}
	}
}