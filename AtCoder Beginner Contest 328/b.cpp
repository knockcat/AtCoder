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
    for (auto &itr : v)
        cin >> itr;

    int cnt = 0;

    for (int i = 0; i < n; ++i)
    {
        int mon = i + 1;
        string f = to_string(mon);

        set<char> first(f.begin(), f.end());

        if (first.size() > 1)
            continue;

        for (int j = 1; j <= v[i]; ++j)
        {
            int mon2 = j;
            string f2 = to_string(mon2);

            set<char> first2(f2.begin(), f2.end());

            if (first == first2)
                ++cnt;
        }
    }

    cout << cnt << endl;
    return 0;
}