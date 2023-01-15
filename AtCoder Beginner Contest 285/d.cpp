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

const int N = 1e5 + 66;
vector<int> adj[N];

int vis[N];

string s[N], t[N];
int n;
unordered_map<string, int> mp;

bool dfs_check(int u)
{
    vis[u] = 1;
    for (int v : adj[u])
    {
        if (vis[v] == 2)
            continue;
        if (vis[v] == 1)
            return false;
        if (!dfs_check(v))
            return false;
    }
    vis[u] = 2;
    return true;
}

bool can()
{
    for (int i = 1; i <= n; ++i)
    {
        if (mp.find(t[i]) != mp.end())
        {
            int j = mp[t[i]];
            adj[i].push_back(j);
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        if (!vis[i])
        {
            if (!dfs_check(i))
                return false;
        }
    }
    return true;
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

    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> s[i] >> t[i];
        mp[s[i]] = i;
    }

    cout << (can() ? "Yes" : "No") << "\n";
    return 0;
}
