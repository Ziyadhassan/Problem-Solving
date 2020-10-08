#include<iostream>
using namespace std;

//Was a try to binary to find the starter
int Least_Factor(int n, int start, int end, int v) // as a binary seacher
{
	int mid = 0;

	if (n % 2 == 0)
	{
		mid = (n / 2)*n;
	}
	else
	{
		mid = n * (0.5*n + 1);
	}

	int line = pow(mid / n, 2);
	if (v > line && v < mid)
	{
		return sqrt(line);
	}
	if (mid < v)
	{
		return Least_Factor(n, mid + n, end, v);
	}
	else if (mid > v)
	{
		return Least_Factor(n, start, end - n, v);
	}
}


int main()
{
	long long unsigned int n, Num_To_Search, Found = 0;
	cin >> n >> Num_To_Search;


	// to display the matrix
	/*for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i * j << ' ';
		}
		cout << endl;
	}*/


	// trival soultion which takes much time on big numbers
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i*j == Num_To_Search)
			{
				Found++;
			}
		}
	}
	cout << Found << endl;
	Found = 0;*/



	//Another method 
	/*int j = 1;
	for (int i = 1; i <= n; i++)
	{
		if (j > n)
		{
			break;
		}
		if (i >= j * n)
		{
			if (i == Num_To_Search)
			{
				Found += 2;
			}
			j++;
			i = pow(j, 2);
			continue;
		}
		if (i*j == Num_To_Search)
		{
			Found += 2;
		}


	}
	cout << "answer of first try = " << Found << endl;*/


	//Another Reduced Method
	/*if (n != 0)
	{
		long long int tester = sqrt(Num_To_Search);
		if (Num_To_Search == 1)
		{
			cout << 1;

		}
		else if (pow(tester, 2) == Num_To_Search && Num_To_Search < n)
		{
			cout << 1;
		}
		else if (Num_To_Search > pow(n, 2))
		{
			cout << 0;
		}
		else
		{
			long long unsigned int i = 1;
			while (i*n < Num_To_Search)
			{
				i++;
			}

			if (i*n == Num_To_Search)
			{
				Found += 2;
				i++;
			}

			for (i; i <= n; i++)
			{
				if (pow(i, 2) > Num_To_Search)
				{
					break;
				}

				for (long long int j = pow(i, 2); j <= i * n; j += i)
				{
					if (j == Num_To_Search)
					{
						Found += 2;
						break;
					}
				}
			}
			cout << Found;
		}
	}
	else
	{
		cout << 0;
	}*/

	int tester = floor(sqrt(Num_To_Search));
	for (int i = tester; i <= n; i++)
	{
		if (Num_To_Search%i==0 && Num_To_Search/i <=tester)
		{
			Found += 2;
			if (i*i == Num_To_Search)
			{
				Found--;
			}
		}
	}
	cout << Found;
}