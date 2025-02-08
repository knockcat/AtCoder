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

/*
Things have not went as I wanted and yes I am feeling maybe this is not meant for me (because of results) but still I will do this as,
I cannot given up.
Reaching here and still trying is also a milestone for me.
My journey has been incredible and I will surely improve.
It's just a matter of time and I am sure I am going to make it.

Till now show some resistance, focus on small goals and the big goals will take care of themselves.
knockcat this side...
*/

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
    int maxi = 1e5 + 1;
    vector<vector<int>> freq(n, vector<int>(maxi + 1, 0));
    unordered_map<int, set<int>> mset;
    vector<int> sizes(n, -1);
    int size;
    for (int i = 0; i < n; ++i)
    {
        cin >> size;
        sizes[i] = size;
        int val;
        for (int j = 0; j < size; ++j)
        {
            cin >> val;
            freq[i][val]++;
            mset[i].insert(val);
        }
    }
    double ans = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int tot = sizes[i] * sizes[j];
            ll got = 0;
            for (auto &val : mset[i])
            {
                // cout << val << ' ';
                int cntOfValI = freq[i][val];
                int cntOfValJ = freq[j][val];
                int cnt = cntOfValI * cntOfValJ;
                got += cnt;
            }
            double prob = (double)got / tot;
            ans = max(ans, prob);
        }
    }
    cout << fixed << setprecision(15) << ans << endl;

    return 0;
}