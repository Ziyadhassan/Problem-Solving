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
    string s;
    cin >> s;
    char c = s[0];
    int sum = 1;
    int max = 0;

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == c)
            sum++;
        else
        {
            if (sum > max)
                max = sum;
            sum = 1;
            c = s[i];
        }
    }

    cout << ((max > sum) ? max : sum) << endl;
}