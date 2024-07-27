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
const ll maxn = 1e5 + 10;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine -> Success :D

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int n, m;
    cin >> n >> m;
    int s, d;
    cin >> s >> d;
    vector<vector<char>> mat(n, vector<char>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cin >> mat[i][j];
    }

    string str;
    cin >> str;
    --s, --d;

    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == 'U')
        {
            if (s - 1 >= 0 and mat[s - 1][d] == '.')
                s -= 1;
        }
        else if (str[i] == 'L')
        {
            if (d - 1 >= 0 and mat[s][d - 1] == '.')
                d -= 1;
        }
        else if (str[i] == 'R')
        {
            if (d + 1 < m and mat[s][d + 1] == '.')
                d += 1;
        }
        else
        {
            if (s + 1 < n and mat[s + 1][d] == '.')
                s += 1;
        }
        // cout << s << ' ' << d << endl;
    }

    cout << s + 1 << ' ' << d + 1 << endl;

    return 0;
}