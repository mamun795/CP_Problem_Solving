#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

ll check(vector<ll>v,ll g){
  ll l=v.size();
  for(int i=0;i<l;i++){
    if(v[i]%g==0)return 0;
  }
  return g;
}


void solve()
{
    ll n;cin>>n;
    vector<ll>a,b;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        if(i%2==0)a.push_back(x);
        else b.push_back(x);
    }

   ll x=0,y=0;
   for(int i=0;i<a.size();i++){
    x=__gcd(x,a[i]);
   }
   for(int i=0;i<b.size();i++){
    y=__gcd(y,b[i]);
   }

   ll p=check(b,x);
   ll q=check(a,y);
   if(p==0 && q==0)cout<<0<<endl;
   else cout<<max(p,q)<<endl;


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


