#include <iostream>
#include <map>
#include <set>
#include <iterator>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

#define MaxI 2147483647
#define MinI -2147483648
#define MaxLL 9223372036854775807
#define MinLL -9223372036854775808
#define MaxULL 18446744073709551615
#define MOD 1000000007

#define ull unsigned long long
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ull x, y;
        cin >> x >> y;

        if (x > y || (x == y && x % 2 == 0))
            if (x & 1)
                cout << (x - 1) * (x - 1) + y << endl;
            else
                cout << x * x - y + 1 << endl;
        else if (y & 1)
            cout << y * y - x + 1 << endl;
        else
            cout << (y - 1) * (y - 1) + x << endl;
    }
}