#include<bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl
#define mod   1000000007
#define Exp   1e18

ll gcd(ll m,ll n)
{
    ll l=max(m,n);
    ll k=min(m,n);
    ll r;
    while(k>0)
    {
        r=l%k;
        l=k;
        k=r;
    }
    return l;
}



void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]==1)cnt++;
    }
    if(cnt==n)
    {
        hmm;
        return;
    }

    for(int i=0; i<n-1; i++)
    {
        if((v[i]==0 && v[i+1]==0 ))
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