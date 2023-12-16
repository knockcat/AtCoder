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

void dfs(int sv, vector<int> adj[], vector<bool> &visited, int &cnt)
{
    ++cnt;
    visited[sv] = true;
    for (auto &itr : adj[sv])
    {
        if (!visited[itr] and itr != 1)
        {
            dfs(itr, adj, visited, cnt);
        }
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

    int n;
    cin >> n;

    vector<int> adj[n + 1];
    vector<int> indegree(n + 1, 0);
    int u, v;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        ++indegree[u];
        ++indegree[v];
    }

    if (indegree[1] == 0 or indegree[1] == 1)
        cout << 1 << endl;
    else
    {
        int res = 1;
        vector<int> v;
        for (auto &itr : adj[1])
        {
            vector<bool> visited(n + 1, false);
            int cnt = 0;
            dfs(itr, adj, visited, cnt);
            v.push_back(cnt);
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < v.size() - 1; ++i)
            res += v[i];
        cout << res << endl;
    }

    return 0;
}