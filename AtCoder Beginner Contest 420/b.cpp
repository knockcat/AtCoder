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

    int n, m;
    cin >> n >> m;
    vector<string> vec(n);
    string str;
    for (int i = 0; i < n; ++i)
    {
        cin >> str;
        vec[i] = str;
    }

    vector<int> ans(n, 0);
    int maxi = 0;

    for (int i = 0; i < m; ++i)
    {
        int xCnt = 0;
        int yCnt = 0;

        for (int j = 0; j < n; ++j)
        {
            if (vec[j][i] == '0')
                ++xCnt;
            else
                ++yCnt;
        }
        for (int k = 0; k < n; ++k)
        {
            if (xCnt == n or yCnt == n)
            {
                ++ans[k];
                maxi = max(maxi, ans[k]);
            }
            else if (xCnt < yCnt)
            {
                if (vec[k][i] == '0')
                {
                    ++ans[k];
                    maxi = max(maxi, ans[k]);
                }
            }
            else
            {
                if (vec[k][i] == '1')
                {
                    ++ans[k];
                    maxi = max(maxi, ans[k]);
                }
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (ans[i] == maxi)
        {
            cout << i + 1 << ' ';
        }
    }
    cout << endl;

    return 0;
}