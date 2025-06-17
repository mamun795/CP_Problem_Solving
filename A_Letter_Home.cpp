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
    ll n,k;cin>>n>>k;
    ll a=INT_MIN,b=INT_MAX;
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        a=max(a,x);
        b=min(b,x);
    }
    ll c=abs(k-a);
    ll d=abs(k-b);
    cout<<(a-b)+min(c,d)<<endl;


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


