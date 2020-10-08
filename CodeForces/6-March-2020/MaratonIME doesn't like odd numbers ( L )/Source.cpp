#include<iostream>
using namespace std;
int main()
{
	int n, x;
	long long int total = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		total += x;
	}

	if (total % 2 == 0)
	{
		cout << total;
	}
	else
	{
		cout << total - 1;
	}
	//system("pause");
}