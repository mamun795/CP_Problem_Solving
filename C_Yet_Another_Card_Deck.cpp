#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n,q;cin>>n>>q;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    while(q--){
        ll x;cin>>x;
        ll p=find(v.begin(),v.end(),x)-v.begin();
        cout<<p+1<<' ';
        rotate(v.begin(),v.begin()+p,v.begin()+p+1);
        //for(auto i:v)cout<<i<<' ';cout<<endl;
    }


}


int main()
{
    ll t;
    t=1;
    //cin>>t;
    while(t--)
    {

        solve();

    }

}


