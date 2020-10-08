#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int C1 = 0; int C2 = 0, i, arr[1000]; float t1;
int N = 1000;

int BinarySearch(int arr[], int N, int key);
int LinearSearch(int arr[], int N, int key);

int main()
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = (rand() % 1200) + 1;
	}

	int num;
	cout << "Enter your integer:" << endl;
	cin >> num;

	// Finding the Results in Linear Search\
	// We did Linear search first as the array will be sorted
	// if we Binary searched first the array will be sorted
	int result_Linear = LinearSearch(arr, N, num);
	cout << "Linear search: " << endl;
	if (result_Linear == -1)
		cout << "unfortunately " << num << " is not found -_-" << endl;
	else
		cout << "Heeey, we found " << num << " at the index " << result_Linear << endl;
	cout << "Number of comparisons= " << C2 << endl;
	cout << "time: " << (float)t1 / CLOCKS_PER_SEC << " seconds" << endl;

	// Finding the Result in Binary Search
	int result = BinarySearch(arr, N, num);
	cout << "Binary search: " << endl;
	if (result == -1)
		cout << "unfortunately " << num << " is not found -_-" << endl;
	else
		cout << "Heeey, we found " << num << " at the index " << result << endl;
	cout << "Number of comparisons= " << C1 << endl;
	cout << "time: " << (float)t1 / CLOCKS_PER_SEC << " seconds" << endl;

	
	return 0;
}
int BinarySearch(int arr[], int N, int key)
{
	t1 = clock();
	int j, t;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	int l, m, h;
	l = 0; h = N - l;
	while (l <= h)
	{
		C1++;
		m = (l + h) / 2;
		if (key == arr[m])
		{
			// To approximately calculate the time
			t1 = clock() - t1;
			return m;
		}
		else if (key < arr[m])
			h = m - 1;
		else
			l = m + 1;
	}
	t1 = clock() - t1;
	return -1;
}
int LinearSearch(int arr[], int N, int key)
{
	t1 = clock();
	for (i = 0; i < N; i++)
	{
		C2++;
		if (key == arr[i])
		{
			t1 = clock() - t1;
			return i;
		}
	}
	t1 = clock() - t1;
	return -1;
}
