#include<iostream>
using namespace std;
int  main()
{
	int Num_Of_Tests, Size_Of_Each_Array;
	int* arr;
	cin >> Num_Of_Tests;
	while (Num_Of_Tests--)
	{
		cin >> Size_Of_Each_Array;
		arr = new int[Size_Of_Each_Array];

		for (int i = 0; i < Size_Of_Each_Array; i++)
		{
			cin >> arr[i];
		}

		for (int i = 1; i < Size_Of_Each_Array; i++)
		{
			cout << arr[i] << " ";
		}
		cout << arr[0] << endl;
		delete[] arr;
	}
	//system("pause");
}