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

int32_t main()
{
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int n, q;
    cin >> n >> q;

    string str;
    cin >> str;
    vector<int> pref;

    pref.push_back(0);

    for (int i = 1; i < n; ++i)
    {
        if (str[i] == str[i - 1])
        {
            pref.push_back(pref.back() + 1);
        }
        else
            pref.push_back(pref.back());
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        --l, --r;

        int ans = (pref[r] - (l - 1 >= 0 ? pref[l - 1] : 0));

        if (l - 1 >= 0 and str[l - 1] == str[l])
            --ans;
        if (l == r)
            ans = 0;
        cout << ans << endl;
    }
    return 0;
}