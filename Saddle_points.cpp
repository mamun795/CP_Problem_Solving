#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout << "YES" << endl
#define na cout << "NO" << endl

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    ll ans = 0;
    ll val;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            val = a[i][j];
             bool mx = true, mn = true;

            for (int k = 1; k <= m; k++)
            {
                if (a[i][k] < val){
                    mn = false;
                    break;
                }
            }
            for (int l = 1; l <= n; l++)
            {
                if (a[l][j] > val){
                    mx = false;
                    break;
                }
            }
            if (mx && mn)
                ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    ll t;
    t = 1;
    //  cin>>t;
    while (t--)
    {

        solve();
    }
}
