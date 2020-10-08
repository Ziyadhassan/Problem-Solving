#include<iostream>
using namespace std;
int main()
{
	long int a, b, x;
	cin >> a >> b >> x;
	if ((a+b)%x == 0 || a%x == 0 || b%x == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	//system("pause");
}