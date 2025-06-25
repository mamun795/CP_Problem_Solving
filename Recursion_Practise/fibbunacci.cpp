#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl


ll fi(ll n,vector<ll>&dp){
    if(n<=1){
        
        return n;
    }
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fi(n-1,dp)+fi(n-2,dp);
}



void solve()
{
    ll n;cin>>n;
    vector<ll>dp(n+1,-1);
    cout<<fi(n,dp)<<endl;
}


int main()
{
    ll t;
    t=1;
   // cin>>t;
    while(t--)
    {

        solve();

    }

}


