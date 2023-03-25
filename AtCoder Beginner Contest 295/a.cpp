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

    map<string, int> mp;
    ++mp["and"];
    ++mp["not"];
    ++mp["that"];
    ++mp["you"];
    ++mp["the"];

    int n;
    cin >> n;
    bool ok = false;
    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;
        if (mp.find(str) != mp.end())
            ok = true;
    }

    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
