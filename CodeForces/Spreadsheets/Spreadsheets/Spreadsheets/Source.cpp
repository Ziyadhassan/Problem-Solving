#include<iostream>
#include<string>
using namespace std;


bool IsRxCy(string input)
{
	if (input[0] != 'R')
	{
		return false;
	}
	else
	{
		if (isdigit(input[1]))
		{
			for (int i = 2; i <= strlen(input.c_str()); i++)
			{
				if (input[i] == 'C')
				{
					return true;
				}
			}

			return false;
		}
		else
		{
			return false;
		}
	}
}

char From_Num_To_Letters(long long int &x)
{
	if ((x % 26) != 0)
	{
		char y = (x % 26) + 64;
		x = x / 26;
		return y;
	}
	else
	{
		char y = (x % 26) + 64 + 26;
		x = x / 26 - 1;
		return y;
	}

}

void ToStandard(string input)
{

	string temp = input.substr(1, strlen(input.c_str()));
	long long int Row = stoi(temp);

	int i;
	for (i = 1; i < strlen(input.c_str()); i++)
	{
		if (input[i] == 'C')
		{
			break;
		}
	}

	temp = input.substr(i + 1, input.back());
	long long int Col = stoi(temp);

	i = 0;
	char arr[3];

	while (Col > 0)
	{
		arr[i] = From_Num_To_Letters(Col);
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		cout << arr[j];
	}
	cout << Row << endl;

}

void ToNonStandard(string input)
{
	int i = 0;
	for (i = 0; i < strlen(input.c_str()); i++)
	{
		if (isdigit(input[i]))
		{
			break;
		}
	}
	long long int Row = stoi(input.substr(i, input.back()));
	string Col = input.substr(0, i);
	i = 0;
	long long int x = 0;
	for (int j = strlen(Col.c_str()) - 1; j >= 0; j--)
	{
		x += (Col[j] % 64) * pow(26, i);
		i++;
	}

	cout << "R" << Row << "C" << x << endl;

}


int main()
{
	string input;
	int x;
	cin >> x;

	/*cout << "The input is "; // i was checking that the function "IsRxCy(string input)" is correct
	if (IsRxCy(input))
	{
		cout << "in form of RxCy" << endl;
	}
	else
	{
		cout << "in standard form" << endl;
	}*/

	while (x > 0)
	{
		cin >> input;

		if (IsRxCy(input))
		{
			ToStandard(input);
		}
		else
		{
			ToNonStandard(input);
		}
		x--;
	}

	system("pause");
}