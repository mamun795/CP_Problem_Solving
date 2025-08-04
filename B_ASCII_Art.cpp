#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
  ll n,m;cin>>n>>m;
  ll a[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)cin>>a[i][j];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i][j]==0)cout<<'.';
        else cout<<char('A'+a[i][j]-1);
    }
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


