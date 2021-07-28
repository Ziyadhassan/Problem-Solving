#include <iostream>
#include <map>
#include <set>
#include <iterator>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <queue>
#include <unistd.h>
using namespace std;

#define MaxI 2147483647
#define MinI -2147483648
#define MaxLL 9223372036854775807
#define MinLL -9223372036854775808
#define MaxULL 18446744073709551615

#define ull unsigned long long
#define ll long long
int n, m, ai, aj;
char **c;
bool **b;
pair<int, int> **k;
vector<char> steps;

void traverse(int i, int j, char step, vector<char> v)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return;

    if (c[i][j] == '#' || b[i][j])
        return;

    if (i != ai || j != aj)
        v.push_back(step);

    if (steps.size() != 0 && v.size() >= steps.size())
        return;

    if (c[i][j] == 'B')
    {
        steps = v;
        return;
    }

    b[i][j] = true;

    traverse(i - 1, j, 'U', v);
    traverse(i, j + 1, 'R', v);
    traverse(i, j - 1, 'L', v);
    traverse(i + 1, j, 'D', v);
    b[i][j] = false;
}

int main()
{
    cin >> n >> m;

    c = new char *[n];
    b = new bool *[n];
    k = new pair<int, int> *[n];
    for (int i = 0; i < n; i++)
    {
        c[i] = new char[m];
        b[i] = new bool[m];
        k[i] = new pair<int, int>[m];
        for (int j = 0; j < m; j++)
        {
            cin >> c[i][j];
            if (c[i][j] == 'A')
            {
                ai = i;
                aj = j;
            }
            b[i][j] = false;
        }
    }

    //vector<char> v;
    //traverse(ai, aj, '.', v);

    queue<pair<int, int>> q;
    q.push({ai, aj});

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();

        b[p.first][p.second] = true;

        if (c[p.first][p.second] == 'B')
        {
            cout << "YES\n";
            int i = p.first;
            int j = p.second;
            string s = "";

            while (i != ai || j != aj)
            {
                //cout << i << " " << j << " , with p = " << k[i][j].first << " " << k[i][j].second << endl;

                if (k[i][j].first == i - 1)
                    s.insert(0, "D");
                else if (k[i][j].first == i + 1)
                    s.insert(0, "U");
                else if (k[i][j].second == j - 1)
                    s.insert(0, "R");
                else
                    s.insert(0, "L");

                int jj = k[i][j].second;
                i = k[i][j].first;
                j = jj;
            }

            cout << s.size() << endl
                 << s << endl;
            return 0;
        }

        // UP
        if (p.first > 0 && c[p.first - 1][p.second] != '#' && !b[p.first - 1][p.second])
        {
            //cout << "PUSHED " << p.first - 1 << " " << p.second << " , with p = " << p.first << " " << p.second << endl;

            q.push({p.first - 1, p.second});
            k[p.first - 1][p.second] = {p.first, p.second};
        }
        // Down
        if (p.first < n - 1 && c[p.first + 1][p.second] != '#' && !b[p.first + 1][p.second])
        {
            //cout << "PUSHED " << p.first + 1 << " " << p.second << " , with p = " << p.first << " " << p.second << endl;

            q.push({p.first + 1, p.second});
            k[p.first + 1][p.second] = {p.first, p.second};
        }

        // Left
        if (p.second > 0 && c[p.first][p.second - 1] != '#' && !b[p.first][p.second - 1])
        {
            //cout << "PUSHED " << p.first << " " << p.second - 1 << " , with p = " << p.first << " " << p.second << endl;
            q.push({p.first, p.second - 1});
            k[p.first][p.second - 1] = {p.first, p.second};
        }
        // Right
        if (p.second < m - 1 && c[p.first][p.second + 1] != '#' && !b[p.first][p.second + 1])
        {
            //cout << "PUSHED " << p.first << " " << p.second + 1 << " , with p = " << p.first << " " << p.second << endl;
            q.push({p.first, p.second + 1});
            k[p.first][p.second + 1] = {p.first, p.second};
        }
    }

    // if (steps.size())
    // {
    //     cout << "YES" << endl
    //          << steps.size() << endl;
    //     for (auto i : steps)
    //         cout << i;
    //     cout << endl;
    // }
    // else
    //     cout << "NO" << endl;

    cout << "NO" << endl;
    for (int i = 0; i < n; i++)
    {
        delete[] c[i];
        delete[] b[i];
        delete[] k[i];
    }
    delete[] c;
    delete[] b;
    delete[] k;
}