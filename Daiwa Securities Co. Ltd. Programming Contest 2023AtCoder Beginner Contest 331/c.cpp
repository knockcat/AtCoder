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
    vector<int> v(n);

    for (auto &itr : v)
        cin >> itr;

    map<int, int> mp;

    vector<int> copy = v;

    sort(copy.begin(), copy.end());

    vector<int> pref(n + 1, 0);

    pref[1] = copy[0];

    for (int i = 2; i <= n; ++i)
    {
        pref[i] = pref[i - 1] + copy[i - 1];
    }

    // for (auto &itr : pref)
    //     cout << itr << ' ';
    // cout << endl;

    for (int i = 0; i < n; ++i)
    {
        mp[copy[i]] = max(i, mp[copy[i]]);
    }

    for (int i = 0; i < n; ++i)
    {
        int maxIdx = mp[v[i]];

        ll sum = pref[n] - pref[maxIdx + 1];

        cout << sum << ' ';
    }
    cout << endl;

    return 0;
}