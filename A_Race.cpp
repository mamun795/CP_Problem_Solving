#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl
#define mod   1000000007
#define Exp   1e18

void solve()
{
    ll a,x,y;cin>>a>>x>>y;
    ll b=abs(a-x);
    ll c=abs(a-y);
    ll mx=max(x,y);
    ll mi=min(x,y);
    for(int i=mi;i<=mx;i++){
        if(abs(i-x)<b && abs(i-y)<c)
        {
            hmm;
            return;
        }
    }
    na;


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


