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

    map<int, int> mp;

    int person;
    for (int i = 0; i < n; ++i)
    {
        cin >> person;
        mp[person] = i + 1;
    }
    int q;
    cin >> q;
    int person1, person2;
    while (q--)
    {
        cin >> person1 >> person2;

        if (mp[person1] < mp[person2])
            cout << person1 << endl;
        else
            cout << person2 << endl;
    }
    return 0;
}