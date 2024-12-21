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
    vector<int> v(n);
    for (auto &ele : v)
        cin >> ele;
    int ans = 1;
    for (int i = 0; i < n; ++i)
    {
        int jump = 1;
        while (jump < n)
        {
            int cnt = 1;
            for (int j = i + jump; j < n; j += jump)
            {
                if (v[j] == v[j - jump])
                {
                    ++cnt;
                    ans = max(ans, cnt);
                }
                else
                    cnt = 1;
            }
            ans = max(ans, cnt);

            ++jump;
        }
    }
    cout << ans << endl;
    return 0;
}