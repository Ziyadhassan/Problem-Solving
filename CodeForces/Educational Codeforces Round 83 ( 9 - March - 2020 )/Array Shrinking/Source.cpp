#include<iostream>
using namespace std;
int main()
{
	int n, Num_Of_Remover = 0;
	int * arr;

	cin >> n;
	if (n > 0)
	{
		arr = new int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < n; i++)
		{
			if (arr[i] == arr[i + 1])
			{
				arr[i] = arr[i] + 1;
				for (int j = i + 1; j < n; j++)
				{
					arr[j] = arr[j + 1];
				}
				i = -1;
				n--;
			}
		}

		cout << n;

		
		delete[]arr;
	}
	else
	{
		cout << 0;
	}
	system("pause");
}