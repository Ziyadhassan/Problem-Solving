#include<iostream>
using namespace std;
int main()
{
	int n, x, y;
	cin >> n;
	while (n--)
	{
		cin >> x >> y;
		if (x == y)
		{
			cout << "Ok" << endl;
		}
		else
		{
			cout << (x + y) / 2 << " " <<((x + y) / 2) << endl;
		}
	}
}


#include <iostream>
using namespace std;
int main()
{
	long double r1, r2, w1, w2;
	cin >> r1 >> r2 >> w1 >> w2;
	if (sqrt(pow(r1, 2) + pow(r2, 2)) > sqrt(pow(w1, 2) + pow(w2, 2)))
	{
		cout << "Wil";
		
	}
	else if (sqrt(pow(w1, 2) + pow(w2, 2)) > sqrt(pow(r1, 2) + pow(r2, 2)))
	{
		cout << "Russo";
	}
	else
		cout << "Empate";
	/*system("pause");*/
	return 0;
}