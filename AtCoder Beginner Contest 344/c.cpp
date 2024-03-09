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

    int n;
    cin >> n;
    vector<int> A(n);

    for (auto &ele : A)
        cin >> ele;

    int m;
    cin >> m;

    vector<int> B(m);
    for (auto &ele : B)
        cin >> ele;

    int l;
    cin >> l;

    vector<int> C(l);
    for (auto &ele : C)
        cin >> ele;

    set<int> st;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            for (int k = 0; k < l; ++k)
            {
                ll sum = A[i] + B[j] + C[k];
                st.insert(sum);
            }
        }
    }

    int q;
    cin >> q;

    int sum;
    while (q--)
    {
        cin >> sum;
        if (st.count(sum))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}