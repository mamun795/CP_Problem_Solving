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
    ll a,b;cin>>a>>b;
    ll g=gcd(a,b);
    if(g!=1)
    {
        cout<<0<<endl;
        return;
    }
    if(gcd(a+1,b)>1 || gcd(a,b+1)>1)
    {
        cout<<1<<endl;
        return;
    }
    else cout<<2<<endl;


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


