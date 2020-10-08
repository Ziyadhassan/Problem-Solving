#include<iostream>
#include<string>
using namespace std;
int main()
{
	long long unsigned  int n, i = 0;
	cin >> n;
	string * arr = new string[n];
	while (n--)
	{
		bool indecator = 1;
		cin >> arr[i];

		for (long long unsigned int j = 0; j < i; j++)
		{
			if (arr[j] == arr[i])
			{
				indecator = 0;
				if (isdigit(arr[i].back()))
				{
					long long unsigned int k = arr[i].back();
					k++;
					char temp =(char)k;
					arr[i].resize(strlen(arr[i].c_str()) - 1);
					arr[i] = arr[i] + temp;
				}
				else
				{
					arr[i] = arr[i] + "1";
				}
			}
		}

		if (indecator)
		{
			cout << "OK" << endl;
		}
		else
		{
			cout << arr[i] << endl;
		}

		i++;
	}
	//system("pause");
}