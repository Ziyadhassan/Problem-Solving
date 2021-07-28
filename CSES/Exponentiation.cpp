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

#define int unsigned long long
#define ll long long

// int fastpow(int base, int power)
// {
//     int res = 1;
//     int temp = base;
//     while (power)
//     {
//         if (power & 1)
//             res *= temp, power--, res %= MOD;

//         if (power)
//             base *= base;
//         power /= 2;
//         base %= MOD;
//     }
//     return (res * base) % MOD;
// }

int fastpow(int base, int power)
{
    if (power == 1)
        return base;

    if (power == 0)
        return 1;

    if (power & 1)
        return (base * (fastpow(base, --power)) % MOD) % MOD;

    int res = (fastpow(base, power / 2)) % MOD;
    return (res * res) % MOD;
}

int32_t main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int base, power;
        cin >> base >> power;
        cout << fastpow(base, power) << endl;
    }
}