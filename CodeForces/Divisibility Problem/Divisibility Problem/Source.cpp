#include<iostream>
using namespace std;
int main()
{
	long int t, a, b;
	cin >> t;

	while (t--)
	{
		cin >> a >> b;
		if (b >= a)
		{
			cout << b - a << endl;
		}
		else if (a%b == 0)
		{
			cout << 0 << endl;
		}
		else
		{
			cout << b - (a%b) << endl;
		}
	}
	//system("pause");
}