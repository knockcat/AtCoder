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

    int maxi = INT_MIN;

    unordered_map<int, int> mp;

    for (auto &itr : v)
    {
        cin >> itr;

        maxi = max(itr, maxi);
        ++mp[itr];
    }

    int fir = v[0];

    if (fir == maxi and mp[fir] == 1)
        cout << 0 << endl;
    else if (fir > maxi)
        cout << 0 << endl;
    else
        cout << maxi - fir + 1 << endl;

    return 0;
}