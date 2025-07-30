#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout << "YES" << endl
#define na cout << "NO" << endl

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    ll x = 1;
    ll ans = INT_MAX;
    for (int j = 0; j < n; j++)
    {
        x = 1, cnt = j;
        for (int i = j; i < n; i++)
        {

            if (x * v[i] > k)
            {
                cnt++;
                x = 2 * x;
            }
        }
        ans = min(ans, cnt);
    }
    cout << cnt << endl;
}

int main()
{
    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {

        solve();
    }
}
