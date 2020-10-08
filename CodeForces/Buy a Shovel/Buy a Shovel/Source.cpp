#include<iostream>
using namespace std;
int main()
{
	int k, r;
	cin >> k >> r;

	int i = 1;
	while (true)
	{
		if (((i * k) % 10) == r || ((i * k) % 10) == 0)
		{
			break;
		}
		i++;
	}
	cout << i;

}