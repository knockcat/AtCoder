// KNOCKCAT

#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long int
#define endl "\n"

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod = 1e9 + 7;
const ll eps = 1e-9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

int32_t main()
{
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int r, c;
    cin >> r >> c;

    queue<pair<int, int>> q;
    vector<vector<char>> mat(r, vector<char>(c));

    int cnt = 0;
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cin >> mat[i][j];
            if (mat[i][j] != '#' and mat[i][j] != '.')
            {
                ++cnt;
                q.push({i, j});
            }
        }
    }

    vector<vector<char>> grid = mat;

    while (cnt > 0)
    {
        int currx = q.front().first;
        int curry = q.front().second;
        int val = mat[currx][curry] - '0';
        // cout << val << endl;
        grid[currx][curry] = '.';
        q.pop();

        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                if (abs(i - currx) + abs(j - curry) <= val)
                    grid[i][j] = '.';
            }
        }
        --cnt;
    }

    for (auto itr : grid)
    {
        for (auto x : itr)
            cout << x;
        cout << endl;
    }

    return 0;
}