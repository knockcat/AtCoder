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

    stack<char> st;

    string str;
    cin >> str;

    int n = str.size();

    for (int i = 0; i < n; ++i)
    {
        if (str[i] == 'A' or str[i] == 'B')
            st.push(str[i]);
        else
        {
            if (st.size() < 2)
            {
                st.push(str[i]);
                continue;
            }
            // cout << i << endl;
            char last = st.top();
            st.pop();
            char sLast = st.top();
            st.pop();

            if (last == 'B' and sLast == 'A')
            {
            }
            else
            {
                st.push(sLast);
                st.push(last);
                st.push(str[i]);
            }
        }
    }
    string ans;

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;

    return 0;
}