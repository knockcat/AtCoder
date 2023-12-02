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

ll helper(int idx, int n, vector<int> &vp, map<int, int> &mp, map<pair<int, int>, int> &dp)
{
    if (n <= 0)
        return 0;
    if (idx == vp.size())
        return INT_MAX;
    if (dp.count({idx, n}))
        return dp[{idx, n}];
    ll take = mp[vp[idx]] + helper(idx, n - vp[idx], vp, mp, dp);
    ll take2 = mp[vp[idx]] + helper(idx + 1, n - vp[idx], vp, mp, dp);
    ll notTake = helper(idx + 1, n, vp, mp, dp);

    return dp[{idx, n}] = min({take, take2, notTake});
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

    vector<int> v;

    int n, s, m, l;
    cin >> n >> s >> m >> l;

    map<int, int> mp;

    mp.insert({6, s});
    mp.insert({8, m});
    mp.insert({12, l});

    v.push_back(6);
    v.push_back(8);
    v.push_back(12);

    // for (auto &itr : v)
    //     cout << itr.first << ' ' << itr.second << ' ';
    // cout << endl;

    map<pair<int, int>, int> dp;

    ll ans = helper(0, n, v, mp, dp);

    cout << ans << endl;

    return 0;
}