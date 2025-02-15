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

/*
Things have not went as I wanted and yes I am feeling maybe this is not meant for me (because of results) but still I will do this as,
I cannot given up.
Reaching here and still trying is also a milestone for me.
My journey has been incredible and I will surely improve.
It's just a matter of time and I am sure I am going to make it.

Till now show some resistance, focus on small goals and the big goals will take care of themselves.
knockcat this side...
*/

template <typename T>
class DSU
{
public:
    int N;
    vector<T> rank, parent, size;
    DSU() {}
    DSU(int n)
    {
        N = n;
        rank.resize(n + 1, 0);
        size.resize(n + 1, 1);
        parent.resize(n + 1);

        for (T i = 0; i <= n; ++i)
        {
            parent[i] = i;
        }
    }

    template <typename X>
    X findParent(X u)
    {
        if (u == parent[u])
            return u;
        return parent[u] = findParent(parent[u]);
    }

    // Not be using unionByRank
    // but yes for future reference
    template <typename X>
    void unionByRank(X u, X v)
    {
        int nodeX = findParent(u);
        int nodeY = findParent(v);

        if (nodeX == nodeY)
            return;

        if (rank[nodeX] < rank[nodeY])
        {
            parent[nodeX] = nodeY;
        }
        else if (rank[nodeY] < rank[nodeX])
        {
            parent[nodeY] = nodeX;
        }
        else
        {
            parent[nodeY] = nodeX;
            ++rank[nodeX];
        }
    }

    void unionBySize(int u, int v)
    {
        int nodeX = findParent(u);
        int nodeY = findParent(v);

        if (nodeX == nodeY)
            return;

        if (size[nodeX] < size[nodeY])
        {
            parent[nodeX] = nodeY;
            size[nodeY] += size[nodeX];
        }
        else
        {
            parent[nodeY] = nodeX;
            size[nodeX] += size[nodeY];
        }
    }

    template <typename X>
    bool isSame(X u, X v)
    {
        return findParent(u) == findParent(v);
    }
};
// DSU<int> dsu(n);

// dsu.unionByRank(u, v);
// dsu.unionBySize(u,v);
// dsu.isSame(u, v) bool

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
    DSU<ll> dsu(n + 2);

    multiset<pair<int, int>> st;
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        if (dsu.isSame(u, v))
        {
            st.insert({u, v});
        }
        else
        {
            dsu.unionBySize(u, v);
        }
    }

    vector<vector<int>> ans;

    // for(auto& x : st){
    //     cout<<x.first << ' '<<x.second<<endl;
    // }

    for (int i = 1; i <= n; ++i)
    {
        for (auto &x : st)
        {
            auto curr = x;
            // cout<<curr.first<<' '<<curr.second<<' '<<endl;
            if (dsu.findParent(i) == i and dsu.size[dsu.findParent(i)] != n and !dsu.isSame(dsu.findParent(i), dsu.findParent(curr.first)))
            {
                st.erase(st.find(curr));
                ans.push_back({curr.first, curr.second, i});
                dsu.unionBySize(curr.first, i);
                break;
            }
        }
    }

    cout << ans.size() << endl;
    for (auto &x : ans)
    {
        cout << x[0] << ' ' << x[1] << ' ' << x[2] << endl;
    }
    // cout << endl;

    return 0;
}