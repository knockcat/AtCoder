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

    ll n, sum;
    cin >> n >> sum;
    vector<ll> v(n);
    ll have = 0;
    for (auto &ele : v)
    {
        cin >> ele;
        have += ele;
    }

    ll temp = sum % have;
    vector<ll> vp = v;
    for (auto &ele : v)
        vp.push_back(ele);

    int j = 0, i = 0;
    ll curr = 0;
    bool ok = (temp == 0 ? 1 : 0);
    while (j < (int)vp.size())
    {
        curr += vp[j];
        if (curr == temp)
        {
            ok = true;
            break;
        }
        while (i < j and curr > temp)
        {
            curr -= vp[i++];
            if (curr == temp)
            {
                ok = true;
                break;
            }
        }
        ++j;
    }

    cout << (ok ? "Yes" : "No") << '\n';

    return 0;
}