#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n;cin>>n;
    ll a[n];
    ll cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt+=a[i];
    }
    ll p=sqrt(cnt);
    if(p*p==cnt)hmm;
    else na;


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


