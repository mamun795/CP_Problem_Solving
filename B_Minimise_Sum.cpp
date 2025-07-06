#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n;cin>>n;
    vector<ll>v(n),p(n);
    ll ans=0,mi=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mi=min(mi,v[i]);
        ans+=mi;
        p[i]=mi;
    }
    if(n==2){
        cout<<ans<<endl;
        return;
    }
    ll ans1=v[0]+v[1];
    ll ans2=min(v[0],v[1]+v[2])+v[0];
    cout<<min({ans,ans1,ans2})<<endl;


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


