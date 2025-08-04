#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout << "YES" << endl
#define na cout << "NO" << endl

void solve()
{
    ll n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    vector<char> a;
    vector<pair<int, int>> pos;

    ll top = 0, left = 0, right = n - 1, bottom = n - 1;


    for (left = 0; left < n; left++) {
        a.push_back(s[top][left]);
        pos.push_back({top, left});
    }


    top++;
    for (top; top < n; top++) {
        a.push_back(s[top][right]);
        pos.push_back({top, right});
    }


    bottom--;
    for (bottom; bottom >= 0; bottom--) {
        a.push_back(s[right][bottom]);
        pos.push_back({right, bottom});
    }

    
    right--;
    for (right; right > 0; right--) {
        a.push_back(s[right][0]);
        pos.push_back({right, 0});
    }

    
    reverse(a.begin(), a.end());
    reverse(a.begin() + 1, a.end());


    for (int i = 0; i < pos.size(); i++) {
        int r = pos[i].first;
        int c = pos[i].second;
        s[r][c] = a[i];
    }

    for (int i = 0; i < n; i++) {
        cout << s[i] << endl;
    }
}

int main()
{
    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
