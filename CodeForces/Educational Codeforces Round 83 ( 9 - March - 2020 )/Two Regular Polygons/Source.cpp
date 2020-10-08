#include<iostream>
using namespace std;
int main()
{
	int n, x, y;
	cin >> n;
	while (n--)
	{
		cin >> x >> y;

		if (x%y == 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	//system("pause");
}