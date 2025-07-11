#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n,k;cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]<=k){
            cout<<a[i+1]<<endl;
            return;
        }
    }
    cout<<-1<<endl;


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


