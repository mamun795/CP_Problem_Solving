#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n,j,k;cin>>n>>j>>k;
    vector<ll>v(n);
    ll mx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mx=max(v[i],mx);
    }
    if(k>1 || mx==v[j-1])hmm;
    else na;


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


