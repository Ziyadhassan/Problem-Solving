#include<iostream>
using namespace std;
int  main()
{
	int n, x, y, a, b;
	cin >> n;
	while (n--)
	{
		cin >> x >> y >> a >> b;

		if ((y-x)%(a+b) == 0)
		{
			cout << (y - x) / (a + b) << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	}
	//system("pause");
}