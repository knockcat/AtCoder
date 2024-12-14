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
    int score;
    map<char, int> mp;
    char ch = 'A';
    for (int i = 0; i < 5; ++i)
    {
        cin >> score;
        mp[ch] = score;
        ++ch;
    }

    vector<std::string> vs = {
        "ABCDE", "BCDE", "ACDE", "ABDE", "ABCE", "ABCD",
        "CDE", "BDE", "ADE", "BCE", "ACE", "BCD",
        "ABE", "ACD", "ABD", "ABC", "DE", "CE", "BE",
        "CD", "AE", "BD", "AD", "BC", "AC", "AB",
        "E", "D", "C", "B", "A"};

    vector<pair<int, string>> ans;
    for (int i = 0; i < vs.size(); ++i)
    {
        int score = 0;
        for (auto &ch : vs[i])
        {
            score += mp[ch];
        }
        ans.push_back({score, vs[i]});
    }

    sort(ans.begin(), ans.end(), [&](const auto &a, const auto &b)
         {
        if(a.first == b.first) return a.second < b.second;
        return a.first > b.first; });

    for (auto &s : ans)
        cout << s.second << '\n';
}