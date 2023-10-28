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

bool check(int num)
{
    vector<int> v;

    while (num > 0)
    {
        int rem = num % 10;
        num /= 10;
        v.push_back(rem);
    }

    return (v[1] * v[2] == v[0]);
}

int32_t main()
{
    fast;

    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    //     // knockcat
    // }

    int num;

    cin >> num;

    while (!check(num))
    {
        ++num;
    }

    cout << num << endl;
    return 0;
}