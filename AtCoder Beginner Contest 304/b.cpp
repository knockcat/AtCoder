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

    string str = to_string(n);

    int sz = str.size();

    if (n < 1000)
    {
        cout << n << endl;
    }
    else if (n >= 1000 and n < 10000)
    {
        str[sz - 1] = '0';

        cout << str << endl;
    }
    else if (n >= 10000 and n < 100000)
    {
        for (int i = sz - 2; i < sz; ++i)
            str[i] = '0';
        cout << str << endl;
    }
    else if (n >= 100000 and n < 1000000)
    {
        for (int i = sz - 3; i < sz; ++i)
            str[i] = '0';
        cout << str << endl;
    }
    else if (n >= 1000000 and n < 10000000)
    {
        for (int i = sz - 4; i < sz; ++i)
            str[i] = '0';
        cout << str << endl;
    }
    else if (n >= 10000000 and n < 100000000)
    {
        for (int i = sz - 5; i < sz; ++i)
            str[i] = '0';
        cout << str << endl;
    }
    else if (n >= 100000000 and n < 1000000000)
    {
        for (int i = sz - 6; i < sz; ++i)
            str[i] = '0';
        cout << str << endl;
    }
    else
        cout << n << endl;

    return 0;
}