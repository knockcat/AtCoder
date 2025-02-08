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

    int q;
    cin >> q;
    int minus = 0;
    vector<pair<int, int>> vp;
    int startIdx = 0;
    while (q--)
    {
        int type, len, k;
        cin >> type;

        if (type == 1)
        {
            cin >> len;
            if (vp.empty())
            {
                vp.push_back({len, 0});
            }
            else
            {
                vp.push_back({len, vp.back().first + vp.back().second});
            }
        }
        else if (type == 2)
        {
            minus += vp[startIdx].first;
            ++startIdx;
        }
        else
        {
            cin >> k;
            int ans = vp[startIdx + k - 1].second;
            ans -= minus;
            cout << ans << endl;
        }
    }

    return 0;
}