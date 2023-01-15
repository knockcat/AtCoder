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

int32_t main()
{
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int a, b;
    cin >> a >> b;
    if (a == 1 and b == 2 or a == 1 and b == 3)
        cout << "Yes" << endl;
    else if (a == 2 and b == 4 or a == 2 and b == 5)
        cout << "Yes" << endl;
    else if (a == 3 and b == 6 or a == 3 and b == 7)
        cout << "Yes" << endl;
    else if (a == 4 and b == 8 or a == 4 and b == 9)
        cout << "Yes" << endl;
    else if (a == 5 and b == 10 or a == 5 and b == 11)
        cout << "Yes" << endl;
    else if (a == 6 and b == 12 or a == 6 and b == 13)
        cout << "Yes" << endl;
    else if (a == 7 and b == 14 or a == 7 and b == 15)
        cout << "Yes" << endl;

    else
        cout << "No" << endl;
    return 0;
}
