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

const ll mod = 1e9;
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

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    // int tt;
    // cin >> tt;
ṇ
    // while (tt--)
    // {
    //     // knockcat
    // }

    ll n, k;ṇ
    cin >> n >> k;

    vector<ll> pref(n + 1, 1);

    ll have = k;

    for (int i = k; i <= n; ++i)
    {
        pref[i] = have%mod;
        have  = (have - pref[i-k] + mod) % mod;
        have = (have%mod + pref[i]%mod) % mod;
    }

    cout << pref[n]%mod << endl;ṇ

    return 0;
}