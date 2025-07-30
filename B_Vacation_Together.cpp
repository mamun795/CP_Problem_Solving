#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout << "YES" << endl
#define na cout << "NO" << endl

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> s(n); 

    for (int i = 0; i < n; i++) {
        cin >> s[i]; 
    }

    ll ans = 0;
    ll cnt = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (s[j][i] == 'o')
                cnt++;
            else {
                cnt = 0;
                break;
            }
        }
         
            ans = max(ans, cnt);
    }

    cout << ans / n << endl;
}

int main()
{
    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}
