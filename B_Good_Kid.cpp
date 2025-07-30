#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl


void solve()
{
    ll n;cin>>n;
    ll a[n];
    ll ans=1;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    a[0]++;
    for(int i=0;i<n;i++)ans*=a[i];
    cout<<ans<<endl;





}


int main()
{
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {

        solve();

    }

}


