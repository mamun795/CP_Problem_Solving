#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n,m,x,y;cin>>n>>m>>x>>y;
    vector<string>s(n);
    for(int i=0;i<n;i++)cin>>s[i];
    ll cnt=0;
    x--;y--;
    for(int i=y;i<m;i++){
        if(s[x][i]=='.')cnt++;
        else break;
    }
    //cout<<cnt<<endl;
    for(int i=y-1;i>=0;i--){
        if(s[x][i]=='.')cnt++;
        else break;
    }
   // cout<<cnt<<endl;
    for(int i=x+1;i<n;i++){
        if(s[i][y]=='.')cnt++;
        else break;
    }
    //cout<<cnt<<endl;
    for(int i=x-1;i>=0;i--){
        if(s[i][y]=='.')cnt++;
        else break;
    }
    cout<<cnt<<endl;



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


