#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n;cin>>n;
    vector<ll>v(n+1,0);
    for(int i=1;i<=n;i++)cin>>v[i];
    ll y=2*v[1]-v[2];
    if( (y%(n+1)) || y<0){
        na;
        return;
    }
     y=y/(n+1);
    ll x=v[1]-n*y;
    if(x<0){
        na;
        return;
    }
    for(int i=1;i<=n;i++){
        ll p=i*x+(n-i+1)*y;
        if(p!=v[i])
        {
            na;
            return;
        }
    }
    hmm;



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


