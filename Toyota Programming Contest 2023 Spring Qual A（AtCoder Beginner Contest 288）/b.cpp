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

    vector<string> v(a);

    for (int i = 0; i < a; ++i)
        cin >> v[i];

    vector<string> res;
    for (int i = 0; i < b; ++i)
        res.push_back(v[i]);

    sort(res.begin(), res.end());
    for (auto itr : res)
        cout << itr << endl;
}
