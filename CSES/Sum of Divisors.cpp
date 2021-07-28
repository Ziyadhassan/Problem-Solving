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

#define ll long long
#define ull unsigned long long

ull brute(ull n)
{
    ull sum = 0;
    ull i = 1;
    while (i <= n)
        sum += ((ull)(n / i) * i++) % MOD, sum %= MOD;
    return sum;
}

ull sumer(ull b, ull e, ull i)
{
    if (b == e)
        return (b % MOD) * (i % MOD);

    ull sum = 0;

    sum = (ull)(((e % MOD) * ((e + 1) % MOD)) / 2) % MOD - ((ull)(((b % MOD) * ((b - 1) % MOD)) / 2) % MOD);
    sum += MOD;
    return (sum % MOD) * (i % MOD);
}

int main()
{
    ull n;
    cin >> n;

    ull sum = 0;
    ull i = 1;

    while (i <= n)
    {
        sum += sumer(i, n / (n / i), n / i);
        sum %= MOD;
        i = (n / (n / i)) + 1;
    }
    cout << sum << endl;
    // cout << "Sol   = " << brute(n) << endl;
}