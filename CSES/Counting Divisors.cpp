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

int Divisors(int n)
{
    int divisors = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            divisors += 2;
        if (i * i == n)
            divisors--;
    }
    return divisors;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        cout << Divisors(x) << endl;
    }
}