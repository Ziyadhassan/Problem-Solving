#include<iostream>
using namespace std;
int main()
{
	int n;
	bool found;
	cin >> n;
	while (n--)
	{
		int m, ex[3] = { 1, 2, 3 };
		cin >> m;
		int* a = new int[m];
		int count = 0;
		found = false;
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
			if (a[i] == ex[0])
			{
				ex[0] = ex[1];
				ex[1] = ex[2];
				ex[2]++;
			}
			else if (a[i] == ex[1])
			{
				count++;
				ex[1] = ex[2];
				ex[2]++;
			}
			else if (a[i] == ex[2])
			{
				count += 2;
				ex[2]++;
			}
			else
				found = true;
		}
		if (!found)
		{

			cout << count << endl;
		}
		else
		{
			cout << "Too chaotic" << endl;
		}
		delete[]a;
	}
	return 0;
}