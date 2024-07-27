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

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> a(n), b(n);
    for (auto &ele : a)
        cin >> ele;
    for (auto &ele : b)
        cin >> ele;

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    ll aEat = 0, bEat = 0;
    ll ans = 0;
    for (int i = 0; i < n; ++i)
    {
        aEat += a[i];
        bEat += b[i];
        if (aEat > x or bEat > y)
            break;
        ++ans;
    }

    cout << min(ans + 1, n) << endl;

    return 0;
}