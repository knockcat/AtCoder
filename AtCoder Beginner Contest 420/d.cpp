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
    pair<int, int> src, dst;
    vector<vector<char>> vec(n, vector<char>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> vec[i][j];
            if (vec[i][j] == 'S')
            {
                src = {i, j};
            }
            else if (vec[i][j] == 'G')
            {
                dst = {i, j};
            }
        }
    }

    vector<vector<vector<int>>> dest(n, vector<vector<int>>(m, vector<int>(2, INT_MAX)));
    vector<int> dx = {-1, +1, 0, 0};
    vector<int> dy = {0, 0, -1, +1};
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
    dest[src.first][src.second][1] = 0;
    pq.push({0, src.first, src.second, 1});

    while (!pq.empty())
    {
        vector<int> here = pq.top();
        pq.pop();
        int d = here[0];
        int x = here[1];
        int y = here[2];
        int flag = here[3];

        for (int k = 0; k < 4; ++k)
        {
            int nx = dx[k] + x;
            int ny = dy[k] + y;
            int nflag = flag;
            if (nx >= 0 and ny >= 0 and nx < n and ny < m)
            {
                if (vec[nx][ny] == '#')
                    continue;
                if ((vec[nx][ny] == 'o' and nflag == 0) or (vec[nx][ny] == 'x' and nflag == 1))
                    continue;
                if (vec[nx][ny] == '?')
                    nflag ^= 1;
                if (d + 1 < dest[nx][ny][nflag])
                {
                    dest[nx][ny][nflag] = d + 1;
                    pq.push({dest[nx][ny][nflag], nx, ny, nflag});
                }
            }
        }
    }

    int mini = min(dest[dst.first][dst.second][1], dest[dst.first][dst.second][0]);
    cout << (mini == INT_MAX ? -1 : mini) << endl;
    return 0;
}