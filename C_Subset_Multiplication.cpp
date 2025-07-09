#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl



void solve()
{
    ll n;cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll l=1;
    for(int i=0;i<n-1;i++){
        if(v[i]==0)continue;
        if(v[i+1]%v[i]!=0){
            ll g=__gcd(v[i],v[i+1]);
            ll d=v[i]/g;
            ll gg=__gcd(l,d);
            ll temp=l/(gg*d);
            l=temp;
        }

    }
    cout<<l<<endl;



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


