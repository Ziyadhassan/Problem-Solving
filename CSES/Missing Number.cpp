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
    ull n;
    cin >> n;

    ull sum = (n * (n + 1)) / 2;
    ull sum2 = 0;

    n--;
    while (n--)
    {
        int x;
        cin >> x;
        sum2 += x;
    }
    cout << sum - sum2 << endl;
}