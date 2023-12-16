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

    string a, b;
    cin >> a >> b;

    map<string, int> mp;

    mp["AB"] = 1;
    mp["AC"] = 2;
    mp["AD"] = 2;
    mp["AE"] = 1;
    mp["BA"] = 1;
    mp["BC"] = 1;
    mp["BD"] = 2;
    mp["BE"] = 2;
    mp["CA"] = 2;
    mp["CB"] = 1;
    mp["CD"] = 1;
    mp["CE"] = 2;
    mp["DA"] = 2;
    mp["DB"] = 2;
    mp["DC"] = 1;
    mp["DE"] = 1;
    mp["EA"] = 1;
    mp["EB"] = 2;
    mp["EC"] = 2;
    mp["ED"] = 1;

    if (mp[a] == mp[b])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}