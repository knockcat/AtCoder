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

    ll n;
    cin >> n;

    string str;
    cin >> str;

    map<pair<ll, ll>, ll> mp;

    ll i = 0,
       j = 0;
    bool flag = false;
    ++mp[{i, j}];
    for (ll k = 0; k < n; ++k)
    {
        if (str[k] == 'L')
        {
            --i, j;
            ++mp[{i, j}];
        }

        else if (str[k] == 'R')
        {
            ++i, j;
            ++mp[{i, j}];
        }

        else if (str[k] == 'U')
        {
            i, ++j;
            ++mp[{i, j}];
        }

        else if (str[k] == 'D')
        {
            i, --j;
            ++mp[{i, j}];
        }
    }

    // for (auto itr : mp)
    // {
    //     pair<int, int> here = itr.first;
    //     cout << here.first << " " << here.second << " " << itr.second << endl;
    // }

    for (auto itr : mp)
    {
        if (itr.second > 1)
        {
            flag = true;
            break;
        }
    }

    cout << (flag == 0 ? "No" : "Yes") << endl;

    return 0;
}

// r 1 0
// l -1 0
// u 0 1
// d 0 -1