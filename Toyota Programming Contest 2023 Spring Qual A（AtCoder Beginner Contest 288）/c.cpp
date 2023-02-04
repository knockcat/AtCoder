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

    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(n + 1, false);
    int count = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
        {
            dfs(i, adj, visited);
            ++count;
        }
    }

    cout << m - n + count << endl;
    return 0;
}
