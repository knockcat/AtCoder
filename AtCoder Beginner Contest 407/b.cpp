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

    int x, y;
    cin >> x >> y;
    int total = 36;
    int favourable = 0;

    for (int i = 1; i <= 6; ++i)
    {
        for (int j = 1; j <= 6; ++j)
        {
            int sum = i + j;
            int absDiff = abs(i - j);

            if (sum >= x or absDiff >= y)
            {
                ++favourable;
            }
        }
    }
    // cout<<favourable<<endl;
    double ans = (double)favourable / total;

    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}