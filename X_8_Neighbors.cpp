#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl
ll dx[]={0,0,1,-1,-1,-1,1,1};
ll dy[]={1,-1,0,0,1,-1,1,-1};

bool isvalid(int i,int j,int n,int m){
    if(i>=0 && j>=0 && i<n && j<m) return true;
    else return false;
}


void solve()
{
    ll n,m;cin>>n>>m;
    vector<string>s(n);
    for(int i=0;i<n;i++)cin>>s[i];
    ll x,y;cin>>x>>y;
    x--,y--;
    for(int i=0;i<8;i++){
        ll ni=x+dx[i];
        ll nj=y+dy[i];
        if(isvalid(ni,nj,n,m)){
            if(s[ni][nj]!='x'){
                cout<<"no"<<endl;
                return;
            }
        }

    }
    cout<<"yes"<<endl;



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


