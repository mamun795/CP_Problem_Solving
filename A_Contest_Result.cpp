#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n,m;cin>>n>>m;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    ll cnt=0;
    for(int i=0;i<m;i++){
        ll x;cin>>x;
        cnt+=a[x-1];
    }
    cout<<cnt<<endl;


}


int main()
{
    ll t;
    t=1;
    //cin>>t;
    while(t--)
    {

        solve();

    }

}


