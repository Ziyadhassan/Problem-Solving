//#include <iostream>
//using namespace std;
//int i, arr[10000];
//int N = 10000;
//
//int LinearSearch(int arr[], int& N, int& key);
//int main()
//{
//	//To fill the array with random numbers between 1 and 100
//	for (int i = 0; i < N; i++)
//	{
//		arr[i] = (rand() % 100) + 1;
//		//cout << arr[i] << endl;
//	}
//
//	int num;
//	cout << "Enter your integer:" << endl;
//	cin >> num;
//
//	//To Search for the number
//	int result = LinearSearch(arr, N, num);
//	if (result == -1)
//		cout << "unfortunately " << num << " is not found -_-" << endl;
//	else
//		cout << "Heeey, we found " << num << " at the index " << result << endl;
//
//	//To display the storge of the program
//	int storge = sizeof(arr) + sizeof(i) + sizeof(N) + sizeof(num);
//	cout << "The storge needed for the whole program = " << storge << " byte" << endl;
//
//	return 0;
//}
//int LinearSearch(int arr[], int& N, int& key)
//{
//	for (i = 0; i < N; i++)
//	{
//		if (key == arr[i])
//			return i;
//	}
//	return -1;
//}