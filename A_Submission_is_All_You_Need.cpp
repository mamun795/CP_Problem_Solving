#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl
ll dx[]={0,0,1,-1,-1,-1,1,1};
ll dy[]={1,-1,0,0,1,-1,1,-1};

void solve()
{
    ll n;cin>>n;
    ll a=0,b=0,sum=0;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        if(x==0)a++;
        sum+=x;
    }
   ll  ans=sum+a;
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


