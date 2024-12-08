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

    int n, m, d;
    cin >> n >> m >> d;

    vector<vector<char>> mat(n, vector<char>(m));
    vector<pair<int, int>> here;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> mat[i][j];
            if (mat[i][j] == '.')
                here.push_back({i, j});
        }
    }

    int ans = 0;
    for (int i = 0; i < here.size(); ++i)
    {
        for (int j = i + 1; j < here.size(); ++j)
        {
            set<pair<int, int>> st;
            auto &[x, y] = here[i];
            auto &[a, b] = here[j];
            for (int k = 0; k < n; ++k)
            {
                for (int l = 0; l < m; ++l)
                {
                    int dist = abs(x - k) + abs(y - l);
                    int dist2 = abs(a - k) + abs(b - l);

                    if (mat[k][l] == '.')
                    {
                        if (dist <= d)
                            st.insert({k, l});
                        if (dist2 <= d)
                            st.insert({k, l});
                    }
                }
            }
            ans = max(ans, (int)st.size());
        }
    }

    cout << ans << endl;

    return 0;
}