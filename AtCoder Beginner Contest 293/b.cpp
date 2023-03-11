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
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    map<int, int> mp;

    vector<int> freq(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        if (mp.find(i + 1) == mp.end())
        {
            mp.insert({v[i], 1});
            freq[v[i]] = 1;
        }
        else
            continue;
    }
    vector<int> ans;
    for (int i = 0; i <= n; ++i)
    {
        if (i == 0)
            continue;
        if (freq[i] == 0)
            ans.push_back(i);
    }

    cout << ans.size() << endl;
    for (auto itr : ans)
        cout << itr << " ";
    cout << endl;
    return 0;
}