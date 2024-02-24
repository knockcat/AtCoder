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

// If I'll be good at programming she will be mine

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
    string str;
    cin >> str;

    vector<int> v(26, 0);

    for (int i = 0; i < n; ++i)
    {
        v[(str[i] - 'a')] = (str[i] - 'a');
        // cout << v[i];
    }
    cout << endl;

    int q;
    cin >> q;

    char from, to;

    for (int i = 0; i < q; ++i)
    {
        cin >> from >> to;

        int f = (from - 'a');
        int t = (to - 'a');

        for (int i = 0; i < 26; ++i)
        {
            if (v[i] == f)
                v[i] = t;
        }
    }

    for (auto &ch : str)
    {
        char c = v[ch - 'a'] + 'a';
        cout << c;
    }
    cout << endl;

    return 0;
}