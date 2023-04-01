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

    // int n;
    // cin >> n;
    vector<string> vs(8);

    for (int i = 0; i < 8; ++i)
        cin >> vs[i];

    int x = -1, y = -1;

    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (vs[i][j] == '*')
            {
                x = i, y = j;
                break;
            }
        }
    }

    char ch = y + 1 + 96;
    cout << ch << 8 - x << endl;

    return 0;
}