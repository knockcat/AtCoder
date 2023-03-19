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

    int n, q;
    cin >> n >> q;

    int i = 1;
    set<int> s;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            if (i < n + 1)
            {
                s.insert(i);
                ++i;
            }
        }
        else if (type == 2)
        {
            int x;
            cin >> x;
            s.erase(x);
        }
        else if (type == 3)
        {
            if (!s.empty())
                cout << *s.begin() << endl;
        }
    }
    return 0;
}