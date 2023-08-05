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

void dfs(int sv, vector<int> adj[], vector<bool> &visited)
{
    visited[sv] = true;

    for (auto &itr : adj[sv])
    {
        if (!visited[itr])
        {
            dfs(itr, adj, visited);
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

    int q;
    cin >> q;

    vector<int> adj[n + 1];

    for (int i = 0; i < q; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    set<int> st;

    for (int i = 1; i <= n; ++i)
    {
        vector<bool> visited(n + 1, false);

        dfs(i, adj, visited);
        int cnt = 0;

        for (int j = 1; j <= n; ++j)
        {
            if (visited[j])
                ++cnt;
        }

        if (cnt == n)
            st.insert(i);
    }
    if (st.size() == 1)
        cout << *st.begin() << endl;
    else
        cout << -1 << endl;
    return 0;
}