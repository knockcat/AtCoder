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
    queue<pair<int, int>> q;
    vector<vector<int>> dist(n, vector<int>(m, d + 5));
    set<pair<int, int>> visited;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 'H')
            {
                q.push({i, j});
                dist[i][j] = 0;
                visited.insert({i, j});
            }
        }
    }

    vector<int> dx = {-1, 0, 0, +1};
    vector<int> dy = {0, -1, +1, 0};
    int ans = (int)q.size();

    while (!q.empty())
    {
        int size = q.size();
        while (size--)
        {
            auto &[x, y] = q.front();
            q.pop();

            for (int i = 0; i < 4; ++i)
            {
                int nx = dx[i] + x;
                int ny = dy[i] + y;

                if (!visited.count({nx, ny}) and nx >= 0 and ny >= 0 and nx < n and ny < m and mat[nx][ny] != '#' and dist[x][y] + 1 < dist[nx][ny])
                {
                    q.push({nx, ny});
                    dist[nx][ny] = dist[x][y] + 1;
                    visited.insert({nx, ny});
                }
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            ans += (dist[i][j] <= d and mat[i][j] == '.');
    }
    cout << ans << '\n';

    return 0;
}