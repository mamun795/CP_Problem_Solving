#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl
ll dx[]={0,0,1,-1,-1,-1,1,1};
ll dy[]={1,-1,0,0,1,-1,1,-1};

void solve()
{
    ll n,k;cin>>n>>k;
    ll a[3]={0};
    ll sum=0;
    for(int i=0;i<n;i++ ){
        ll x;cin>>x;
        sum+=x;
        a[x]++;
    }

    if(sum==k || k>sum+1){
        cout<<-1<<endl;
         return;
    }
    for(int i=0;i<a[0];i++)cout<<0<<' ';
    for(int i=0;i<a[2];i++)cout<<2<<' ';
    for(int i=0;i<a[1];i++)cout<<1<<' ';
    cout<<endl;


}


int main()
{
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {

        solve();

    }

}


