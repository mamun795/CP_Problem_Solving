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
    string s;cin>>s;
    s="p"+s;
    ll a=n,b=1;
    for(int i=k+1;i<=n;i++){
        if(s[i]=='#'){
            a=i;
            break;
        }
    }
    for(int i=k-1;i>=1;i--){
        if(s[i]=='#'){
            b=i;
            break;
        }
    }
    ll ans=max(n-a+1,b-1+1);
    cout<<ans+1<<endl;


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


