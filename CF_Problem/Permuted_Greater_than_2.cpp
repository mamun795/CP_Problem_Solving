#include<bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl
#define mod   1000000007
#define Exp   1e18

void solve()
{
    ll x,y,z;cin>>x>>y>>z;
    if(x==0 && y==0 && z==0 )
    {
        na;
        return;
    }
    if(x==0 && y>1 || x==0 && z>0)
    {
        hmm;
        //cout<<1;
        return;
    }
    if(y==0 && x-z<2)
    {
        hmm;
        //cout<<2;
        return;
    }
    if(y!=0 && z-x>=0)
    {
        hmm;
       // cout<<3;
        return;
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


