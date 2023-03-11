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

ll helper(int i, int j, set<int> &st, int n, int m, vector<vector<int>> &mat)
{
    if (i == n && j == m)
    {
        if (st.size() == n + m - 1)
            return 1;
        return 0;
    }
    ll ans = 0;
    if (j < m)
    {
        if (st.find(mat[i][j + 1]) == st.end())
        {
            st.insert(mat[i][j + 1]);
            ans += helper(i, j + 1, st, n, m, mat);
            st.erase(mat[i][j + 1]);
        }
    }
    if (i < n)
    {
        if (st.find(mat[i + 1][j]) == st.end())
        {
            st.insert(mat[i + 1][j]);
            ans += helper(i + 1, j, st, n, m, mat);
            st.erase(mat[i + 1][j]);
        }
    }
    return ans;
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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n + 1, vector<int>(m + 1));
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
            cin >> mat[i][j];
    }

    set<int> st;
    st.insert(mat[1][1]);

    cout << helper(1, 1, st, n, m, mat);
    return 0;
}
