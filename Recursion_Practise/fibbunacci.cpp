#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl


ll fi(ll n){
    if(n<=1){
        
        return n;
    }
    return fi(n-1)+fi(n-2);
}



void solve()
{
    ll n;cin>>n;
    cout<<fi(n)<<endl;
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


