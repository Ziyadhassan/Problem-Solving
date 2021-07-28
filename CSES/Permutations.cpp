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
    int n;
    cin >> n;

    if (n == 2 || n == 3)
        cout << "NO SOLUTION" << endl;
    else
    {
        int even = 2;
        int odd = 1;

        while (even <= n)
        {
            cout << even << " ";
            even += 2;
        }

        while (odd <= n)
        {
            cout << odd << " ";
            odd += 2;
        }

        cout << endl;
    }
}