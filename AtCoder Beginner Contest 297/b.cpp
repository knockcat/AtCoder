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

    string s;
    cin >> s;

    vector<int> v;
    int n = s.size();
    vector<int> vs, one;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'B')
            vs.push_back(i);
        if (s[i] == 'R' or s[i] == 'K')
            one.push_back(i);
    }
    bool ok = true;

    // cout << vs[0] << " " << vs[1] << endl;
    if (vs[0] % 2 == vs[1] % 2)
        ok = false;
    if (s[one[1]] != 'K')
        ok = false;

    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}