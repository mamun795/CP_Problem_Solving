#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n;cin>>n;
    ll a[n+1]={0};
    for(int i=0;i<4*n-1;i++){
        ll x;cin>>x;
        a[x]++;
    
    }
    for(int i=1;i<=n;i++){
        if(a[i]==3){
            cout<<i<<endl;
            return;
        }
    }
    cout<<endl;



}


int main()
{
    ll t;
    t=1;
    //cin>>t;
    while(t--)
    {

        solve();

    }

}


