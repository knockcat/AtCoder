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

// 3456 371

ll helper(int idx, int n, int j, string &s, vector<vector<string>> &vp, map<pair<int, int>, ll> &dp)
{
    if (idx == n)
    {
        if (j == (int)s.size())
        {
            // cout << j << endl;
            // cout << curr2 << ' ' << s << ' ' << j << endl;
            return 0;
        }
        return INT_MAX;
    }

    if (dp.count({idx, j}))
    {
        return dp[{idx, j}];
    }

    ll notTake = helper(idx + 1, n, j, s, vp, dp);

    ll cost = INT_MAX, ans = INT_MAX;
    for (int i = 0; i < vp[idx].size(); ++i)
    {
        string curr = vp[idx][i];
        bool ok = true;
        for (int k = 0; k < curr.size(); ++k)
        {
            if (k + j < s.size() and curr[k] != s[k + j])
            {
                ok = false;
            }
        }
        if (ok)
        {
            cost = 1 + helper(idx + 1, n, j + (int)curr.size(), s, vp, dp);
            ans = min(ans, cost);
        }
    }

    ans = min(ans, notTake);
    return dp[{idx, j}] = ans;
}

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    string s, str;
    cin >> s;

    int n;
    cin >> n;

    vector<vector<string>> vp(n);

    for (int i = 0; i < n; ++i)
    {
        int lim;
        cin >> lim;

        for (int j = 0; j < lim; ++j)
        {
            cin >> str;
            vp[i].push_back(str);
        }
    }

    map<pair<int, int>, ll> dp;
    int ans = helper(0, n, 0, s, vp, dp);
    if (ans == INT_MAX)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}