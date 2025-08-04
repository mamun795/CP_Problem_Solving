#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n;cin>>n;
    ll a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    ll b=0,c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)b+=a[i][j];
            if(i+j==n-1)c+=a[i][j];
        }
    }
    cout<<abs(b-c)<<endl;


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


