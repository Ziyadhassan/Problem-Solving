#include<iostream>
using namespace std;

void SortPairs(pair<int, int> arr[], int size)
{
	int x = -1;
	/*for (int i = 0; i < size; i++)
	{
		if (arr[size].first > arr[i].first)
		{
			continue;
		}
		else
		{
			x = i;
			break;
		}
	}

	if (x!= -1)
	{
		if (arr[size].first == arr[x].first)
		{
			for (int i = x; i < size; i++)
			{
				if (arr[size].second > arr[i].second)
				{
					continue;
				}
				else
				{
					x = i;
					break;
				}
			}
			pair<int, int > temp = arr[size];
			for (int i = size; i <= x; i--)
			{
				arr[i] = arr[i - 1];
			}
			arr[x+1] = temp;
		}
		else
		{
			pair<int, int > temp = arr[size];
			for (int i = size; i < x; i--)
			{
				arr[i] = arr[i - 1];
			}
			arr[x] = temp;
		}
	}*/
	bool swapped;
	for (int i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j].first > arr[j + 1].first)
			{
				pair<int, int> temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				swapped = true;
			}
		}

		// IF no two elements were swapped by inner loop, then break 
		if (swapped == false)
			break;
	}

	for (int i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j].first == arr[j + 1].first && arr[j].second > arr[j + 1].second)
			{
				pair<int, int> temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				swapped = true;
			}
		}

		// IF no two elements were swapped by inner loop, then break 
		if (swapped == false)
			break;
	}
}

int main()
{
	int n, t;
	pair<int, int >* Corr;
	char Pass[2000];
	int k = 0;
	bool indecator = 1;

	cin >> t;
	while (t--)
	{
		cin >> n;
		Corr = new pair<int, int>[n + 1];

		Corr[0] = { 0,0 };

		for (int i = 1; i <= n; i++)
		{
			cin >> Corr[i].first >> Corr[i].second;
		}

		SortPairs(Corr, n + 1);

		for (int i = 1; i <= n; i++)
		{
			if (Corr[i].first > Corr[i - 1].first && Corr[i].second >= Corr[i - 1].second)
			{
				int x = Corr[i].first - Corr[i - 1].first;
				int y = Corr[i].second - Corr[i - 1].second;
				while (x--)
				{
					Pass[k] = 'R';
					k++;
				}
				while (y--)
				{
					Pass[k] = 'U';
					k++;
				}
			}
			else if (Corr[i].first == Corr[i - 1].first)
			{
				if (Corr[i].second > Corr[i - 1].second)
				{
					int y = Corr[i].second - Corr[i - 1].second;
					while (y--)
					{
						Pass[k] = 'U';
						k++;
					}
				}
				else
				{
					indecator = 0;
					break;
				}
			}
			else
			{
				indecator = 0;
				break;
			}
		}

		if (indecator)
		{
			cout << "YES" << endl;
			for (int i = 0; i < k; i++)
			{
				cout << Pass[i];
			}
			cout << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		k = 0;
		indecator = 1;
		delete[] Corr;
	}
	//system("pause");
}