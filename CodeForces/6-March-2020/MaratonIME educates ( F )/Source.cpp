#include<iostream>
using namespace std;
int main()
{
	int n, total = 0, x;
	cin >> n;
	while (n--)
	{
		cin >> x;
		total += x;
	}
	cout << ceil(total / 5.0);
	//system("pause");
}