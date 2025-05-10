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

    map<int, int> mp;
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    int operation = 0;
    for (auto &ele : arr)
    {
        cin >> ele;
        ++mp[ele];
    }
    while (true)
    {
        bool ok = true;
        for (int i = 1; i <= m; ++i)
        {
            if (mp.find(i) == mp.end())
            {
                ok = false;
                break;
            }
        }
        if (ok == false)
            break;
        ++operation;
        if (!arr.empty())
        {
            --mp[arr.back()];
            if (mp[arr.back()] == 0)
                mp.erase(arr.back());
            arr.pop_back();
        }
    }
    cout << operation << endl;
    return 0;
}