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

    ll n, a, b;

    cin >> n >> a >> b;

    vector<int> v(n);

    for (auto &itr : v)
        cin >> itr;

    ll ans = (ll)a + b;

    int ok = -1;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == ans)
        {
            ok = i;
            break;
        }
    }

    if (ok != -1)
        cout << ok + 1 << endl;

    return 0;
}