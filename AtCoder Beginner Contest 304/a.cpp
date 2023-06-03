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

    int n;
    cin >> n;

    vector<pair<string, int>> vp;

    for (int i = 0; i < n; ++i)
    {
        int age;
        string name;
        cin >> name >> age;

        vp.push_back({name, age});
    }

    int mini = INT_MAX;
    int idx = -1;

    for (int i = 0; i < n; ++i)
    {
        if (vp[i].second < mini)
        {
            idx = i;
            mini = vp[i].second;
        }
    }

    for (int i = idx; i < n; ++i)
    {
        cout << vp[i].first << endl;
    }
    for (int i = 0; i < idx; ++i)
    {
        cout << vp[i].first << endl;
    }
    return 0;
}