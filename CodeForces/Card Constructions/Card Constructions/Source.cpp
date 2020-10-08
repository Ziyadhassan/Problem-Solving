//https://codeforces.com/problemset/problem/1345/B
#include<iostream>
using namespace std;
int main()
{
	int t, n, h, x;
	cin >> t;
	while (t--)
	{
		x = 0;
		cin >> n;
		while (n > 1)
		{
			h = floor((-0.5 + sqrt(0.25 + 6 * n)) / 3); // Get the highest possible hight from the number of cards
			n -= 1.5 * h * h + 0.5 * h; // Subtract the number of card used to build that possible primid
			x++;
		}
		cout << x << endl;
	}
}