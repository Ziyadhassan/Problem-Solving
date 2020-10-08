#include<iostream>
using namespace std;
int main()
{
	int t;
	long long int n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		if (n<=1)
		{
			cout << "-1" << endl;
		}
		else
		{
			for (int i = 0; i < n-1; i++)
			{
				cout << "5";
			}
			cout << "4" << endl;
		}
	}
	//system("pause");
}