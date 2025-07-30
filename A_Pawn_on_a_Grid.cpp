#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n,k;cin>>n>>k;
    string s[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++)cin>>s[i][j];
    }
    ll cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            if(s[i][j]=='#')cnt++;
        }
    }
    cout<<cnt<<endl;



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


