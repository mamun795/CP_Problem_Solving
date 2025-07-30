#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n,m;cin>>n>>m;
    ll a[n][m];
    ll b[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>a[i][j];
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)cout<<a[j][i]<<' ';
        cout<<endl;
    }



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


