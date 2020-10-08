#include<iostream>
using namespace std;
int main()
{
	long long int t, a, b, c, d, x, y, x1, y1, x2, y2;
	long long int  relative_X1, relative_Y1;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> c >> d >> x >> y >> x1 >> y1 >> x2 >> y2;

		if (  (y1 == y2 && (c!=0 || d!=0)) || (x1 == x2 && (a != 0 || b != 0))) // Line ( or Point ) Region 
		{
			cout << "NO" << endl;
		}
		else
		{
			relative_X1 = x + b - a;
			//relative_X2 = x + a - b;
			relative_Y1 = y + d - c;
			//relative_Y2 = y + c - d;
			bool xx = relative_X1 >= x1 && relative_X1 <= x2;
			bool yy = relative_Y1 >= y1 && relative_Y1 <= y2;

			if (xx&yy)
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
	}
	//system("pause");
}