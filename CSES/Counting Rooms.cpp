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

#define ull unsigned long long
#define ll long long

int n, m, ans = 0;
char **c;
bool **b;
void traverse(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return;

    if (c[i][j] != '.' || b[i][j])
        return;

    b[i][j] = true;

    traverse(i - 1, j);
    traverse(i, j + 1);
    traverse(i + 1, j);
    traverse(i, j - 1);
}

int main()
{
    cin >> n >> m;

    c = new char *[n];
    b = new bool *[n];

    for (int i = 0; i < n; i++)
    {
        c[i] = new char[m];
        b[i] = new bool[m];
        for (int j = 0; j < m; j++)
        {
            cin >> c[i][j];
            b[i][j] = false;
        }
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (c[i][j] == '.' && !b[i][j])
            {
                traverse(i, j);
                ans++;
            }

    cout << ans << endl;
}