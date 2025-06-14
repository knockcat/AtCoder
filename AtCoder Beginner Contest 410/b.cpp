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

    int n, b;
    cin >> n >> b;
    vector<int> v(b);
    for (auto &ele : v)
        cin >> ele;

    set<pair<int, int>> st;
    map<int, int> mp;
    vector<int> ans;

    for (int i = 1; i <= n; ++i)
    {
        mp[i] = 0;
        st.insert({0, i});
    }

    for (auto &ele : v)
    {
        if (ele >= 1)
        {
            int prevBallCnt = mp[ele];
            st.erase({prevBallCnt, ele});
            st.insert({prevBallCnt + 1, ele});
            mp[ele] = prevBallCnt + 1;
            ans.push_back(ele);
        }
        else if (ele == 0)
        {
            auto here = *st.begin();
            st.erase(here);
            st.insert({here.first + 1, here.second});
            mp[here.second] = here.first + 1;
            ans.push_back(here.second);
        }
    }

    for (auto &ele : ans)
        cout << ele << ' ';
    cout << endl;

    return 0;
}