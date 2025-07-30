#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n,k;cin>>n>>k;
    bool f=false;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        if(x==k)f=true;
    }
    if(f)hmm;
    else na;


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


