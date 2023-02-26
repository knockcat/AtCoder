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
    vector<int> v(5 * n);
    for (int i = 0; i < 5 * n; ++i)
        cin >> v[i];

    int mark = v.size() / 5;
    int st = 0, end = v.size() - 1;
    ll sum = 0;

    sort(v.begin(), v.end());

    for (int i = 0; i < mark; ++i)
        ++st;
    for (int j = v.size() - 1; j >= v.size() - mark; --j)
        --end;

    // cout << st << " " << end << endl;

    for (int i = st; i <= end; ++i)
    {
        sum += v[i];
    }

    float ans = (float)sum / (3 * n);

    cout << fixed << setprecision(15) << ans << endl;

    return 0;
}