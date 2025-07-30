#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll k;cin>>k;
    ll n;cin>>n;
    ll a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cin>>a[i][j];
    }
    for(int i=0;i<n;i++){
        bool f=true;
        for(int j=0;j<n;j++){
            if(a[j][i]==k){
                hmm;
                f=false;
                break;
            }
        }
       if(f) na;
    }



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


