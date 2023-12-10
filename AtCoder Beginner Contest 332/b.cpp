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
    // fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int k, g, m;
    cin >> k >> g >> m;

    int glass = 0, mug = 0;

    while (k--)
    {
        if (glass == g)
        {
            glass = 0;
        }
        else if (mug == 0)
        {
            mug = m;
        }
        else
        {
            int water = min(g - glass, mug);
            glass += water;
            mug -= water;
        }
    }
    glass = max(0ll, glass);
    mug = max(0ll, mug);
    cout << glass << ' ' << mug << endl;

    return 0;
}