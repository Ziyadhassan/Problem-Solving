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

    vector<int> v(n);
    ull sum = 0;

    cin >> v[0];
    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
        if (v[i] < v[i - 1])
            sum += v[i - 1] - v[i], v[i] = v[i - 1];
    }
    cout << sum << endl;
}