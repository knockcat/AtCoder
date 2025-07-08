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

    int n;
    cin >> n;
    int cont = 0;
    map<int, int> mp;
    vector<int> pref(n + 1, 0);

    int m;
    cin >> m;
    while (m--)
    {
        int i;
        cin >> i;
        if (pref[i] == 1)
        {
            bool left = (i - 1 >= 0 and pref[i - 1] == 1 ? 1 : 0);
            bool right = (i + 1 <= n and pref[i + 1] == 1 ? 1 : 0);
            if (left and right)
            {
                ++cont;
            }
            if (!left and !right)
            {
                --cont;
            }
            pref[i] = 0;
        }
        else
        {
            bool left = (i - 1 >= 0 and pref[i - 1] == 1 ? 1 : 0);
            bool right = (i + 1 <= n and pref[i + 1] == 1 ? 1 : 0);
            if (!left and !right)
            {
                ++cont;
            }
            else if (left and right)
            {
                --cont;
            }
            pref[i] = 1;
        }
        cout << cont << endl;
    }
    return 0;
}