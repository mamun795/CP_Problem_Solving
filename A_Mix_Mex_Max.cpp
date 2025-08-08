#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl
ll dx[]={0,0,1,-1,-1,-1,1,1};
ll dy[]={1,-1,0,0,1,-1,1,-1};

void solve()
{
    ll n;cin>>n;
    set<ll>s;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        if(x!=-1)s.insert(x);
    }
    if(s.size()==0)hmm;
    else if(s.size()>1 || *s.begin()==0)na;
    else hmm;
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


