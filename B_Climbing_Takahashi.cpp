#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n;cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll temp=a[0];
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1])temp=a[i+1];
        else break;
    }
    cout<<temp<<endl;


}


int main()
{
    ll t;
    t=1;
  //  cin>>t;
    while(t--)
    {

        solve();

    }

}


