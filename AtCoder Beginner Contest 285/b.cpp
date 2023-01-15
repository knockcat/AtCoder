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

    int n;
    cin >> n;

    string str;
    cin >> str;

    for (int i = 0; i < n-1; ++i)
    {
        int curr = 0;
        int count = 0;
        for (int j = i + 1; j < n; ++j)
        {
            // cout << curr+1 << " " << j+1 << endl;
            if (str[curr] != str[j])
            {
                ++count;
            }
            else
            {

                break;
            }
            ++curr;
        }
        cout << count << endl;
    }
    return 0;
}
