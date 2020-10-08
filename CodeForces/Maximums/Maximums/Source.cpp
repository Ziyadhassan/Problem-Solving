#include<iostream>
using namespace std;
int main()
{
	long int size;
	long int* a;

	cin >> size;
	a = new long int[size];

	cin >> a[0];
	cout << a[0] << " ";
	long int x;
	long int max = a[0];
	for (int i = 1; i < size - 1; i++)
	{
		cin >> x;
		a[i] = max + x;
		cout << a[i] << " ";

		max = (a[i] > max)? a[i]:max;
	}

	cin >> x;
	a[size - 1] = max + x;
	cout << a[size - 1];
	//system("pause");
}