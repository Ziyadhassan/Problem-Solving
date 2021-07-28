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

ull FastPow(ull base, ull power)
{
    if (!power)
        return 1;

    if (power == 1)
        return base;

    if (power & 1)
        return (base * FastPow(base, --power)) % MOD;

    ull res = FastPow(base, power / 2);
    return (res * res) % MOD;
}

int main()
{
    int n;
    cin >> n;
    cout << FastPow(2, n) << endl;
}