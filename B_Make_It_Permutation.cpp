#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n;cin>>n;
    cout<<2*n-1<<endl;
    for(int i=1;i<n;i++){
        cout<<i<<' '<<1<<' '<<i<<endl;
        cout<<i<<' '<<i+1<<' '<<n<<endl;
    }
    cout<<n<<' '<<1<<' '<<n<<endl;

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


