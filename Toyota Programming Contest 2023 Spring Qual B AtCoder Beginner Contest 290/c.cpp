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

int32_t main()
{
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> mp;

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        ++mp[v[i]];
    }
    // for (auto itr : mp)
    //     cout << itr.first << " " << itr.second << endl;
    int ans = 0;
    bool flag = false;
    for (int i = 0; i < k; ++i)
    {
        if (mp.find(i) == mp.end())
        {
            ans = i;
            flag = true;
            break;
        }
        else
        {
            ans = i;
        }
    }

    if (flag)
        cout << ans << endl;
    else
        cout << ans + 1 << endl;

    return 0;
}