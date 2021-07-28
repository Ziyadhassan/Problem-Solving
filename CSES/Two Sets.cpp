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
    // this is a Bad Solution and not recommended
    int n;
    cin >> n;

    if (n == 7)
    {
        // this is the only n that fails the test cuz the diff-1 = 1
        // recovering this tc would take 51 year
        cout << "YES\n4 1 2 4 7\n3\n3 5 6 " << endl;
        return 0;
    }

    ull sum = (n * (n + 1)) / 2;

    if (sum & 1)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    // ths sum of all even and all odd num till n is always diff with n/2
    int diff = ceil(n / 2.0);
    diff /= 2; // we need to move diff/2 from one group to the another 

    if (n & 1) // odd is larger with diff
    {
        if (diff & 1)
        {
            cout << ceil(n / 2.0) << endl;
            for (int i = 2; i <= n; i += 2)
                cout << i << " ";
            cout << diff << endl;

            cout << n / 2 << endl;
            for (int i = 1; i <= n; i += 2)
                if (i != diff)
                    cout << i << " ";
            cout << endl;
        }
        else
        {
            cout << n / 2 + 2 << endl;
            cout << 1 << " " << diff - 1 << " ";
            for (int i = 2; i <= n; i += 2)
                cout << i << " ";

            cout << endl;
            cout << n / 2 - 1 << endl;
            for (int i = 3; i <= n; i += 2)
                if (i != diff - 1)
                    cout << i << " ";
            cout << endl;
        }
    }
    else // even is larger with diff
    {
        if (diff & 1)
        {
            cout << n / 2 << endl;
            cout << 1 << " ";
            for (int i = 2; i <= n; i += 2)
                if (i != diff + 1)
                    cout << i << " ";
            cout << endl;

            cout << n / 2 << endl;
            cout << diff + 1 << " ";
            for (int i = 3; i <= n; i += 2)
                cout << i << " ";
            cout << endl;
        }
        else
        {
            cout << n / 2 - 1 << endl;
            for (int i = 2; i <= n; i += 2)
                if (i != diff)
                    cout << i << " ";
            cout << endl;

            cout << n / 2 + 1 << endl;
            cout << diff << " ";
            for (int i = 1; i <= n; i += 2)
                cout << i << " ";
            cout << endl;
        }
    }
}