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
        int a, b;
        cin >> a >> b;

        if ((a + b) % 3 || (a - b + (a + b) / 3) < 0 || (a - b + (a + b) / 3) & 1 || (a - b + (a + b) / 3) / 2 - a + b < 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}