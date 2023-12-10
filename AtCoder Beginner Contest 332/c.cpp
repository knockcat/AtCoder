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
    // fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int n, m;
    cin >> n >> m;
    string str;
    cin >> str;

    int plain = m, logo = 0;
    int buy = 0;

    for (int i = 0; i < n; ++i)
    {
        if (str[i] == '0')
        {
            plain = m;
            logo = buy;
        }
        else if (str[i] == '1')
        {
            if (plain)
            {
                --plain;
            }
            else if (logo)
            {
                --logo;
            }
            else
            {
                ++buy;
            }
        }
        else
        {
            if (logo)
            {

                --logo;
            }
            else
            {
                ++buy;
            }
        }
    }

    cout << buy << endl;

    return 0;
}