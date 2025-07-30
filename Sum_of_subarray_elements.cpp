#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n,m;cin>>n>>m;
    ll a[n+1][m+1]={{0},{0}};
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)cin>>a[i][j];
    }
    ll ans=0;
    ll r1,c1,r2,c2;cin>>r1>>c1>>r2>>c2;
    for(int i=r1;i<=r2;i++){
        for(int j=c1;j<=c2;j++)ans+=a[i][j];
    }
    
    cout<<ans<<endl;


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


