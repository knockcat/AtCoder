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

    int k;
    cin >> k;
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();

    if (abs(n - m) >= 2)
        cout << "No" << endl;
    else if (abs(n - m) == 1)
    {
        if (s.size() < t.size())
            swap(s, t);
        int j = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == t[j])
            {
                // cout << t[j] << endl;
                ++j;
            }
        }
        cout << (j == t.size() ? "Yes" : "No") << endl;
    }
    else
    {
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            cnt += s[i] != t[i];
        }
        cout << (cnt <= 1 ? "Yes" : "No") << endl;
    }

    return 0;
}