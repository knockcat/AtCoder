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

using P = pair<ll, pair<int, int>>;
int32_t main()
{
    fast; // should be disabled for Interactive Problems

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat

    // }

    int n, m, fact;
    cin >> n >> m >> fact;

    int a, b;
    cin >> a >> b;
    --a, --b;

    vector<vector<int>> v(n, vector<int>(m));
    for (auto &ele : v)
    {
        for (auto &x : ele)
            cin >> x;
    }

    priority_queue<P, vector<P>, greater<P>> pq;
    pq.push({v[a][b], {a, b}});

    set<pair<int, int>> visited;
    visited.insert({a, b});

    vector<int> dx = {0, 0, -1, +1};
    vector<int> dy = {-1, +1, 0, 0};

    bool f = true;
    ll have = 0;

    while (!pq.empty())
    {
        P p = pq.top();
        pq.pop();
        ll s = p.first;
        ll x = p.second.first;
        ll y = p.second.second;

        if (f)
        {
            have += s;
            f ^= 1;
        }
        else
        {
            double got = static_cast<double>(have) / fact;
            if (s < got)
            {
                have += s;
            }
            else
                break;
        }

        for (int i = 0; i < 4; ++i)
        {
            int nx = dx[i] + x;
            int ny = dy[i] + y;

            if (nx >= 0 and ny >= 0 and nx < n and ny < m and !visited.count({nx, ny}))
            {
                pq.push({v[nx][ny], {nx, ny}});
                visited.insert({nx, ny});
            }
        }
    }

    cout << have << '\n';
    return 0;
}