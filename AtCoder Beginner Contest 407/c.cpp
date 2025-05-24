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

    string str;
    cin >> str;
    int ans = str.size();
    int moves = 0, prev = 0;

    for (int i = str.size() - 1; i >= 0; --i)
    {
        int currMove = (str[i] - '0') % 10;
        if (prev > currMove)
        {
            int curr = (10 - prev + currMove) % 10;
            ans += curr;
            prev = (prev + curr) % 10;
        }
        else
        {
            int curr = currMove - prev;
            ans += curr;
            prev = (prev + curr) % 10;
        }
    }

    cout << ans << endl;

    return 0;
}