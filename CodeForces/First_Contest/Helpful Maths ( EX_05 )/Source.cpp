#include<iostream>
#include"Sorting Algorithm/Sorting Algorithms/Sorting Algorithms/Source.cpp"
using namespace std;
int main()
{
	char* input = new char[100];
	int Numbers[50], k = 0;

	cin >> input;

	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i] == '1' || input[i] == '2' || input[i] == '3')
		{
			Numbers[k] = input[i];
			k++;
		}
	}

	delete[]input;

	/*for (int i = k - 1; i > 0; i--)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (Numbers[i] > Numbers[i + 1])
			{
				int temp = Numbers[i + 1];
				Numbers[i + 1] = Numbers[i];
				Numbers[i] = temp;
			}
		}

	}*/

	
	bool swapped;
	for (int i = 0; i < k - 1; i++)
	{
		swapped = false;
		for (int j = 0; j < k - i - 1; j++)
		{
			if (Numbers[j] > Numbers[j + 1])
			{
				int temp = Numbers[j + 1];
				Numbers[j + 1] = Numbers[j];
				Numbers[j] = temp;
				swapped = true;
			}
		}

		// IF no two elements were swapped by inner loop, then break 
		if (swapped == false)
			break;
	}

	for (int i = 0; i < k; i++)
	{
		if (i != k-1)
		{
			if (Numbers[i] == 49)
			{
				cout << 1 << "+";
			}
			else if (Numbers[i] == 50)
			{
				cout << 2 << "+";
			}
			else if (Numbers[i] == 51)
			{
				cout << 3 << "+";
			}
		}
		else
		{
			if (Numbers[i] == 49)
			{
				cout << 1;
			}
			else if (Numbers[i] == 50)
			{
				cout << 2;
			}
			else if (Numbers[i] == 51)
			{
				cout << 3;
			}
		}

	}
}