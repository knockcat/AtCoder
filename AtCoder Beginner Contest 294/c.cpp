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

    int n, m;
    cin >> n >> m;
    vector<int> A(n), B(m);
    vector<pair<int, int>> vp;
    // map<int, int> mp1, mp2;
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
        vp.push_back({A[i], 1});
        // mp1[A[i]] = i;
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> B[i];
        vp.push_back({B[i], 2});
        // mp2[B[i]] = i;
    }

    sort(vp.begin(), vp.end());

    vector<int> ans1(n);
    vector<int> ans2(m);
    int k = 0, j = 0;
    for (int i = 0; i < vp.size(); ++i)
    {
        if (vp[i].second == 1)
        {
            ans1[k++] = i + 1;
        }
        else
        {
            ans2[j++] = i + 1;
        }
    }

    for (auto itr : ans1)
        cout << itr << " ";
    cout << endl;
    for (auto itr : ans2)
        cout << itr << " ";
    cout << endl;
    return 0;
}