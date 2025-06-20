#include<bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl
#define mod   1000000007
#define Exp   1e18

void solve()
{
    ll n;cin>>n;
    ll ans=INT_MIN;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(i*i<=n)
        {
            ans=max(ans,1LL*(i*i));
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


