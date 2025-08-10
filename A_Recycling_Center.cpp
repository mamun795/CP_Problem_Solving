#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl
ll dx[]={0,0,1,-1,-1,-1,1,1};
ll dy[]={1,-1,0,0,1,-1,1,-1};

void solve()
{
    ll n,k;cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.rbegin(),v.rend());
    ll saved=0;
    for(int i=0;i<n;i++){
        if(v[i]*(1LL<<saved)<=k)saved++;
    }
    cout<<n-saved<<endl;

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


