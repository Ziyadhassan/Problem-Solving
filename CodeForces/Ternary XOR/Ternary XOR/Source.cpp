#include<iostream>
#include<string>
using namespace std;
void Digit(int x, int index, int arr[])
{
	if (x >= 10)
	{
		Digit(x / 10, index - 1, arr);
	}
	arr[index] = x % 10;
}
void Digit_String(string x, int arr[])
{
	for (int i = 0; i < x.length(); i++)
	{
		arr[i] = x[i]%48;
	}
}
int main()
{
	int t, n;
	int* a, *b, *x, i = 0;
	string y;
	bool indicator = 0;
	cin >> t;
	while (t--)
	{
		cin >> n;
		a = new int[n];
		b = new int[n];
		x = new int[n];


		cin >> y;
		Digit_String(y, x);

		for (i = 0; i < n; i++)
		{
			if (x[i] == 0)
			{
				a[i] = 0;
				b[i] = 0;
			}
			else if (x[i] == 2)
			{
				a[i] = 1;
				b[i] = 1;
			}
			else if (x[i] == 1)
			{
				a[i] = 1;
				b[i] = 0;
				indicator = 1;
				break;
			}
		}

		if (indicator)
		{
			for (int j = i + 1; j < n; j++)
			{
				b[j] = x[j];
				a[j] = 0;
			}
		}

		for (int j = 0; j < n; j++)
		{
			cout << a[j];
		}
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			cout << b[j];
		}
		cout << endl;
		indicator = 0;
		delete[] a;
		delete[] b;
		delete[] x;
	}
	//system("pause");
}