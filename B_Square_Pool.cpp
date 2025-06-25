#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl
#define mod   1000000007
#define Exp   1e18

void solve()
{
    ll a,s;cin>>a>>s;
    ll dx,dy,x,y;
    ll ans=0;
    for(int i=0;i<a;i++){
    cin>>dx>>dy>>x>>y;
    if(x==y && dx==dy)ans++;
    else if(x+y==s && dx+dy==0)ans++;
    }
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


