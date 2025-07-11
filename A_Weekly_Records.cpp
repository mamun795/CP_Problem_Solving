#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n;cin>>n;
    ll a[7*n+1];
    ll cnt=0;
    ll b[n];
    ll k=0;
    for(int i=1;i<=7*n;i++){
        cin>>a[i];
        cnt+=a[i];
        if(i%7==0){
            b[k++]=cnt;
            cnt=0;
        }
    }
    for(auto i:b)cout<<i<<' ';cout<<endl;


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


