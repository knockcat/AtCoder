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

void dfs(int sv, vector<int> adj[], vector<bool> &visited)
{
    visited[sv] = true;

    for (auto itr : adj[sv])
    {
        if (!visited[itr])
            dfs(itr, adj, visited);
    }
}

int32_t main()
{
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int n, d;
    cin >> n >> d;

    vector<pair<int, int>> vp;

    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back({x, y});
    }

    vector<int> adj[n + 1];

    for (int i = 0; i < n; ++i)
    {
        int x1 = vp[i].first;
        int y1 = vp[i].second;

        for (int j = 0; j < n; ++j)
        {
            if (i == j)
                continue;

            int x2 = vp[j].first;
            int y2 = vp[j].second;

            int x = abs(x1 - x2);
            int y = abs(y1 - y2);

            if ((x * x) + (y * y) <= (d * d))
            {
                adj[i].push_back(j);
            }
        }
    }

    vector<bool> visited(n, false);
    dfs(0, adj, visited);

    for (int i = 0; i < n; ++i)
    {
        if (visited[i])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}