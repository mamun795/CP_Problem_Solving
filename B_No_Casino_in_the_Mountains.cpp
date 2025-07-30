#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n,k;cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll f=true;
    ll ans=0,cnt=0;
    for(int i=0;i<n;i++){
        cnt++;
        if(v[i]==1)
        {
            cnt=0;
        }
        if(cnt==k){
            if(!f){
                cnt=0;
                i++;
                f=true;
            }
            else{
                ans++;
                cnt=0;
                i++;
                f=true;
            }
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


