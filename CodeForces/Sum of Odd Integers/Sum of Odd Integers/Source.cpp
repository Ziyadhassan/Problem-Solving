#include <iostream>
using namespace std;
int main()
{
	long int t = 0, n, k;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		if (k > n)
		{
			cout << "NO" << endl;
		}
		else if (((n % 2 == 0 && k % 2 == 0) || (n % 2 == 1 && k % 2 == 1)) && (pow(k, 2) <= n))
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