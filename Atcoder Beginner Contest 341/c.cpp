// JAI SHREE RAM
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
const ll eps = -1e9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine

int32_t main()
{
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int n, m, sz;
    cin >> n >> m >> sz;

    string str;
    cin >> str;

    vector<vector<char>> v(n, vector<char>(m));

    map<char, pair<int, int>> mp;

    mp['L'] = make_pair(0, -1);
    mp['R'] = make_pair(0, +1);
    mp['U'] = make_pair(-1, 0);
    mp['D'] = make_pair(+1, 0);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cin >> v[i][j];
    }

    int cnt = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (v[i][j] == '.')
            {
                bool ok = true;
                int newi = i;
                int newj = j;
                for (auto dir : str)
                {
                    auto dr = mp[dir];
                    newi += dr.first;
                    newj += dr.second;

                    if (newi < 0 or newj < 0 or newi >= n or newj >= m or v[newi][newj] == '#')
                    {
                        ok = false;
                        break;
                    }
                }
                if (ok)
                    ++cnt;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}