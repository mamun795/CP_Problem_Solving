#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void reverse(ll *a,ll i,ll j){
    while(i<j){
        swap(a[i],a[j]);
        i++,j--;
    }

}

void solve()
{
    ll n,k;cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    reverse(a,n-k,n-1);
    reverse(a,0,n-1-k);
    reverse(a,0,n-1);
    for(auto i:a)cout<<i<<' ';cout<<endl;




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


