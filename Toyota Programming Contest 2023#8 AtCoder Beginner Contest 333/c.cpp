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
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    // 12 characters

    int num;
    cin >> num;

    string str;

    vector<ll> v;

    for (int i = 0; i < 12; ++i)
    {
        str += '1';
        // cout<<str<<endl;
        for (int j = 0; j < 3; ++j)
            v.push_back(stoll(str));
    }

    // for (auto &itr : v)
    //     cout << itr << endl;

    int n = v.size();

    vector<ll> ans;

    // cout << n << endl;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                ll sum = v[i] + v[j] + v[k];
                ans.push_back(sum);
            }
        }
    }

    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    // for (auto &itr : ans)
    //     cout << itr << ' ';
    // cout << endl;

    cout << ans[num - 1] << endl;

    return 0;
}