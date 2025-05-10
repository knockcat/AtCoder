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

    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));
    for (auto &row : grid)
    {
        for (auto &x : row)
            cin >> x;
    }

    queue<pair<int, int>> q;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (grid[i][j] == 'E')
            {
                q.push({i, j});
                visited[i][j] = true;
            }
        }
    }

    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};

    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; ++i)
        {
            auto here = q.front();
            int x = here.first;
            int y = here.second;
            q.pop();

            for (int k = 0; k < 4; ++k)
            {
                int nx = dx[k] + x;
                int ny = dy[k] + y;

                if (nx >= 0 and ny >= 0 and nx < n and ny < m and !visited[nx][ny] and grid[nx][ny] != '#' and grid[nx][ny] != 'E')
                {
                    visited[nx][ny] = true;
                    q.push({nx, ny});

                    if (nx - 1 == x and ny == y)
                    {
                        grid[nx][ny] = '^';
                    }
                    else if (nx + 1 == x and ny == y)
                    {
                        grid[nx][ny] = 'v';
                    }
                    else if (nx == x and ny - 1 == y)
                    {
                        grid[nx][ny] = '<';
                    }
                    else if (nx == x and ny + 1 == y)
                    {
                        grid[nx][ny] = '>';
                    }
                }
            }
        }
    }
    for (auto &row : grid)
    {
        for (auto &x : row)
        {
            cout << x;
        }
        cout << endl;
    }
    return 0;
}