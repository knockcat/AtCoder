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
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    --x, --y;
    vector<vector<char>> vec(n, vector<char>(m));

    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, -1, +1};

    for (auto &row : vec)
    {
        for (auto &x : row)
            cin >> x;
    }

    string str;
    cin >> str;
    set<pair<int, int>> st;

    function<void(char)> fun = [&](char ch)
    {
        int idx;
        if (ch == 'U')
            idx = 0;
        else if (ch == 'D')
            idx = 1;
        else if (ch == 'L')
            idx = 2;
        else if (ch == 'R')
            idx = 3;

        int nx = dx[idx] + x;
        int ny = dy[idx] + y;
        if (nx >= 0 and ny >= 0 and nx < n and ny < m and vec[nx][ny] != '#')
        {
            x = nx;
            y = ny;
            if (vec[x][y] == '@')
                st.insert({x, y});
        }
    };
    if (vec[x][y] == '@')
        st.insert({x, y});
    for (auto &ch : str)
    {
        fun(ch);
    }

    cout << x + 1 << ' ' << y + 1 << ' ' << (int)st.size() << endl;

    return 0;
}