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
    reverse(v.begin(),v.end());
    ll cnt=1,ans=0;
    for(int i=1;i<n;i++){
        if(v[i]==v[0]){
            cnt++;

        }
        else{
            ans++;
            cnt*=2;
            i=cnt-1;

        }
    }
       cout<<ans<<endl;

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


